// GGHASH:V5HtR_NrsMZgjSde1ld_NDR1VSHGF_01WOuY1ahooBUE00000b37
#ifndef _SIGNAL_H
# error "Never include <bits/sigaction.h> directly; use <signal.h> instead."
#endif
#if defined __USE_POSIX199309 || defined __USE_XOPEN_EXTENDED
#define sa_handler __sigaction_handler.sa_handler
#define sa_sigaction __sigaction_handler.sa_sigaction
#else
#endif
#define SA_NOCLDSTOP 1
#define SA_NOCLDWAIT 2
#define SA_SIGINFO 4
#if defined __USE_XOPEN_EXTENDED || defined __USE_MISC
#define SA_ONSTACK 0x08000000
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#define SA_RESTART 0x10000000
#define SA_NODEFER 0x40000000
#define SA_RESETHAND 0x80000000
#endif
#ifdef __USE_MISC
#define SA_INTERRUPT 0x20000000
#define SA_NOMASK SA_NODEFER
#define SA_ONESHOT SA_RESETHAND
#define SA_STACK SA_ONSTACK
#endif
#define SIG_BLOCK 0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2
