// GGHASH:V3tul0P5jZPAmubqqAPmtxjCCzrLmOfArawkcIeR8neI00001dc3
#if !defined _SYS_STAT_H && !defined _FCNTL_H
# error "Never include <bits/stat.h> directly; use <sys/stat.h> instead."
#endif
#ifndef _BITS_STAT_H
#define _BITS_STAT_H 1
#ifndef __x86_64__
#define _STAT_VER_LINUX_OLD 1
#define _STAT_VER_KERNEL 1
#define _STAT_VER_SVR4 2
#define _STAT_VER_LINUX 3
#define _MKNOD_VER_LINUX 1
#define _MKNOD_VER_SVR4 2
#define _MKNOD_VER _MKNOD_VER_LINUX
#else
#define _STAT_VER_KERNEL 0
#define _STAT_VER_LINUX 1
#define _MKNOD_VER_LINUX 0
#endif
#define _STAT_VER _STAT_VER_LINUX
#ifndef __x86_64__
#endif
#if defined __x86_64__ || !defined __USE_FILE_OFFSET64
#else
#endif
#ifndef __x86_64__
#else
#endif
#ifdef __x86_64__
#endif
#ifndef __x86_64__
#endif
#if defined __x86_64__ || !defined __USE_FILE_OFFSET64
#else
#endif
#if defined __x86_64__ || !defined __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_XOPEN2K8
#define st_atime st_atim.tv_sec
#define st_mtime st_mtim.tv_sec
#define st_ctime st_ctim.tv_sec
#else
#endif
#ifdef __x86_64__
#else
# ifndef __USE_FILE_OFFSET64
# else
# endif
#endif
#ifdef __USE_LARGEFILE64
# ifdef __x86_64__
# else
# endif
# ifdef __x86_64__
# else
# endif
# ifdef __USE_XOPEN2K8
# else
# endif
# ifdef __x86_64__
# else
# endif
#endif
#define _STATBUF_ST_BLKSIZE 
#define _STATBUF_ST_RDEV 
#define _STATBUF_ST_NSEC 
#define __S_IFMT 0170000
#define __S_IFDIR 0040000
#define __S_IFCHR 0020000
#define __S_IFBLK 0060000
#define __S_IFREG 0100000
#define __S_IFIFO 0010000
#define __S_IFLNK 0120000
#define __S_IFSOCK 0140000
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_ISUID 04000
#define __S_ISGID 02000
#define __S_ISVTX 01000
#define __S_IREAD 0400
#define __S_IWRITE 0200
#define __S_IEXEC 0100
#ifdef __USE_ATFILE
#define UTIME_NOW ((1l << 30) - 1l)
#define UTIME_OMIT ((1l << 30) - 2l)
#endif
#endif
