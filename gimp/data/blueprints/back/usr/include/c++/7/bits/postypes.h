// GGHASH:VCyk1bCF0KYle8wry5rE0B8zinF1A_ZI2SiOIuKWwsg000002010
#ifndef _GLIBCXX_POSTYPES_H
#define _GLIBCXX_POSTYPES_H 1
#include <cwchar>
#if (defined(_GLIBCXX_HAVE_INT64_T) && !defined(_GLIBCXX_HAVE_INT64_T_LONG) && !defined(_GLIBCXX_HAVE_INT64_T_LONG_LONG))
#ifndef __STDC_LIMIT_MACROS
#define _UNDEF__STDC_LIMIT_MACROS 
#define __STDC_LIMIT_MACROS 
#endif
#ifndef __STDC_CONSTANT_MACROS
#define _UNDEF__STDC_CONSTANT_MACROS 
#define __STDC_CONSTANT_MACROS 
#endif
#include <stdint.h>
#ifdef _UNDEF__STDC_LIMIT_MACROS
#undef __STDC_LIMIT_MACROS
#undef _UNDEF__STDC_LIMIT_MACROS
#endif
#ifdef _UNDEF__STDC_CONSTANT_MACROS
#undef __STDC_CONSTANT_MACROS
#undef _UNDEF__STDC_CONSTANT_MACROS
#endif
#endif
#ifdef _GLIBCXX_HAVE_INT64_T_LONG
#elif defined(_GLIBCXX_HAVE_INT64_T_LONG_LONG)
#elif defined(_GLIBCXX_HAVE_INT64_T)
#else
#endif
#if __cplusplus >= 201103L
#endif
#endif
