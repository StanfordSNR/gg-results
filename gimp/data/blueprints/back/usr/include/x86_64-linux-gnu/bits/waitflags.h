// GGHASH:ViY4snQ1V6toRXxG.Fje1iqyQT349F.cJEw2yzc.p94Y000008a9
#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitflags.h> directly; use <sys/wait.h> instead."
#endif
#define WNOHANG 1
#define WUNTRACED 2
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#define WSTOPPED 2
#define WEXITED 4
#define WCONTINUED 8
#define WNOWAIT 0x01000000
#endif
#define __WNOTHREAD 0x20000000
#define __WALL 0x40000000
#define __WCLONE 0x80000000
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# ifndef __ENUM_IDTYPE_T
#define __ENUM_IDTYPE_T 1
#undef P_ALL
#undef P_PID
#undef P_PGID
# endif
#endif
