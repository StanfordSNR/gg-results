// GGHASH:VemVNEY7gg4ZbP_IjDy760m64bf1nULp6mgVwCZiBqkk000019b8
#ifndef _SYS_TYPES_H
#define _SYS_TYPES_H 1
#include <features.h>
#include <bits/types.h>
#ifdef __USE_MISC
# ifndef __u_char_defined
#define __u_char_defined 
# endif
#endif
#ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __ino_t_defined 
#endif
#if defined __USE_LARGEFILE64 && !defined __ino64_t_defined
#define __ino64_t_defined 
#endif
#ifndef __dev_t_defined
#define __dev_t_defined 
#endif
#ifndef __gid_t_defined
#define __gid_t_defined 
#endif
#ifndef __mode_t_defined
#define __mode_t_defined 
#endif
#ifndef __nlink_t_defined
#define __nlink_t_defined 
#endif
#ifndef __uid_t_defined
#define __uid_t_defined 
#endif
#ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __off_t_defined 
#endif
#if defined __USE_LARGEFILE64 && !defined __off64_t_defined
#define __off64_t_defined 
#endif
#ifndef __pid_t_defined
#define __pid_t_defined 
#endif
#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined __id_t_defined
#define __id_t_defined 
#endif
#ifndef __ssize_t_defined
#define __ssize_t_defined 
#endif
#ifdef __USE_MISC
# ifndef __daddr_t_defined
#define __daddr_t_defined 
# endif
#endif
#if (defined __USE_MISC || defined __USE_XOPEN) && !defined __key_t_defined
#define __key_t_defined 
#endif
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# include <bits/types/clock_t.h>
#endif
#include <bits/types/clockid_t.h>
#include <bits/types/time_t.h>
#include <bits/types/timer_t.h>
#ifdef __USE_XOPEN
# ifndef __useconds_t_defined
#define __useconds_t_defined 
# endif
# ifndef __suseconds_t_defined
#define __suseconds_t_defined 
# endif
#endif
#define __need_size_t 
#include <stddef.h>
#ifdef __USE_MISC
#endif
#include <bits/stdint-intn.h>
#if !__GNUC_PREREQ (2, 7)
# if __WORDSIZE == 64
# else
# endif
#else
#define __u_intN_t(N,MODE) typedef unsigned int u_int ##N ##_t __attribute__ ((__mode__ (MODE)))
#endif
#define __BIT_TYPES_DEFINED__ 1
#ifdef __USE_MISC
# include <endian.h>
# include <sys/select.h>
#define __SYSMACROS_DEPRECATED_INCLUSION 
# include <sys/sysmacros.h>
#undef __SYSMACROS_DEPRECATED_INCLUSION
#endif
#if (defined __USE_UNIX98 || defined __USE_XOPEN2K8) && !defined __blksize_t_defined
#define __blksize_t_defined 
#endif
#ifndef __USE_FILE_OFFSET64
# ifndef __blkcnt_t_defined
#define __blkcnt_t_defined 
# endif
# ifndef __fsblkcnt_t_defined
#define __fsblkcnt_t_defined 
# endif
# ifndef __fsfilcnt_t_defined
#define __fsfilcnt_t_defined 
# endif
#else
# ifndef __blkcnt_t_defined
#define __blkcnt_t_defined 
# endif
# ifndef __fsblkcnt_t_defined
#define __fsblkcnt_t_defined 
# endif
# ifndef __fsfilcnt_t_defined
#define __fsfilcnt_t_defined 
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#if defined __USE_POSIX199506 || defined __USE_UNIX98
# include <bits/pthreadtypes.h>
#endif
#endif
