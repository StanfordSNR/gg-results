// GGHASH:VtUAwPKbewonpMqHRP7pNR8Zlz2Q1rnFT1mgPX.ozWso00001524
#ifndef _LIBC_LIMITS_H_
#define _LIBC_LIMITS_H_ 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#define MB_LEN_MAX 16
#if !defined __GNUC__ || __GNUC__ < 2
# ifndef _LIMITS_H
#define _LIMITS_H 1
#include <bits/wordsize.h>
#define CHAR_BIT 8
#define SCHAR_MIN (-128)
#define SCHAR_MAX 127
#define UCHAR_MAX 255
# ifdef __CHAR_UNSIGNED__
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
# else
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
# endif
#define SHRT_MIN (-32768)
#define SHRT_MAX 32767
#define USHRT_MAX 65535
#define INT_MIN (-INT_MAX - 1)
#define INT_MAX 2147483647
#define UINT_MAX 4294967295U
# if __WORDSIZE == 64
#define LONG_MAX 9223372036854775807L
# else
#define LONG_MAX 2147483647L
# endif
#define LONG_MIN (-LONG_MAX - 1L)
# if __WORDSIZE == 64
#define ULONG_MAX 18446744073709551615UL
# else
#define ULONG_MAX 4294967295UL
# endif
# ifdef __USE_ISOC99
#define LLONG_MAX 9223372036854775807LL
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define ULLONG_MAX 18446744073709551615ULL
# endif
# endif
#endif
#endif
#if defined __GNUC__ && !defined _GCC_LIMITS_H_
# include_next <limits.h>
#endif
#if defined __USE_ISOC99 && defined __GNUC__
# ifndef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX-1)
# endif
# ifndef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__
# endif
# ifndef ULLONG_MAX
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
# endif
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# ifndef CHAR_WIDTH
#define CHAR_WIDTH 8
# endif
# ifndef SCHAR_WIDTH
#define SCHAR_WIDTH 8
# endif
# ifndef UCHAR_WIDTH
#define UCHAR_WIDTH 8
# endif
# ifndef SHRT_WIDTH
#define SHRT_WIDTH 16
# endif
# ifndef USHRT_WIDTH
#define USHRT_WIDTH 16
# endif
# ifndef INT_WIDTH
#define INT_WIDTH 32
# endif
# ifndef UINT_WIDTH
#define UINT_WIDTH 32
# endif
# ifndef LONG_WIDTH
#define LONG_WIDTH __WORDSIZE
# endif
# ifndef ULONG_WIDTH
#define ULONG_WIDTH __WORDSIZE
# endif
# ifndef LLONG_WIDTH
#define LLONG_WIDTH 64
# endif
# ifndef ULLONG_WIDTH
#define ULLONG_WIDTH 64
# endif
#endif
#ifdef __USE_POSIX
# include <bits/posix1_lim.h>
#endif
#ifdef __USE_POSIX2
# include <bits/posix2_lim.h>
#endif
#ifdef __USE_XOPEN
# include <bits/xopen_lim.h>
#endif
