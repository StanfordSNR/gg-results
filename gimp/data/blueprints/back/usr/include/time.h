// GGHASH:VHbNLLDb0sSt1n0G6.MugQeHghb40.2rgjMwTlUPlMCY00002878
#ifndef _TIME_H
#define _TIME_H 1
#include <features.h>
#define __need_size_t 
#define __need_NULL 
#include <stddef.h>
#include <bits/time.h>
#include <bits/types/clock_t.h>
#include <bits/types/time_t.h>
#include <bits/types/struct_tm.h>
#if defined __USE_POSIX199309 || defined __USE_ISOC11
# include <bits/types/struct_timespec.h>
#endif
#ifdef __USE_POSIX199309
# include <bits/types/clockid_t.h>
# include <bits/types/timer_t.h>
# include <bits/types/struct_itimerspec.h>
#endif
#ifdef __USE_XOPEN2K
# ifndef __pid_t_defined
#define __pid_t_defined 
# endif
#endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#endif
#ifdef __USE_ISOC11
#define TIME_UTC 1
#endif
#ifdef __USE_XOPEN
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_POSIX
#endif
#ifdef __USE_POSIX
#endif
#ifdef __USE_POSIX
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#ifdef __USE_MISC
#endif
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX199309
# ifdef __USE_XOPEN2K
# endif
#endif
#ifdef __USE_ISOC11
#endif
#ifdef __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_GNU
#endif
#endif
