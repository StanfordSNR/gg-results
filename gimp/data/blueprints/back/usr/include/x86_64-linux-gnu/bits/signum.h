// GGHASH:VqNpZECEJzFv9tuGZ4erpGpqKjptXCHs1.pyqjOTqNdI00000661
#ifndef _BITS_SIGNUM_H
#define _BITS_SIGNUM_H 1
#ifndef _SIGNAL_H
#error "Never include <bits/signum.h> directly; use <signal.h> instead."
#endif
#include <bits/signum-generic.h>
#define SIGSTKFLT 16
#define SIGPWR 30
#undef SIGBUS
#define SIGBUS 7
#undef SIGUSR1
#define SIGUSR1 10
#undef SIGUSR2
#define SIGUSR2 12
#undef SIGCHLD
#define SIGCHLD 17
#undef SIGCONT
#define SIGCONT 18
#undef SIGSTOP
#define SIGSTOP 19
#undef SIGTSTP
#define SIGTSTP 20
#undef SIGURG
#define SIGURG 23
#undef SIGPOLL
#define SIGPOLL 29
#undef SIGSYS
#define SIGSYS 31
#undef __SIGRTMAX
#define __SIGRTMAX 64
#endif
