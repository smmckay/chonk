#!/usr/bin/env python3

from bs4 import BeautifulSoup

f = open('syscall-table.html')
s = f.read()
soup = BeautifulSoup(s, 'html.parser')

arg_type_lookup = {
        'unsigned': 'uint32',
        'unsigned int': 'uint32',
        'unsigned long': 'uint64',
        'u32': 'uint32',
        'u64': 'uint64',
        'int': 'int32',
        'long': 'int64',
        '__s32': 'int32',
        '__s64': 'int64',
        '__u32': 'uint32',
        '__u64': 'uint64',
        'size_t': 'uint64',
        'umode_t': 'uint16',
        'off_t': 'int32',
        'loff_t': 'int64',
        'key_t': 'int32',
        'pid_t': 'int32',
        'uid_t': 'uint32',
        'gid_t': 'uint32',
        'cap_user_header_t': 'mem',
        'cap_user_data_t': 'mem',
        'const cap_user_data_t': 'mem',
        'qid_t': 'uint32',
        'aio_context_t': 'uint64',
        'const clockid_t': 'int32',
        'timer_t': 'int32',
        'mqd_t': 'int32',
        'key_serial_t': 'int32'
}

def simplify_arg_type(arg_type):
    if '*' in arg_type:
        return 'mem'
    return arg_type_lookup[arg_type]

for elem in soup.find_all(class_='tbls-entry-collapsed'):
    args = elem.nextSibling
    if args.attrs['class'][0] != 'tbls-arguments-collapsed':
        arg_types = []
    else:
        args = args.td.find_all('tr')[1].find_all('td')
        arg_types = [arg.strong.text for arg in args]
    tds = elem.find_all('td')
    syscall_num = tds[0].text
    syscall_name = tds[1].text

    print(f"syscall_{len(arg_types)} sys_{syscall_name}, {syscall_num}", end='')
    if len(arg_types) > 0:
        print(f", {', '.join(simplify_arg_type(at) for at in arg_types)}", end='')
    print()

