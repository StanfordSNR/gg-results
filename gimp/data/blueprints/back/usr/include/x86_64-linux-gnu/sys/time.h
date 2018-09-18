// GGHASH:Va3SEajsMCqtrf1JhgT76PIPF.lzJap5Z9PPDI_UccNo00001a00
#ifndef _SYS_TIME_H
#define _SYS_TIME_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/types/time_t.h>
#include <bits/types/struct_timeval.h>
#ifndef __suseconds_t_defined
#define __suseconds_t_defined 
#endif
#include <sys/select.h>
#ifdef __USE_GNU
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#endif
#ifdef __USE_MISC
#else
#endif
#ifdef __USE_MISC
#endif
#define ITIMER_REAL ITIMER_REAL
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define ITIMER_PROF ITIMER_PROF
#if defined __USE_GNU && !defined __cplusplus
#else
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#endif
#endif
