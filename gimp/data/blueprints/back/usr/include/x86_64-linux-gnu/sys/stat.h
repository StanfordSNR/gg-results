// GGHASH:VyImI9ukdML1ApmitLH5Xoirk2Tm3irkCAXFLKVLPI8g00003f3a
#ifndef _SYS_STAT_H
#define _SYS_STAT_H 1
#include <features.h>
#include <bits/types.h>
#ifdef __USE_XOPEN2K8
# include <bits/types/struct_timespec.h>
#endif
#if defined __USE_XOPEN || defined __USE_XOPEN2K
# include <bits/types/time_t.h>
# ifndef __dev_t_defined
#define __dev_t_defined 
# endif
# ifndef __gid_t_defined
#define __gid_t_defined 
# endif
# ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __ino_t_defined 
# endif
# ifndef __mode_t_defined
#define __mode_t_defined 
# endif
# ifndef __nlink_t_defined
#define __nlink_t_defined 
# endif
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __off_t_defined 
# endif
# ifndef __uid_t_defined
#define __uid_t_defined 
# endif
#endif
#ifdef __USE_UNIX98
# ifndef __blkcnt_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __blkcnt_t_defined 
# endif
# ifndef __blksize_t_defined
#define __blksize_t_defined 
# endif
#endif
#include <bits/stat.h>
#if defined __USE_MISC || defined __USE_XOPEN
#define S_IFMT __S_IFMT
#define S_IFDIR __S_IFDIR
#define S_IFCHR __S_IFCHR
#define S_IFBLK __S_IFBLK
#define S_IFREG __S_IFREG
# ifdef __S_IFIFO
#define S_IFIFO __S_IFIFO
# endif
# ifdef __S_IFLNK
#define S_IFLNK __S_IFLNK
# endif
# if (defined __USE_MISC || defined __USE_XOPEN_EXTENDED) && defined __S_IFSOCK
#define S_IFSOCK __S_IFSOCK
# endif
#endif
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#ifdef __S_IFIFO
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#endif
#ifdef __S_IFLNK
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#endif
#if defined __USE_MISC && !defined __S_IFLNK
#define S_ISLNK(mode) 0
#endif
#if (defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K) && defined __S_IFSOCK
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#elif defined __USE_XOPEN2K
#define S_ISSOCK(mode) 0
#endif
#ifdef __USE_POSIX199309
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#endif
#define S_ISUID __S_ISUID
#define S_ISGID __S_ISGID
#if defined __USE_MISC || defined __USE_XOPEN
#define S_ISVTX __S_ISVTX
#endif
#define S_IRUSR __S_IREAD
#define S_IWUSR __S_IWRITE
#define S_IXUSR __S_IEXEC
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#ifdef __USE_MISC
#define S_IREAD S_IRUSR
#define S_IWRITE S_IWUSR
#define S_IEXEC S_IXUSR
#endif
#define S_IRGRP (S_IRUSR >> 3)
#define S_IWGRP (S_IWUSR >> 3)
#define S_IXGRP (S_IXUSR >> 3)
#define S_IRWXG (S_IRWXU >> 3)
#define S_IROTH (S_IRGRP >> 3)
#define S_IWOTH (S_IWGRP >> 3)
#define S_IXOTH (S_IXGRP >> 3)
#define S_IRWXO (S_IRWXG >> 3)
#ifdef __USE_MISC
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define S_BLKSIZE 512
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define stat stat64
#define fstat fstat64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_ATFILE
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT_NTH
# else
#define fstatat fstatat64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT_NTH
# else
#define lstat lstat64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_POSIX199309 || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_ATFILE
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_ATFILE
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
# ifdef __USE_ATFILE
# endif
#endif
#ifdef __USE_ATFILE
#endif
#ifdef __USE_ATFILE
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifndef _STAT_VER
#define _STAT_VER 0
#endif
#ifndef _MKNOD_VER
#define _MKNOD_VER 0
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define __fxstat __fxstat64
#define __xstat __xstat64
#define __lxstat __lxstat64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_EXTERN_INLINES
# if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
# endif
# ifdef __USE_ATFILE
# endif
# ifdef __USE_MISC
# endif
# ifdef __USE_ATFILE
# endif
# if defined __USE_LARGEFILE64 && (! defined __USE_FILE_OFFSET64 || (defined __REDIRECT_NTH && defined __OPTIMIZE__))
# if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
# endif
# ifdef __USE_ATFILE
# endif
# endif
#endif
#endif
