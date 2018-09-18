// GGHASH:VWnWu3vOijiBlRrld2FnEGIfwNhhdP1p.PbsrMb_EUIw00000e0e
#ifndef _TERMIOS_H
#define _TERMIOS_H 1
#include <features.h>
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# include <bits/types.h>
# ifndef __pid_t_defined
#define __pid_t_defined 
# endif
#endif
#include <bits/termios.h>
#ifdef __USE_MISC
#define CCEQ(val,c) ((c) == (val) && (val) != _POSIX_VDISABLE)
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#ifdef __USE_MISC
# include <sys/ttydefaults.h>
#endif
#endif
