// GGHASH:V4eBPVRHjhse_DIv5l3llMziBi75LKMj6J7Nmpi1M9l4000008ee
#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitstatus.h> directly; use <sys/wait.h> instead."
#endif
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define __WTERMSIG(status) ((status) & 0x7f)
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#ifdef WCONTINUED
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#endif
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __W_CONTINUED 0xffff
#define __WCOREFLAG 0x80
