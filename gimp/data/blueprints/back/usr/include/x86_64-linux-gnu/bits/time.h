// GGHASH:VykcYMfZCS9u9reNmndKf0CDcgUVLvJLwNqCQJQenWb000000bb6
#ifndef _BITS_TIME_H
#define _BITS_TIME_H 1
#include <bits/types.h>
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#if (!defined __STRICT_ANSI__ || defined __USE_POSIX) && !defined __USE_XOPEN2K
#define CLK_TCK ((__clock_t) __sysconf (2))
#endif
#ifdef __USE_POSIX199309
#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3
#define CLOCK_MONOTONIC_RAW 4
#define CLOCK_REALTIME_COARSE 5
#define CLOCK_MONOTONIC_COARSE 6
#define CLOCK_BOOTTIME 7
#define CLOCK_REALTIME_ALARM 8
#define CLOCK_BOOTTIME_ALARM 9
#define CLOCK_TAI 11
#define TIMER_ABSTIME 1
#endif
#ifdef __USE_GNU
# include <bits/timex.h>
#endif
#endif
