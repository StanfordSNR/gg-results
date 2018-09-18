// GGHASH:VLPc6XWXa0D6oqltDq0.Wn7ou12ZPHdFQZQxMnuhP0Sk000024f7
#ifndef _FCNTL_H
#define _FCNTL_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/fcntl.h>
#ifdef __O_TMPFILE
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0 || ((oflag) & __O_TMPFILE) == __O_TMPFILE)
#else
#define __OPEN_NEEDS_MODE(oflag) (((oflag) & O_CREAT) != 0)
#endif
#ifndef __mode_t_defined
#define __mode_t_defined 
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
#ifdef __USE_XOPEN2K8
# include <bits/types/struct_timespec.h>
#endif
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# include <bits/stat.h>
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
# if (defined __USE_UNIX98 || defined __USE_XOPEN2K8) && defined __S_IFSOCK
#define S_IFSOCK __S_IFSOCK
# endif
#define S_ISUID __S_ISUID
#define S_ISGID __S_ISGID
# if defined __USE_MISC || defined __USE_XOPEN
#define S_ISVTX __S_ISVTX
# endif
#define S_IRUSR __S_IREAD
#define S_IWUSR __S_IWRITE
#define S_IXUSR __S_IEXEC
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define S_IRGRP (S_IRUSR >> 3)
#define S_IWGRP (S_IWUSR >> 3)
#define S_IXGRP (S_IXUSR >> 3)
#define S_IRWXG (S_IRWXU >> 3)
#define S_IROTH (S_IRGRP >> 3)
#define S_IWOTH (S_IWGRP >> 3)
#define S_IXOTH (S_IXGRP >> 3)
#define S_IRWXO (S_IRWXG >> 3)
#endif
#ifdef __USE_MISC
# ifndef R_OK
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
# endif
#endif
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define open open64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_ATFILE
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define openat openat64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define creat creat64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#if !defined F_LOCK && (defined __USE_MISC || (defined __USE_XOPEN_EXTENDED && !defined __USE_POSIX))
#define F_ULOCK 0
#define F_LOCK 1
#define F_TLOCK 2
#define F_TEST 3
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define lockf lockf64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
# else
 # ifdef __REDIRECT_NTH
# else
#define posix_fadvise posix_fadvise64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
# ifndef __USE_FILE_OFFSET64
# else
 # ifdef __REDIRECT
# else
#define posix_fallocate posix_fallocate64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function && defined __va_arg_pack_len
# include <bits/fcntl2.h>
#endif
#endif
