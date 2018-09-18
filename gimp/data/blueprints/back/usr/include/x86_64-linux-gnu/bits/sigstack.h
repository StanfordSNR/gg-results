// GGHASH:VFtapfhXrP2WrIgMe.FL17ILy7v9VKOr0UYCvlSBdn0E0000048f
#ifndef _BITS_SIGSTACK_H
#define _BITS_SIGSTACK_H 1
#if !defined _SIGNAL_H && !defined _SYS_UCONTEXT_H
# error "Never include this file directly.  Use <signal.h> instead"
#endif
#define MINSIGSTKSZ 2048
#define SIGSTKSZ 8192
#endif
