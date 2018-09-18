// GGHASH:V41.RGOqjT0IaFMXZZA0Yy6QrFZU4V0FNCjFtCXOJZ_s00008bc8
#ifndef _STDLIB_H
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
#include <stddef.h>
#define _STDLIB_H 1
#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
# include <bits/waitflags.h>
# include <bits/waitstatus.h>
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define WTERMSIG(status) __WTERMSIG (status)
#define WSTOPSIG(status) __WSTOPSIG (status)
#define WIFEXITED(status) __WIFEXITED (status)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define WIFSTOPPED(status) __WIFSTOPPED (status)
# ifdef __WIFCONTINUED
#define WIFCONTINUED(status) __WIFCONTINUED (status)
# endif
#endif
#include <bits/floatn.h>
#ifndef __ldiv_t_defined
#define __ldiv_t_defined 1
#endif
#if defined __USE_ISOC99 && !defined __lldiv_t_defined
#define __lldiv_t_defined 1
#endif
#define RAND_MAX 2147483647
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#ifdef __USE_ISOC99
#endif
#ifdef __USE_ISOC99
#endif
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_ISOC99
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
#endif
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#endif
#ifdef __USE_GNU
# include <bits/types/locale_t.h>
# if __HAVE_FLOAT16
# endif
# if __HAVE_FLOAT32
# endif
# if __HAVE_FLOAT64
# endif
# if __HAVE_FLOAT128
# endif
# if __HAVE_FLOAT32X
# endif
# if __HAVE_FLOAT64X
# endif
# if __HAVE_FLOAT128X
# endif
#endif
#ifdef __USE_EXTERN_INLINES
# ifdef __USE_ISOC99
# endif
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
# include <sys/types.h>
# ifdef __USE_MISC
# endif
#endif
#ifdef __USE_POSIX199506
#endif
#if defined __USE_MISC || defined __USE_XOPEN
# ifdef __USE_MISC
# endif
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
# include <alloca.h>
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) || defined __USE_MISC
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_ISOC11
#endif
#if defined __USE_ISOC11 || defined __USE_ISOCXX11
# ifdef __cplusplus
# else
# endif
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_ISOC11 || defined __USE_ISOCXX11
#endif
#ifdef __USE_ISOC99
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_MISC || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8)
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define mkstemp mkstemp64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_MISC
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define mkstemps mkstemps64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define mkostemp mkostemp64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define mkostemps mkostemps64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifndef __COMPAR_FN_T
#define __COMPAR_FN_T 
# ifdef __USE_GNU
# endif
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_EXTERN_INLINES
# include <bits/stdlib-bsearch.h>
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_ISOC99
#endif
#ifdef __USE_ISOC99
#endif
#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) || defined __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN
#endif
#ifdef __USE_XOPEN2KXSI
#endif
#ifdef __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#endif
#if defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K
#endif
#include <bits/stdlib-float.h>
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/stdlib.h>
#endif
#ifdef __LDBL_COMPAT
# include <bits/stdlib-ldbl.h>
#endif
#endif
