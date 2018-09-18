// GGHASH:VNfoPrOxB5D_RD35B4zERPolrh7mQ9DlKnkXrLfQJ87Y00007987
#ifndef _WCHAR_H
#define _WCHAR_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#include <bits/floatn.h>
#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
#include <stddef.h>
#define __need___va_list 
#include <stdarg.h>
#include <bits/wchar.h>
#include <bits/types/wint_t.h>
#include <bits/types/mbstate_t.h>
#include <bits/types/__FILE.h>
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
# include <bits/types/FILE.h>
#endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#endif
#if defined __cplusplus && __GNUC_PREREQ (4, 4)
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO 
#endif
#ifndef WCHAR_MIN
#define WCHAR_MIN __WCHAR_MIN
#define WCHAR_MAX __WCHAR_MAX
#endif
#ifndef WEOF
#define WEOF (0xffffffffu)
#endif
#if (defined __USE_XOPEN && !defined __USE_GNU && !(defined __USE_XOPEN2K && !defined __USE_XOPEN2KXSI))
# include <bits/wctype-wchar.h>
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
#else
#endif
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
#else
#endif
#ifdef __USE_GNU
#endif
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
#else
#endif
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
#else
#endif
#ifdef __USE_XOPEN
# ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
# else
# endif
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
#else
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_EXTERN_INLINES
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN
#endif
#ifdef __USE_ISOC99
#endif
#if __HAVE_FLOAT16 && defined __USE_GNU
#endif
#if __HAVE_FLOAT32 && defined __USE_GNU
#endif
#if __HAVE_FLOAT64 && defined __USE_GNU
#endif
#if __HAVE_FLOAT128 && defined __USE_GNU
#endif
#if __HAVE_FLOAT32X && defined __USE_GNU
#endif
#if __HAVE_FLOAT64X && defined __USE_GNU
#endif
#if __HAVE_FLOAT128X && defined __USE_GNU
#endif
#ifdef __USE_ISOC99
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
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
#ifdef __USE_XOPEN2K8
#endif
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
#endif
#if defined __USE_ISOC95 || defined __USE_UNIX98
# if defined __USE_ISOC99 && !defined __USE_GNU && (!defined __LDBL_COMPAT || !defined __REDIRECT) && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
# else
#define fwscanf __isoc99_fwscanf
#define wscanf __isoc99_wscanf
#define swscanf __isoc99_swscanf
# endif
# endif
#endif
#ifdef __USE_ISOC99
# if !defined __USE_GNU && (!defined __LDBL_COMPAT || !defined __REDIRECT) && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
# else
#define vfwscanf __isoc99_vfwscanf
#define vwscanf __isoc99_vwscanf
#define vswscanf __isoc99_vswscanf
# endif
# endif
#endif
#ifdef __USE_GNU
#endif
# ifdef __USE_GNU
# endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/wchar2.h>
#endif
#ifdef __LDBL_COMPAT
# include <bits/wchar-ldbl.h>
#endif
#endif
