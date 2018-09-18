// GGHASH:VScL1I2ZZbhGuaQ1dvY16JL4nvoXuRKVRG6ofWuQJKn40000189a
#ifndef _SYS_RESOURCE_H
# error "Never use <bits/resource.h> directly; include <sys/resource.h> instead."
#endif
#include <bits/types.h>
#define RLIMIT_CPU RLIMIT_CPU
#define RLIMIT_FSIZE RLIMIT_FSIZE
#define RLIMIT_DATA RLIMIT_DATA
#define RLIMIT_STACK RLIMIT_STACK
#define RLIMIT_CORE RLIMIT_CORE
#define RLIMIT_RSS __RLIMIT_RSS
#define RLIMIT_NOFILE RLIMIT_NOFILE
#define RLIMIT_OFILE __RLIMIT_OFILE
#define RLIMIT_AS RLIMIT_AS
#define RLIMIT_NPROC __RLIMIT_NPROC
#define RLIMIT_MEMLOCK __RLIMIT_MEMLOCK
#define RLIMIT_LOCKS __RLIMIT_LOCKS
#define RLIMIT_SIGPENDING __RLIMIT_SIGPENDING
#define RLIMIT_MSGQUEUE __RLIMIT_MSGQUEUE
#define RLIMIT_NICE __RLIMIT_NICE
#define RLIMIT_RTPRIO __RLIMIT_RTPRIO
#define RLIMIT_RTTIME __RLIMIT_RTTIME
#define RLIMIT_NLIMITS __RLIMIT_NLIMITS
#define RLIM_NLIMITS __RLIM_NLIMITS
#ifndef __USE_FILE_OFFSET64
#define RLIM_INFINITY ((__rlim_t) -1)
#else
#define RLIM_INFINITY 0xffffffffffffffffuLL
#endif
#ifdef __USE_LARGEFILE64
#define RLIM64_INFINITY 0xffffffffffffffffuLL
#endif
#define RLIM_SAVED_MAX RLIM_INFINITY
#define RLIM_SAVED_CUR RLIM_INFINITY
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_LARGEFILE64
#endif
#define RUSAGE_SELF RUSAGE_SELF
#define RUSAGE_CHILDREN RUSAGE_CHILDREN
#ifdef __USE_GNU
#define RUSAGE_THREAD RUSAGE_THREAD
#define RUSAGE_LWP RUSAGE_THREAD
#endif
#include <bits/types/struct_timeval.h>
#include <bits/types/struct_rusage.h>
#define PRIO_MIN -20
#define PRIO_MAX 20
#define PRIO_PROCESS PRIO_PROCESS
#define PRIO_PGRP PRIO_PGRP
#define PRIO_USER PRIO_USER
#ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT_NTH
# else
#define prlimit prlimit64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
