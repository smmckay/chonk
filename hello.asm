; vim: set ft=fasm:

include 'syscall.inc'

format ELF64
public _start
public msg

section '.text' executable

_start:
    sys_write 1, [msg], msg_size
    sys_exit 0

section '.data'

msg db 'Hello, world!',0xA
msg_size = $-msg
