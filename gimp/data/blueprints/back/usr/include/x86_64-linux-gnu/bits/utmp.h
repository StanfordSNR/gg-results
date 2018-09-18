// GGHASH:VQ68dIvS0zE3wCS4VZc790pxopEg3mMtu7HHSoxQOT_800000fd5
#ifndef _UTMP_H
# error "Never include <bits/utmp.h> directly; use <utmp.h> instead."
#endif
#include <paths.h>
#include <sys/time.h>
#include <sys/types.h>
#include <bits/wordsize.h>
#define UT_LINESIZE 32
#define UT_NAMESIZE 32
#define UT_HOSTSIZE 256
#if __WORDSIZE_TIME64_COMPAT32
#else
#endif
#if __WORDSIZE_TIME64_COMPAT32
#else
#endif
#define ut_name ut_user
#ifndef _NO_UT_TIME
#define ut_time ut_tv.tv_sec
#endif
#define ut_xtime ut_tv.tv_sec
#define ut_addr ut_addr_v6[0]
#define EMPTY 0
#define RUN_LVL 1
#define BOOT_TIME 2
#define NEW_TIME 3
#define OLD_TIME 4
#define INIT_PROCESS 5
#define LOGIN_PROCESS 6
#define USER_PROCESS 7
#define DEAD_PROCESS 8
#define ACCOUNTING 9
#define UT_UNKNOWN EMPTY
#define _HAVE_UT_TYPE 1
#define _HAVE_UT_PID 1
#define _HAVE_UT_ID 1
#define _HAVE_UT_TV 1
#define _HAVE_UT_HOST 1
