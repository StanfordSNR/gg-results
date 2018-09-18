// GGHASH:V6dBGbwa.wN_iZsm1WCgZ6MkZxn49isw1UeZ3Dtat_Y000000d89
#ifndef _UTMPX_H
# error "Never include <bits/utmpx.h> directly; use <utmpx.h> instead."
#endif
#include <bits/types.h>
#include <sys/time.h>
#include <bits/wordsize.h>
#ifdef __USE_GNU
# include <paths.h>
#define _PATH_UTMPX _PATH_UTMP
#define _PATH_WTMPX _PATH_WTMP
#endif
#define __UT_LINESIZE 32
#define __UT_NAMESIZE 32
#define __UT_HOSTSIZE 256
#ifdef __USE_GNU
#else
#endif
#if __WORDSIZE_TIME64_COMPAT32
#else
#endif
#define EMPTY 0
#ifdef __USE_GNU
#define RUN_LVL 1
#endif
#define BOOT_TIME 2
#define NEW_TIME 3
#define OLD_TIME 4
#define INIT_PROCESS 5
#define LOGIN_PROCESS 6
#define USER_PROCESS 7
#define DEAD_PROCESS 8
#ifdef __USE_GNU
#define ACCOUNTING 9
#endif
