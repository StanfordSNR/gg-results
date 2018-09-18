// GGHASH:VHsaN6sLFwPhGlJ3mfYJmwClkEy.iFhZeouxOcMj8uTA0000373c
#if (!defined(_STDDEF_H) && !defined(_STDDEF_H_) && !defined(_ANSI_STDDEF_H) && !defined(__STDDEF_H__)) || defined(__need_wchar_t) || defined(__need_size_t) || defined(__need_ptrdiff_t) || defined(__need_NULL) || defined(__need_wint_t)
#if (!defined(__need_wchar_t) && !defined(__need_size_t) && !defined(__need_ptrdiff_t) && !defined(__need_NULL) && !defined(__need_wint_t))
#define _STDDEF_H 
#define _STDDEF_H_ 
#define _ANSI_STDDEF_H 
#endif
#ifndef __sys_stdtypes_h
#if defined (__BSD_NET2__) || defined (____386BSD____) || (defined (__FreeBSD__) && (__FreeBSD__ < 5)) || defined(__NetBSD__)
#include <machine/ansi.h>
#endif
#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
#include <sys/_types.h>
#endif
#if defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) || defined(_X86_64_ANSI_H_) || defined(_I386_ANSI_H_)
#if !defined(_SIZE_T_) && !defined(_BSD_SIZE_T_)
#define _SIZE_T 
#endif
#if !defined(_PTRDIFF_T_) && !defined(_BSD_PTRDIFF_T_)
#define _PTRDIFF_T 
#endif
#if !defined(_WCHAR_T_) && !defined(_BSD_WCHAR_T_)
#ifndef _BSD_WCHAR_T_
#define _WCHAR_T 
#endif
#endif
#if defined (__need_ptrdiff_t) || defined (_STDDEF_H_)
#undef _PTRDIFF_T_
#undef _BSD_PTRDIFF_T_
#endif
#if defined (__need_size_t) || defined (_STDDEF_H_)
#undef _SIZE_T_
#undef _BSD_SIZE_T_
#endif
#if defined (__need_wchar_t) || defined (_STDDEF_H_)
#undef _WCHAR_T_
#undef _BSD_WCHAR_T_
#endif
#endif
#if defined (__sequent__) && defined (_PTRDIFF_T_)
#undef _PTRDIFF_T_
#endif
#if defined (_TYPE_ptrdiff_t) && (defined (__need_ptrdiff_t) || defined (_STDDEF_H_))
#undef _TYPE_ptrdiff_t
#endif
#if defined (_TYPE_size_t) && (defined (__need_size_t) || defined (_STDDEF_H_))
#undef _TYPE_size_t
#endif
#if defined (_TYPE_wchar_t) && (defined (__need_wchar_t) || defined (_STDDEF_H_))
#undef _TYPE_wchar_t
#endif
#if defined (_STDDEF_H) || defined (__need_ptrdiff_t)
#ifndef _PTRDIFF_T
#ifndef _T_PTRDIFF_
#ifndef _T_PTRDIFF
#ifndef __PTRDIFF_T
#ifndef _PTRDIFF_T_
#ifndef _BSD_PTRDIFF_T_
#ifndef ___int_ptrdiff_t_h
#ifndef _GCC_PTRDIFF_T
#ifndef _PTRDIFF_T_DECLARED
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 
#ifndef __PTRDIFF_TYPE__
#define __PTRDIFF_TYPE__ long int
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#undef __need_ptrdiff_t
#endif
#if defined (_STDDEF_H) || defined (__need_size_t)
#ifndef __size_t__
#ifndef __SIZE_T__
#ifndef _SIZE_T
#ifndef _SYS_SIZE_T_H
#ifndef _T_SIZE_
#ifndef _T_SIZE
#ifndef __SIZE_T
#ifndef _SIZE_T_
#ifndef _BSD_SIZE_T_
#ifndef _SIZE_T_DEFINED_
#ifndef _SIZE_T_DEFINED
#ifndef _BSD_SIZE_T_DEFINED_
#ifndef _SIZE_T_DECLARED
#ifndef ___int_size_t_h
#ifndef _GCC_SIZE_T
#ifndef _SIZET_
#ifndef __size_t
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 
#if (defined (__FreeBSD__) && (__FreeBSD__ >= 5)) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)
#elif defined (__VMS__)
#else
#define __size_t 
#endif
#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ long unsigned int
#endif
#if !(defined (__GNUG__) && defined (size_t))
#ifdef __BEOS__
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#undef __need_size_t
#endif
#if defined (_STDDEF_H) || defined (__need_wchar_t)
#ifndef __wchar_t__
#ifndef __WCHAR_T__
#ifndef _WCHAR_T
#ifndef _T_WCHAR_
#ifndef _T_WCHAR
#ifndef __WCHAR_T
#ifndef _WCHAR_T_
#ifndef _BSD_WCHAR_T_
#ifndef _BSD_WCHAR_T_DEFINED_
#ifndef _BSD_RUNE_T_DEFINED_
#ifndef _WCHAR_T_DECLARED
#ifndef _WCHAR_T_DEFINED_
#ifndef _WCHAR_T_DEFINED
#ifndef _WCHAR_T_H
#ifndef ___int_wchar_t_h
#ifndef __INT_WCHAR_T_H
#ifndef _GCC_WCHAR_T
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
#ifdef _BSD_WCHAR_T_
#undef _BSD_WCHAR_T_
#ifdef _BSD_RUNE_T_
#if !defined (_ANSI_SOURCE) && !defined (_POSIX_SOURCE)
#define _BSD_WCHAR_T_DEFINED_ 
#define _BSD_RUNE_T_DEFINED_ 
#if defined (__FreeBSD__) && (__FreeBSD__ < 5)
#undef _BSD_RUNE_T_
#endif
#endif
#endif
#endif
#if defined (__FreeBSD__) && (__FreeBSD__ >= 5)
#if !defined (_ANSI_SOURCE) && !defined (_POSIX_SOURCE)
#if __BSD_VISIBLE
#ifndef _RUNE_T_DECLARED
#define _RUNE_T_DECLARED 
#endif
#endif
#endif
#endif
#ifndef __WCHAR_TYPE__
#define __WCHAR_TYPE__ int
#endif
#ifndef __cplusplus
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#undef __need_wchar_t
#endif
#if defined (__need_wint_t)
#ifndef _WINT_T
#define _WINT_T 
#ifndef __WINT_TYPE__
#define __WINT_TYPE__ unsigned int
#endif
#endif
#undef __need_wint_t
#endif
#if defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) || defined(_X86_64_ANSI_H_) || defined(_I386_ANSI_H_)
#ifdef _GCC_PTRDIFF_T_
#undef _PTRDIFF_T_
#undef _BSD_PTRDIFF_T_
#endif
#ifdef _GCC_SIZE_T_
#undef _SIZE_T_
#undef _BSD_SIZE_T_
#endif
#ifdef _GCC_WCHAR_T_
#undef _WCHAR_T_
#undef _BSD_WCHAR_T_
#endif
#ifdef _GCC_PTRDIFF_T
#undef _PTRDIFF_T_
#undef _BSD_PTRDIFF_T_
#endif
#ifdef _GCC_SIZE_T
#undef _SIZE_T_
#undef _BSD_SIZE_T_
#endif
#ifdef _GCC_WCHAR_T
#undef _WCHAR_T_
#undef _BSD_WCHAR_T_
#endif
#endif
#endif
#if defined (_STDDEF_H) || defined (__need_NULL)
#undef NULL
#ifdef __GNUG__
#define NULL __null
#else
#ifndef __cplusplus
#define NULL ((void *)0)
#else
#define NULL 0
#endif
#endif
#endif
#undef __need_NULL
#ifdef _STDDEF_H
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#if (defined (__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) || (defined(__cplusplus) && __cplusplus >= 201103L)
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T 
#ifdef __i386__
#endif
#endif
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
#ifndef _GXX_NULLPTR_T
#define _GXX_NULLPTR_T 
#endif
#endif
#endif
#endif
