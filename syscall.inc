; vim: set ft=fasm:

macro syscall_push_arg reg, type, val
{
    if val eq 0
        xor r#reg, r#reg
    else if type eq uint16
        if reg in <8,9,10>
            mov r#reg, val
        else
            mov reg, val
        end if
    else if type eq uint32
        if reg in <8,9,10>
            mov r#reg, val
        else
            mov e#reg, val
        end if
    else if type eq uint64
        mov r#reg, val
    else if type eq int32
        movsx r#reg, val
    else if type eq mem 
        lea r#reg, val
    end if
}

macro syscall_0 name, num
{
    macro name
    \{
        mov eax, num
        syscall
    \}
}

macro syscall_1 name, num, arg1_type
{
    macro name arg1
    \{
         syscall_push_arg di, arg1_type, arg1
         mov eax, num
         syscall
    \}
}

macro syscall_2 name, num, arg1_type, arg2_type
{
    macro name arg1, arg2
    \{
         syscall_push_arg di, arg1_type, arg1
         syscall_push_arg si, arg2_type, arg2
         mov eax, num
         syscall
    \}
}

macro syscall_3 name, num, arg1_type, arg2_type, arg3_type
{
    macro name arg1, arg2, arg3
    \{
         syscall_push_arg di, arg1_type, arg1
         syscall_push_arg si, arg2_type, arg2
         syscall_push_arg dx, arg3_type, arg3
         mov eax, num
         syscall
    \}
}

macro syscall_4 name, num, arg1_type, arg2_type, arg3_type, arg4_type
{
    macro name arg1, arg2, arg3, arg4
    \{
         syscall_push_arg di, arg1_type, arg1
         syscall_push_arg si, arg2_type, arg2
         syscall_push_arg dx, arg3_type, arg3
         syscall_push_arg 10, arg4_type, arg4
         mov eax, num
         syscall
    \}
}

macro syscall_5 name, num, arg1_type, arg2_type, arg3_type, arg4_type, arg5_type
{
    macro name arg1, arg2, arg3, arg4, arg5
    \{
         syscall_push_arg di, arg1_type, arg1
         syscall_push_arg si, arg2_type, arg2
         syscall_push_arg dx, arg3_type, arg3
         syscall_push_arg 10, arg4_type, arg4
         syscall_push_arg 8, arg5_type, arg5
         mov eax, num
         syscall
    \}
}

macro syscall_6 name, num, arg1_type, arg2_type, arg3_type, arg4_type, arg5_type, arg6_type
{
    macro name arg1, arg2, arg3, arg4
    \{
         syscall_push_arg di, arg1_type, arg1
         syscall_push_arg si, arg2_type, arg2
         syscall_push_arg dx, arg3_type, arg3
         syscall_push_arg 10, arg4_type, arg4
         syscall_push_arg 8, arg5_type, arg5
         syscall_push_arg 9, arg6_type, arg6
         mov eax, num
         syscall
    \}
}

include 'syscall_proto.inc'
