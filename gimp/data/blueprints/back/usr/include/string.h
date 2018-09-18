// GGHASH:V08i.J6dUCnwu8IO.2xpL.kv_S0P5RHeNX4tRJYkR2_Y00004489
#ifndef _STRING_H
#define _STRING_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#define __need_size_t 
#define __need_NULL 
#include <stddef.h>
#if defined __cplusplus && __GNUC_PREREQ (4, 4)
#define __CORRECT_ISO_CPP_STRING_H_PROTO 
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# ifdef __OPTIMIZE__
# endif
#else
#endif
#ifdef __USE_GNU
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# else
# endif
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# else
# endif
#endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#endif
#if (defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2))
#endif
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#if defined __USE_GNU && defined __GNUC__
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#endif
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# ifdef __OPTIMIZE__
# endif
#else
#endif
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# ifdef __OPTIMIZE__
# endif
#else
#endif
#ifdef __USE_GNU
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# else
# endif
#endif
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# ifdef __OPTIMIZE__
# endif
#else
#endif
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# ifdef __OPTIMIZE__
# endif
#else
#endif
#ifdef __USE_POSIX
#endif
#ifdef __USE_GNU
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# else
# endif
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN2K
# if defined __USE_XOPEN2K && !defined __USE_GNU
# ifdef __REDIRECT_NTH
# else
#define strerror_r __xpg_strerror_r
# endif
# else
# endif
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_MISC
# include <strings.h>
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
# ifndef basename
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
# else
# endif
# endif
#endif
#if __GNUC_PREREQ (3,4)
# if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/string_fortified.h>
# endif
#endif
#endif
