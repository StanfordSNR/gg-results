// GGHASH:V482npK7j9eb2lfw3.0Q.dJNxmB0cQb2vWs0hfrXJcmU0000133a
#ifndef _BITS_POSIX1_LIM_H
#define _BITS_POSIX1_LIM_H 1
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_AIO_MAX 1
#define _POSIX_ARG_MAX 4096
#ifdef __USE_XOPEN2K
#define _POSIX_CHILD_MAX 25
#else
#define _POSIX_CHILD_MAX 6
#endif
#define _POSIX_DELAYTIMER_MAX 32
#define _POSIX_HOST_NAME_MAX 255
#define _POSIX_LINK_MAX 8
#define _POSIX_LOGIN_NAME_MAX 9
#define _POSIX_MAX_CANON 255
#define _POSIX_MAX_INPUT 255
#define _POSIX_MQ_OPEN_MAX 8
#define _POSIX_MQ_PRIO_MAX 32
#define _POSIX_NAME_MAX 14
#ifdef __USE_XOPEN2K
#define _POSIX_NGROUPS_MAX 8
#else
#define _POSIX_NGROUPS_MAX 0
#endif
#ifdef __USE_XOPEN2K
#define _POSIX_OPEN_MAX 20
#else
#define _POSIX_OPEN_MAX 16
#endif
#if !defined __USE_XOPEN2K || defined __USE_GNU
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#endif
#define _POSIX_PATH_MAX 256
#define _POSIX_PIPE_BUF 512
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_RTSIG_MAX 8
#define _POSIX_SEM_NSEMS_MAX 256
#define _POSIX_SEM_VALUE_MAX 32767
#define _POSIX_SIGQUEUE_MAX 32
#define _POSIX_SSIZE_MAX 32767
#define _POSIX_STREAM_MAX 8
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_SYMLOOP_MAX 8
#define _POSIX_TIMER_MAX 32
#define _POSIX_TTY_NAME_MAX 9
#ifdef __USE_XOPEN2K
#define _POSIX_TZNAME_MAX 6
#else
#define _POSIX_TZNAME_MAX 3
#endif
#if !defined __USE_XOPEN2K || defined __USE_GNU
#define _POSIX_QLIMIT 1
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define _POSIX_UIO_MAXIOV 16
#endif
#define _POSIX_CLOCKRES_MIN 20000000
#include <bits/local_lim.h>
#ifndef SSIZE_MAX
#define SSIZE_MAX LONG_MAX
#endif
#ifndef NGROUPS_MAX
#define NGROUPS_MAX 8
#endif
#endif
