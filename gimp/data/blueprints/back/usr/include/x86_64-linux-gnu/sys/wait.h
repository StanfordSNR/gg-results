// GGHASH:V9BOvZ3Mjw4JzrQSCHKHt7JglxYv8VURNO0OgzP9dwJc000014c0
#ifndef _SYS_WAIT_H
#define _SYS_WAIT_H 1
#include <features.h>
#include <bits/types.h>
#ifndef __pid_t_defined
#define __pid_t_defined 
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# include <signal.h>
#endif
#if defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8
# include <bits/types/struct_rusage.h>
#endif
#if !defined _STDLIB_H || (!defined __USE_XOPEN && !defined __USE_XOPEN2K8)
# include <bits/waitflags.h>
# include <bits/waitstatus.h>
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define WTERMSIG(status) __WTERMSIG (status)
#define WSTOPSIG(status) __WSTOPSIG (status)
#define WIFEXITED(status) __WIFEXITED (status)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define WIFSTOPPED(status) __WIFSTOPPED (status)
# ifdef __WIFCONTINUED
#define WIFCONTINUED(status) __WIFCONTINUED (status)
# endif
#endif
#ifdef __USE_MISC
#define WCOREFLAG __WCOREFLAG
#define WCOREDUMP(status) __WCOREDUMP (status)
#define W_EXITCODE(ret,sig) __W_EXITCODE (ret, sig)
#define W_STOPCODE(sig) __W_STOPCODE (sig)
#endif
#ifdef __USE_MISC
#define WAIT_ANY (-1)
#define WAIT_MYPGRP 0
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# ifndef __id_t_defined
#define __id_t_defined 
# endif
# include <bits/types/siginfo_t.h>
#endif
#if defined __USE_MISC || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K)
#endif
#ifdef __USE_MISC
#endif
#endif
