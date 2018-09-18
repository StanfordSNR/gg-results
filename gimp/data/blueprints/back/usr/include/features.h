// GGHASH:VP6jgy2bh3K564MZZJ60nUT8w4WUgspU_WAObZ_2aZ6g00003cb5
#ifndef _FEATURES_H
#define _FEATURES_H 1
#undef __USE_ISOC11
#undef __USE_ISOC99
#undef __USE_ISOC95
#undef __USE_ISOCXX11
#undef __USE_POSIX
#undef __USE_POSIX2
#undef __USE_POSIX199309
#undef __USE_POSIX199506
#undef __USE_XOPEN
#undef __USE_XOPEN_EXTENDED
#undef __USE_UNIX98
#undef __USE_XOPEN2K
#undef __USE_XOPEN2KXSI
#undef __USE_XOPEN2K8
#undef __USE_XOPEN2K8XSI
#undef __USE_LARGEFILE
#undef __USE_LARGEFILE64
#undef __USE_FILE_OFFSET64
#undef __USE_MISC
#undef __USE_ATFILE
#undef __USE_GNU
#undef __USE_FORTIFY_LEVEL
#undef __KERNEL_STRICT_NAMES
#undef __GLIBC_USE_DEPRECATED_GETS
#ifndef _LOOSE_KERNEL_NAMES
#define __KERNEL_STRICT_NAMES 
#endif
#if defined __GNUC__ && defined __GNUC_MINOR__
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
#define __GNUC_PREREQ(maj,min) 0
#endif
#if defined __clang_major__ && defined __clang_minor__
#define __glibc_clang_prereq(maj,min) ((__clang_major__ << 16) + __clang_minor__ >= ((maj) << 16) + (min))
#else
#define __glibc_clang_prereq(maj,min) 0
#endif
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#if (defined _BSD_SOURCE || defined _SVID_SOURCE) && !defined _DEFAULT_SOURCE
# warning "_BSD_SOURCE and _SVID_SOURCE are deprecated, use _DEFAULT_SOURCE"
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#endif
#ifdef _GNU_SOURCE
#undef _ISOC95_SOURCE
#define _ISOC95_SOURCE 1
#undef _ISOC99_SOURCE
#define _ISOC99_SOURCE 1
#undef _ISOC11_SOURCE
#define _ISOC11_SOURCE 1
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#undef _XOPEN_SOURCE_EXTENDED
#define _XOPEN_SOURCE_EXTENDED 1
#undef _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE 1
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#undef _ATFILE_SOURCE
#define _ATFILE_SOURCE 1
#endif
#if (defined _DEFAULT_SOURCE || (!defined __STRICT_ANSI__ && !defined _ISOC99_SOURCE && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE && !defined _XOPEN_SOURCE))
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#endif
#if (defined _ISOC11_SOURCE || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L))
#define __USE_ISOC11 1
#endif
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L))
#define __USE_ISOC99 1
#endif
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199409L))
#define __USE_ISOC95 1
#endif
#ifdef __cplusplus
# if __cplusplus >= 201703L
#define __USE_ISOC11 1
# endif
# if __cplusplus >= 201103L || defined __GXX_EXPERIMENTAL_CXX0X__
#define __USE_ISOCXX11 1
#define __USE_ISOC99 1
# endif
#endif
#ifdef _DEFAULT_SOURCE
# if !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE
#define __USE_POSIX_IMPLICITLY 1
# endif
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#endif
#if ((!defined __STRICT_ANSI__ || (defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) >= 500)) && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE)
#define _POSIX_SOURCE 1
# if defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 500
#define _POSIX_C_SOURCE 2
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 600
#define _POSIX_C_SOURCE 199506L
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 700
#define _POSIX_C_SOURCE 200112L
# else
#define _POSIX_C_SOURCE 200809L
# endif
#define __USE_POSIX_IMPLICITLY 1
#endif
#if ((!defined _POSIX_C_SOURCE || (_POSIX_C_SOURCE - 0) < 199506L) && (defined _REENTRANT || defined _THREAD_SAFE))
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 199506L
#endif
#if (defined _POSIX_SOURCE || (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 1) || defined _XOPEN_SOURCE)
#define __USE_POSIX 1
#endif
#if defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 2 || defined _XOPEN_SOURCE
#define __USE_POSIX2 1
#endif
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199309L
#define __USE_POSIX199309 1
#endif
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199506L
#define __USE_POSIX199506 1
#endif
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200112L
#define __USE_XOPEN2K 1
#undef __USE_ISOC95
#define __USE_ISOC95 1
#undef __USE_ISOC99
#define __USE_ISOC99 1
#endif
#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200809L
#define __USE_XOPEN2K8 1
#undef _ATFILE_SOURCE
#define _ATFILE_SOURCE 1
#endif
#ifdef _XOPEN_SOURCE
#define __USE_XOPEN 1
# if (_XOPEN_SOURCE - 0) >= 500
#define __USE_XOPEN_EXTENDED 1
#define __USE_UNIX98 1
#undef _LARGEFILE_SOURCE
#define _LARGEFILE_SOURCE 1
# if (_XOPEN_SOURCE - 0) >= 600
# if (_XOPEN_SOURCE - 0) >= 700
#define __USE_XOPEN2K8 1
#define __USE_XOPEN2K8XSI 1
# endif
#define __USE_XOPEN2K 1
#define __USE_XOPEN2KXSI 1
#undef __USE_ISOC95
#define __USE_ISOC95 1
#undef __USE_ISOC99
#define __USE_ISOC99 1
# endif
# else
# ifdef _XOPEN_SOURCE_EXTENDED
#define __USE_XOPEN_EXTENDED 1
# endif
# endif
#endif
#ifdef _LARGEFILE_SOURCE
#define __USE_LARGEFILE 1
#endif
#ifdef _LARGEFILE64_SOURCE
#define __USE_LARGEFILE64 1
#endif
#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
#define __USE_FILE_OFFSET64 1
#endif
#if defined _DEFAULT_SOURCE
#define __USE_MISC 1
#endif
#ifdef _ATFILE_SOURCE
#define __USE_ATFILE 1
#endif
#ifdef _GNU_SOURCE
#define __USE_GNU 1
#endif
#if defined _FORTIFY_SOURCE && _FORTIFY_SOURCE > 0 && __GNUC_PREREQ (4, 1) && defined __OPTIMIZE__ && __OPTIMIZE__ > 0
# if _FORTIFY_SOURCE > 1
#define __USE_FORTIFY_LEVEL 2
# else
#define __USE_FORTIFY_LEVEL 1
# endif
#else
#define __USE_FORTIFY_LEVEL 0
#endif
#if defined __cplusplus ? __cplusplus >= 201402L : defined __USE_ISOC11
#define __GLIBC_USE_DEPRECATED_GETS 0
#else
#define __GLIBC_USE_DEPRECATED_GETS 1
#endif
#include <stdc-predef.h>
#undef __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6
#define __GLIBC__ 2
#define __GLIBC_MINOR__ 27
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#ifndef __ASSEMBLER__
# ifndef _SYS_CDEFS_H
# include <sys/cdefs.h>
# endif
# if defined __USE_FILE_OFFSET64 && !defined __REDIRECT
#define __USE_LARGEFILE 1
#define __USE_LARGEFILE64 1
# endif
#endif
#if __GNUC_PREREQ (2, 7) && defined __OPTIMIZE__ && !defined __OPTIMIZE_SIZE__ && !defined __NO_INLINE__ && defined __extern_inline
#define __USE_EXTERN_INLINES 1
#endif
#include <gnu/stubs.h>
#endif
