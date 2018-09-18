// GGHASH:VbhPLCyDgwrFiRNrTZqXFiiOtb40DwEOJQyKoCG4jQXg00002fd3
#ifndef _SIGNAL_H
#define _SIGNAL_H 
#include <features.h>
#include <bits/types.h>
#include <bits/signum.h>
#include <bits/types/sig_atomic_t.h>
#if defined __USE_POSIX
#include <bits/types/sigset_t.h>
#endif
#if defined __USE_XOPEN || defined __USE_XOPEN2K
# ifndef __pid_t_defined
#define __pid_t_defined 
#endif
#ifdef __USE_XOPEN
# endif
# ifndef __uid_t_defined
#define __uid_t_defined 
# endif
#endif
#ifdef __USE_POSIX199309
# include <bits/types/struct_timespec.h>
#endif
#if defined __USE_POSIX199309 || defined __USE_XOPEN_EXTENDED
# include <bits/types/siginfo_t.h>
# include <bits/siginfo-consts.h>
#endif
#ifdef __USE_MISC
# include <bits/types/sigval_t.h>
#endif
#ifdef __USE_POSIX199309
# include <bits/types/sigevent_t.h>
# include <bits/sigevent-consts.h>
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#else
# ifdef __REDIRECT_NTH
# else
#define signal __sysv_signal
# endif
#endif
#if defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8
#endif
#ifdef __USE_POSIX
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN_EXTENDED
# ifdef __GNUC__
# else
#define sigpause(sig) __sigpause ((sig), 1)
# endif
#endif
#ifdef __USE_MISC
#define sigmask(sig) ((int)(1u << ((sig) - 1)))
#endif
#ifdef __USE_MISC
#define NSIG _NSIG
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX
# ifdef __USE_GNU
# endif
# include <bits/sigaction.h>
# ifdef __USE_POSIX199506
# endif
# ifdef __USE_POSIX199309
# endif
#endif
#ifdef __USE_MISC
# include <bits/sigcontext.h>
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#define __need_size_t 
# include <stddef.h>
# include <bits/types/stack_t.h>
# if defined __USE_XOPEN || defined __USE_XOPEN2K8
# include <sys/ucontext.h>
# endif
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_MISC
# include <bits/sigstack.h>
# include <bits/ss_flags.h>
#endif
#if ((defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) || defined __USE_MISC)
# include <bits/types/struct_sigstack.h>
#endif
#if ((defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) || defined __USE_MISC)
#endif
#ifdef __USE_XOPEN_EXTENDED
#endif
#if defined __USE_POSIX199506 || defined __USE_UNIX98
# include <bits/pthreadtypes.h>
# include <bits/sigthread.h>
#endif
#define SIGRTMIN (__libc_current_sigrtmin ())
#define SIGRTMAX (__libc_current_sigrtmax ())
#endif
