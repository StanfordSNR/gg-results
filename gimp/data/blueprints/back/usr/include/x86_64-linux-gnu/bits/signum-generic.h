// GGHASH:VMO_CnrrosjOBrSh9stFfqwKXBn2Tho7Ch4kgCfFdGTU000010f4
#ifndef _BITS_SIGNUM_GENERIC_H
#define _BITS_SIGNUM_GENERIC_H 1
#ifndef _SIGNAL_H
#error "Never include <bits/signum-generic.h> directly; use <signal.h> instead."
#endif
#define SIG_ERR ((__sighandler_t) -1)
#define SIG_DFL ((__sighandler_t) 0)
#define SIG_IGN ((__sighandler_t) 1)
#ifdef __USE_XOPEN
#define SIG_HOLD ((__sighandler_t) 2)
#endif
#define SIGINT 2
#define SIGILL 4
#define SIGABRT 6
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15
#define SIGHUP 1
#define SIGQUIT 3
#define SIGTRAP 5
#define SIGKILL 9
#define SIGBUS 10
#define SIGSYS 12
#define SIGPIPE 13
#define SIGALRM 14
#define SIGURG 16
#define SIGSTOP 17
#define SIGTSTP 18
#define SIGCONT 19
#define SIGCHLD 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGPOLL 23
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGUSR1 30
#define SIGUSR2 31
#define SIGWINCH 28
#define SIGIO SIGPOLL
#define SIGIOT SIGABRT
#define SIGCLD SIGCHLD
#define __SIGRTMIN 32
#define __SIGRTMAX __SIGRTMIN
#define _NSIG (__SIGRTMAX + 1)
#endif
