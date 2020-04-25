syscall_3 sys_read, 0, uint32, mem, uint64
syscall_3 sys_write, 1, uint32, mem, uint64
syscall_3 sys_open, 2, mem, int32, uint16
syscall_1 sys_close, 3, uint32
syscall_2 sys_stat, 4, mem, mem
syscall_2 sys_fstat, 5, uint32, mem
syscall_2 sys_lstat, 6, mem, mem
syscall_3 sys_poll, 7, mem, uint32, int32
syscall_3 sys_lseek, 8, uint32, int32, uint32
syscall_6 sys_mmap, 9, uint64, uint64, uint64, uint64, uint64, uint64
syscall_3 sys_mprotect, 10, uint64, uint64, uint64
syscall_2 sys_munmap, 11, uint64, uint64
syscall_1 sys_brk, 12, uint64
syscall_4 sys_rt_sigaction, 13, int32, mem, mem, uint64
syscall_4 sys_rt_sigprocmask, 14, int32, mem, mem, uint64
syscall_0 sys_rt_sigreturn, 15
syscall_3 sys_ioctl, 16, uint32, uint32, uint64
syscall_4 sys_pread64, 17, uint32, mem, uint64, int64
syscall_4 sys_pwrite64, 18, uint32, mem, uint64, int64
syscall_3 sys_readv, 19, uint64, mem, uint64
syscall_3 sys_writev, 20, uint64, mem, uint64
syscall_2 sys_access, 21, mem, int32
syscall_1 sys_pipe, 22, mem
syscall_5 sys_select, 23, int32, mem, mem, mem, mem
syscall_0 sys_sched_yield, 24
syscall_1 sys_mremap, 25, uint64
syscall_3 sys_msync, 26, uint64, uint64, int32
syscall_3 sys_mincore, 27, uint64, uint64, mem
syscall_3 sys_madvise, 28, uint64, uint64, int32
syscall_3 sys_shmget, 29, int32, uint64, int32
syscall_3 sys_shmat, 30, int32, mem, int32
syscall_3 sys_shmctl, 31, int32, int32, mem
syscall_1 sys_dup, 32, uint32
syscall_2 sys_dup2, 33, uint32, uint32
syscall_0 sys_pause, 34
syscall_2 sys_nanosleep, 35, mem, mem
syscall_2 sys_getitimer, 36, int32, mem
syscall_1 sys_alarm, 37, uint32
syscall_3 sys_setitimer, 38, int32, mem, mem
syscall_0 sys_getpid, 39
syscall_4 sys_sendfile, 40, int32, int32, mem, uint64
syscall_3 sys_socket, 41, int32, int32, int32
syscall_3 sys_connect, 42, int32, mem, int32
syscall_3 sys_accept, 43, int32, mem, mem
syscall_6 sys_sendto, 44, int32, mem, uint64, uint32, mem, int32
syscall_6 sys_recvfrom, 45, int32, mem, uint64, uint32, mem, mem
syscall_3 sys_sendmsg, 46, int32, mem, uint32
syscall_3 sys_recvmsg, 47, int32, mem, uint32
syscall_2 sys_shutdown, 48, int32, int32
syscall_3 sys_bind, 49, int32, mem, int32
syscall_2 sys_listen, 50, int32, int32
syscall_3 sys_getsockname, 51, int32, mem, mem
syscall_3 sys_getpeername, 52, int32, mem, mem
syscall_4 sys_socketpair, 53, int32, int32, int32, mem
syscall_5 sys_setsockopt, 54, int32, int32, int32, mem, int32
syscall_5 sys_getsockopt, 55, int32, int32, int32, mem, mem
syscall_5 sys_clone, 56, uint64, uint64, mem, mem, int32
syscall_0 sys_fork, 57
syscall_0 sys_vfork, 58
syscall_3 sys_execve, 59, mem, mem, mem
syscall_1 sys_exit, 60, int32
syscall_4 sys_wait4, 61, int32, mem, int32, mem
syscall_2 sys_kill, 62, int32, int32
syscall_1 sys_uname, 63, mem
syscall_3 sys_semget, 64, int32, int32, int32
syscall_3 sys_semop, 65, int32, mem, uint32
syscall_4 sys_semctl, 66, int32, int32, int32, uint64
syscall_1 sys_shmdt, 67, mem
syscall_2 sys_msgget, 68, int32, int32
syscall_4 sys_msgsnd, 69, int32, mem, uint64, int32
syscall_5 sys_msgrcv, 70, int32, mem, uint64, int64, int32
syscall_3 sys_msgctl, 71, int32, int32, mem
syscall_3 sys_fcntl, 72, uint32, uint32, uint64
syscall_2 sys_flock, 73, uint32, uint32
syscall_1 sys_fsync, 74, uint32
syscall_1 sys_fdatasync, 75, uint32
syscall_2 sys_truncate, 76, mem, int64
syscall_2 sys_ftruncate, 77, uint32, uint64
syscall_3 sys_getdents, 78, uint32, mem, uint32
syscall_2 sys_getcwd, 79, mem, uint64
syscall_1 sys_chdir, 80, mem
syscall_1 sys_fchdir, 81, uint32
syscall_2 sys_rename, 82, mem, mem
syscall_2 sys_mkdir, 83, mem, uint16
syscall_1 sys_rmdir, 84, mem
syscall_2 sys_creat, 85, mem, uint16
syscall_2 sys_link, 86, mem, mem
syscall_1 sys_unlink, 87, mem
syscall_2 sys_symlink, 88, mem, mem
syscall_3 sys_readlink, 89, mem, mem, int32
syscall_2 sys_chmod, 90, mem, uint16
syscall_2 sys_fchmod, 91, uint32, uint16
syscall_3 sys_chown, 92, mem, uint32, uint32
syscall_3 sys_fchown, 93, uint32, uint32, uint32
syscall_3 sys_lchown, 94, mem, uint32, uint32
syscall_1 sys_umask, 95, int32
syscall_2 sys_gettimeofday, 96, mem, mem
syscall_2 sys_getrlimit, 97, uint32, mem
syscall_2 sys_getrusage, 98, int32, mem
syscall_1 sys_sysinfo, 99, mem
syscall_1 sys_times, 100, mem
syscall_4 sys_ptrace, 101, int64, int64, uint64, uint64
syscall_0 sys_getuid, 102
syscall_3 sys_syslog, 103, int32, mem, int32
syscall_0 sys_getgid, 104
syscall_1 sys_setuid, 105, uint32
syscall_1 sys_setgid, 106, uint32
syscall_0 sys_geteuid, 107
syscall_0 sys_getegid, 108
syscall_2 sys_setpgid, 109, int32, int32
syscall_0 sys_getppid, 110
syscall_0 sys_getpgrp, 111
syscall_0 sys_setsid, 112
syscall_2 sys_setreuid, 113, uint32, uint32
syscall_2 sys_setregid, 114, uint32, uint32
syscall_2 sys_getgroups, 115, int32, mem
syscall_2 sys_setgroups, 116, int32, mem
syscall_3 sys_setresuid, 117, uint32, uint32, uint32
syscall_3 sys_getresuid, 118, mem, mem, mem
syscall_3 sys_setresgid, 119, uint32, uint32, uint32
syscall_3 sys_getresgid, 120, mem, mem, mem
syscall_1 sys_getpgid, 121, int32
syscall_1 sys_setfsuid, 122, uint32
syscall_1 sys_setfsgid, 123, uint32
syscall_1 sys_getsid, 124, int32
syscall_2 sys_capget, 125, mem, mem
syscall_2 sys_capset, 126, mem, mem
syscall_2 sys_rt_sigpending, 127, mem, uint64
syscall_4 sys_rt_sigtimedwait, 128, mem, mem, mem, uint64
syscall_3 sys_rt_sigqueueinfo, 129, int32, int32, mem
syscall_2 sys_rt_sigsuspend, 130, mem, uint64
syscall_2 sys_sigaltstack, 131, mem, mem
syscall_2 sys_utime, 132, mem, mem
syscall_3 sys_mknod, 133, mem, uint16, uint32
syscall_1 sys_uselib, 134, mem
syscall_1 sys_personality, 135, uint32
syscall_2 sys_ustat, 136, uint32, mem
syscall_2 sys_statfs, 137, mem, mem
syscall_2 sys_fstatfs, 138, uint32, mem
syscall_3 sys_sysfs, 139, int32, uint64, uint64
syscall_2 sys_getpriority, 140, int32, int32
syscall_3 sys_setpriority, 141, int32, int32, int32
syscall_2 sys_sched_setparam, 142, int32, mem
syscall_2 sys_sched_getparam, 143, int32, mem
syscall_3 sys_sched_setscheduler, 144, int32, int32, mem
syscall_1 sys_sched_getscheduler, 145, int32
syscall_1 sys_sched_get_priority_max, 146, int32
syscall_1 sys_sched_get_priority_min, 147, int32
syscall_2 sys_sched_rr_get_interval, 148, int32, mem
syscall_2 sys_mlock, 149, uint64, uint64
syscall_2 sys_munlock, 150, uint64, uint64
syscall_1 sys_mlockall, 151, int32
syscall_0 sys_munlockall, 152
syscall_0 sys_vhangup, 153
syscall_3 sys_modify_ldt, 154, int32, mem, uint64
syscall_2 sys_pivot_root, 155, mem, mem
syscall_1 sys__sysctl, 156, mem
syscall_5 sys_prctl, 157, int32, uint64, uint64, uint64, uint64
syscall_3 sys_arch_prctl, 158, mem, int32, mem
syscall_1 sys_adjtimex, 159, mem
syscall_2 sys_setrlimit, 160, uint32, mem
syscall_1 sys_chroot, 161, mem
syscall_0 sys_sync, 162
syscall_1 sys_acct, 163, mem
syscall_2 sys_settimeofday, 164, mem, mem
syscall_5 sys_mount, 165, mem, mem, mem, uint64, mem
syscall_2 sys_umount2, 166, mem, int32
syscall_2 sys_swapon, 167, mem, int32
syscall_1 sys_swapoff, 168, mem
syscall_4 sys_reboot, 169, int32, int32, uint32, mem
syscall_2 sys_sethostname, 170, mem, int32
syscall_2 sys_setdomainname, 171, mem, int32
syscall_1 sys_iopl, 172, uint32
syscall_3 sys_ioperm, 173, uint64, uint64, int32
syscall_0 sys_create_module, 174
syscall_3 sys_init_module, 175, mem, uint64, mem
syscall_2 sys_delete_module, 176, mem, uint32
syscall_0 sys_get_kernel_syms, 177
syscall_0 sys_query_module, 178
syscall_4 sys_quotactl, 179, uint32, mem, uint32, mem
syscall_0 sys_nfsservctl, 180
syscall_0 sys_getpmsg, 181
syscall_0 sys_putpmsg, 182
syscall_0 sys_afs_syscall, 183
syscall_0 sys_tuxcall, 184
syscall_0 sys_security, 185
syscall_0 sys_gettid, 186
syscall_3 sys_readahead, 187, int32, int64, uint64
syscall_5 sys_setxattr, 188, mem, mem, mem, uint64, int32
syscall_5 sys_lsetxattr, 189, mem, mem, mem, uint64, int32
syscall_5 sys_fsetxattr, 190, int32, mem, mem, uint64, int32
syscall_4 sys_getxattr, 191, mem, mem, mem, uint64
syscall_4 sys_lgetxattr, 192, mem, mem, mem, uint64
syscall_4 sys_fgetxattr, 193, int32, mem, mem, uint64
syscall_3 sys_listxattr, 194, mem, mem, uint64
syscall_3 sys_llistxattr, 195, mem, mem, uint64
syscall_3 sys_flistxattr, 196, int32, mem, uint64
syscall_2 sys_removexattr, 197, mem, mem
syscall_2 sys_lremovexattr, 198, mem, mem
syscall_2 sys_fremovexattr, 199, int32, mem
syscall_2 sys_tkill, 200, int32, int32
syscall_1 sys_time, 201, mem
syscall_6 sys_futex, 202, mem, int32, uint32, mem, mem, uint32
syscall_3 sys_sched_setaffinity, 203, int32, uint32, mem
syscall_3 sys_sched_getaffinity, 204, int32, uint32, mem
syscall_1 sys_set_thread_area, 205, mem
syscall_2 sys_io_setup, 206, uint32, mem
syscall_1 sys_io_destroy, 207, uint64
syscall_5 sys_io_getevents, 208, uint64, int64, int64, mem, mem
syscall_3 sys_io_submit, 209, uint64, int64, mem
syscall_3 sys_io_cancel, 210, uint64, mem, mem
syscall_1 sys_get_thread_area, 211, mem
syscall_3 sys_lookup_dcookie, 212, uint64, mem, uint64
syscall_1 sys_epoll_create, 213, int32
syscall_0 sys_epoll_ctl_old, 214
syscall_0 sys_epoll_wait_old, 215
syscall_5 sys_remap_file_pages, 216, uint64, uint64, uint64, uint64, uint64
syscall_3 sys_getdents64, 217, uint32, mem, uint32
syscall_1 sys_set_tid_address, 218, mem
syscall_0 sys_restart_syscall, 219
syscall_4 sys_semtimedop, 220, int32, mem, uint32, mem
syscall_4 sys_fadvise64, 221, int32, int64, uint64, int32
syscall_3 sys_timer_create, 222, int32, mem, mem
syscall_4 sys_timer_settime, 223, int32, int32, mem, mem
syscall_2 sys_timer_gettime, 224, int32, mem
syscall_1 sys_timer_getoverrun, 225, int32
syscall_1 sys_timer_delete, 226, int32
syscall_2 sys_clock_settime, 227, int32, mem
syscall_2 sys_clock_gettime, 228, int32, mem
syscall_2 sys_clock_getres, 229, int32, mem
syscall_4 sys_clock_nanosleep, 230, int32, int32, mem, mem
syscall_1 sys_exit_group, 231, int32
syscall_4 sys_epoll_wait, 232, int32, mem, int32, int32
syscall_4 sys_epoll_ctl, 233, int32, int32, int32, mem
syscall_3 sys_tgkill, 234, int32, int32, int32
syscall_2 sys_utimes, 235, mem, mem
syscall_0 sys_vserver, 236
syscall_6 sys_mbind, 237, uint64, uint64, uint64, mem, uint64, uint32
syscall_3 sys_set_mempolicy, 238, int32, mem, uint64
syscall_5 sys_get_mempolicy, 239, mem, mem, uint64, uint64, uint64
syscall_4 sys_mq_open, 240, mem, int32, uint16, mem
syscall_1 sys_mq_unlink, 241, mem
syscall_5 sys_mq_timedsend, 242, int32, mem, uint64, uint32, mem
syscall_5 sys_mq_timedreceive, 243, int32, mem, uint64, mem, mem
syscall_2 sys_mq_notify, 244, int32, mem
syscall_3 sys_mq_getsetattr, 245, int32, mem, mem
syscall_4 sys_kexec_load, 246, uint64, uint64, mem, uint64
syscall_5 sys_waitid, 247, int32, int32, mem, int32, mem
syscall_5 sys_add_key, 248, mem, mem, mem, uint64, int32
syscall_4 sys_request_key, 249, mem, mem, mem, int32
syscall_5 sys_keyctl, 250, int32, uint64, uint64, uint64, uint64
syscall_3 sys_ioprio_set, 251, int32, int32, int32
syscall_2 sys_ioprio_get, 252, int32, int32
syscall_0 sys_inotify_init, 253
syscall_3 sys_inotify_add_watch, 254, int32, mem, uint32
syscall_2 sys_inotify_rm_watch, 255, int32, int32
syscall_4 sys_migrate_pages, 256, int32, uint64, mem, mem
syscall_4 sys_openat, 257, int32, mem, int32, uint16
syscall_3 sys_mkdirat, 258, int32, mem, uint16
syscall_4 sys_mknodat, 259, int32, mem, uint16, uint32
syscall_5 sys_fchownat, 260, int32, mem, uint32, uint32, int32
syscall_3 sys_futimesat, 261, int32, mem, mem
syscall_4 sys_newfstatat, 262, int32, mem, mem, int32
syscall_3 sys_unlinkat, 263, int32, mem, int32
syscall_4 sys_renameat, 264, int32, mem, int32, mem
syscall_5 sys_linkat, 265, int32, mem, int32, mem, int32
syscall_3 sys_symlinkat, 266, mem, int32, mem
syscall_4 sys_readlinkat, 267, int32, mem, mem, int32
syscall_3 sys_fchmodat, 268, int32, mem, uint16
syscall_3 sys_faccessat, 269, int32, mem, int32
syscall_6 sys_pselect6, 270, int32, mem, mem, mem, mem, mem
syscall_5 sys_ppoll, 271, mem, uint32, mem, mem, uint64
syscall_1 sys_unshare, 272, uint64
syscall_2 sys_set_robust_list, 273, mem, uint64
syscall_3 sys_get_robust_list, 274, int32, mem, mem
syscall_6 sys_splice, 275, int32, mem, int32, mem, uint64, uint32
syscall_4 sys_tee, 276, int32, int32, uint64, uint32
syscall_4 sys_sync_file_range, 277, int32, int64, int64, uint32
syscall_4 sys_vmsplice, 278, int32, mem, uint64, uint32
syscall_6 sys_move_pages, 279, int32, uint64, mem, mem, mem, int32
syscall_4 sys_utimensat, 280, int32, mem, mem, int32
syscall_6 sys_epoll_pwait, 281, int32, mem, int32, int32, mem, uint64
syscall_3 sys_signalfd, 282, int32, mem, uint64
syscall_2 sys_timerfd_create, 283, int32, int32
syscall_1 sys_eventfd, 284, uint32
syscall_4 sys_fallocate, 285, int32, int32, int64, int64
syscall_4 sys_timerfd_settime, 286, int32, int32, mem, mem
syscall_2 sys_timerfd_gettime, 287, int32, mem
syscall_4 sys_accept4, 288, int32, mem, mem, int32
syscall_4 sys_signalfd4, 289, int32, mem, uint64, int32
syscall_2 sys_eventfd2, 290, uint32, int32
syscall_1 sys_epoll_create1, 291, int32
syscall_3 sys_dup3, 292, uint32, uint32, int32
syscall_2 sys_pipe2, 293, mem, int32
syscall_1 sys_inotify_init1, 294, int32
syscall_5 sys_preadv, 295, uint64, mem, uint64, uint64, uint64
syscall_5 sys_pwritev, 296, uint64, mem, uint64, uint64, uint64
syscall_4 sys_rt_tgsigqueueinfo, 297, int32, int32, int32, mem
syscall_5 sys_perf_event_open, 298, mem, int32, int32, int32, uint64
syscall_5 sys_recvmmsg, 299, int32, mem, uint32, uint32, mem
syscall_2 sys_fanotify_init, 300, uint32, uint32
syscall_5 sys_fanotify_mark, 301, int32, uint32, uint64, int32, mem
syscall_4 sys_prlimit64, 302, int32, uint32, mem, mem
syscall_5 sys_name_to_handle_at, 303, int32, mem, mem, mem, int32
syscall_3 sys_open_by_handle_at, 304, int32, mem, int32
syscall_2 sys_clock_adjtime, 305, int32, mem
syscall_1 sys_syncfs, 306, int32
syscall_4 sys_sendmmsg, 307, int32, mem, uint32, uint32
syscall_2 sys_setns, 308, int32, int32
syscall_3 sys_getcpu, 309, mem, mem, mem
syscall_6 sys_process_vm_readv, 310, int32, mem, uint64, mem, uint64, uint64
syscall_6 sys_process_vm_writev, 311, int32, mem, uint64, mem, uint64, uint64
syscall_5 sys_kcmp, 312, int32, int32, int32, uint64, uint64
syscall_3 sys_finit_module, 313, int32, mem, int32
