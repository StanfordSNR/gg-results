// GGHASH:VYMD4jAmXHTyl8HR._xiAXzMw7hJ3KCA5zuBXjuTi8Q80000a721
#ifndef _UNISTD_H
#define _UNISTD_H 1
#include <features.h>
#ifdef __USE_XOPEN2K8
#define _POSIX_VERSION 200809L
#elif defined __USE_XOPEN2K
#define _POSIX_VERSION 200112L
#elif defined __USE_POSIX199506
#define _POSIX_VERSION 199506L
#elif defined __USE_POSIX199309
#define _POSIX_VERSION 199309L
#else
#define _POSIX_VERSION 199009L
#endif
#ifdef __USE_XOPEN2K8
#define __POSIX2_THIS_VERSION 200809L
#elif defined __USE_XOPEN2K
#define __POSIX2_THIS_VERSION 200112L
#elif defined __USE_POSIX199506
#define __POSIX2_THIS_VERSION 199506L
#else
#define __POSIX2_THIS_VERSION 199209L
#endif
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#ifdef __USE_XOPEN2K8
#define _XOPEN_VERSION 700
#elif defined __USE_XOPEN2K
#define _XOPEN_VERSION 600
#elif defined __USE_UNIX98
#define _XOPEN_VERSION 500
#else
#define _XOPEN_VERSION 4
#endif
#define _XOPEN_XCU_VERSION 4
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define _XOPEN_UNIX 1
#define _XOPEN_CRYPT 1
#define _XOPEN_ENH_I18N 1
#define _XOPEN_LEGACY 1
#include <bits/posix_opt.h>
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
# include <bits/environments.h>
#endif
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#include <bits/types.h>
#ifndef __ssize_t_defined
#define __ssize_t_defined 
#endif
#define __need_size_t 
#define __need_NULL 
#include <stddef.h>
#if defined __USE_XOPEN || defined __USE_XOPEN2K
# ifndef __gid_t_defined
#define __gid_t_defined 
# endif
# ifndef __uid_t_defined
#define __uid_t_defined 
# endif
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __off_t_defined 
# endif
# if defined __USE_LARGEFILE64 && !defined __off64_t_defined
#define __off64_t_defined 
# endif
# ifndef __useconds_t_defined
#define __useconds_t_defined 
# endif
# ifndef __pid_t_defined
#define __pid_t_defined 
# endif
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
# ifndef __intptr_t_defined
#define __intptr_t_defined 
# endif
#endif
#if defined __USE_MISC || defined __USE_XOPEN
# ifndef __socklen_t_defined
#define __socklen_t_defined 
# endif
#endif
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#ifdef __USE_GNU
#endif
#ifdef __USE_ATFILE
#endif
#ifndef _STDIO_H
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
# ifdef __USE_GNU
#define SEEK_DATA 3
#define SEEK_HOLE 4
# endif
#endif
#if defined __USE_MISC && !defined L_SET
#define L_SET SEEK_SET
#define L_INCR SEEK_CUR
#define L_XTND SEEK_END
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define lseek lseek64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K8
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define pread pread64
#define pwrite pwrite64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_GNU
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) || defined __USE_MISC
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#ifdef __USE_ATFILE
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) || defined __USE_MISC
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#include <bits/confname.h>
#ifdef __USE_POSIX2
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_XOPEN2K
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_GNU
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) || defined __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_ATFILE
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
#endif
#ifdef __USE_ATFILE
#endif
#ifdef __USE_ATFILE
#endif
#ifdef __USE_POSIX199506
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX2
# include <bits/getopt_posix.h>
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
#endif
#if defined __USE_MISC
#endif
#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
# if defined __USE_MISC || !defined __USE_XOPEN2K
# endif
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT_NTH
# else
#define truncate truncate64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if defined __USE_POSIX199309 || defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT_NTH
# else
#define ftruncate ftruncate64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) || defined __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#if (defined __USE_MISC || defined __USE_XOPEN_EXTENDED) && !defined F_LOCK
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
#ifdef __USE_GNU
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#endif
#if defined __USE_POSIX199309 || defined __USE_UNIX98
#endif
#ifdef __USE_XOPEN
#endif
#if defined __USE_XOPEN && !defined __USE_XOPEN2K
#endif
#if defined __USE_UNIX98 && !defined __USE_XOPEN2K
#endif
#ifdef __USE_MISC
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/unistd.h>
#endif
#endif
