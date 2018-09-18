// GGHASH:Vt4EgFg312qWTKiVYh95YZ91c1r5N.LyT5MQoTHx.tCI000073e1
#ifndef _STDIO_H
#define _STDIO_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#define __need_size_t 
#define __need_NULL 
#include <stddef.h>
#include <bits/types.h>
#include <bits/types/__FILE.h>
#include <bits/types/FILE.h>
#define _STDIO_USES_IOSTREAM 
#include <bits/libio.h>
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# ifdef __GNUC__
# ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED 
# endif
# else
# include <stdarg.h>
# endif
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __off_t_defined 
# endif
# if defined __USE_LARGEFILE64 && !defined __off64_t_defined
#define __off64_t_defined 
# endif
#endif
#ifdef __USE_XOPEN2K8
# ifndef __ssize_t_defined
#define __ssize_t_defined 
# endif
#endif
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2
#ifndef BUFSIZ
#define BUFSIZ _IO_BUFSIZ
#endif
#ifndef EOF
#define EOF (-1)
#endif
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#ifdef __USE_GNU
#define SEEK_DATA 3
#define SEEK_HOLE 4
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#define P_tmpdir "/tmp"
#endif
#include <bits/stdio_lim.h>
#define stdin stdin
#define stdout stdout
#define stderr stderr
#ifdef __USE_ATFILE
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define tmpfile tmpfile64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_GNU
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define fopen fopen64
#define freopen freopen64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_POSIX
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_ISOC99 || defined __USE_UNIX98
#endif
#if __GLIBC_USE (LIB_EXT2)
#endif
#ifdef __USE_XOPEN2K8
#endif
#if defined __USE_ISOC99 && !defined __USE_GNU && (!defined __LDBL_COMPAT || !defined __REDIRECT) && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
# else
#define fscanf __isoc99_fscanf
#define scanf __isoc99_scanf
#define sscanf __isoc99_sscanf
# endif
#endif
#ifdef __USE_ISOC99
# if !defined __USE_GNU && (!defined __LDBL_COMPAT || !defined __REDIRECT) && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
# else
#define vfscanf __isoc99_vfscanf
#define vscanf __isoc99_vscanf
#define vsscanf __isoc99_vsscanf
# endif
# endif
#endif
#define getc(_fp) _IO_getc (_fp)
#ifdef __USE_POSIX199506
#endif
#ifdef __USE_MISC
#endif
#define putc(_ch,_fp) _IO_putc (_ch, _fp)
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX199506
#endif
#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
#endif
#if __GLIBC_USE (DEPRECATED_GETS)
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_LARGEFILE || defined __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define fseeko fseeko64
#define ftello ftello64
# endif
# endif
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define fgetpos fgetpos64
#define fsetpos fsetpos64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_MISC
#endif
#include <bits/sys_errlist.h>
#ifdef __USE_POSIX
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX2
#endif
#ifdef __USE_POSIX
#endif
#if (defined __USE_XOPEN && !defined __USE_XOPEN2K) || defined __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_POSIX199506
#endif
#if defined __USE_XOPEN && !defined __USE_XOPEN2K && !defined __USE_GNU
# include <bits/getopt_posix.h>
#endif
#ifdef __USE_EXTERN_INLINES
# include <bits/stdio.h>
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/stdio2.h>
#endif
#ifdef __LDBL_COMPAT
# include <bits/stdio-ldbl.h>
#endif
#endif
