// GGHASH:VA9Dw1GPmuBnn_qndqGzjCSKHtmmr5bjzAx08m7gL0RM000006b8
#ifndef _LINUX_TIME_H
#define _LINUX_TIME_H 
#include <linux/types.h>
#ifndef _STRUCT_TIMESPEC
#define _STRUCT_TIMESPEC 
#endif
#define ITIMER_REAL 0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF 2
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
#define CLOCK_SGI_CYCLE 10
#define CLOCK_TAI 11
#define MAX_CLOCKS 16
#define CLOCKS_MASK (CLOCK_REALTIME | CLOCK_MONOTONIC)
#define CLOCKS_MONO CLOCK_MONOTONIC
#define TIMER_ABSTIME 0x01
#endif
