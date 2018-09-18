// GGHASH:VsWr3wXx33i5hZA6ytYh9abgc4NwhNmOhBX4kO5BYhZw00003462
#ifndef __UMACHINE_H__
#define __UMACHINE_H__ 
#include "unicode/ptypes.h"
#include <stddef.h>
#ifdef __cplusplus
#define U_CFUNC extern "C"
#define U_CDECL_BEGIN extern "C" {
#define U_CDECL_END }
#else
#define U_CFUNC extern
#define U_CDECL_BEGIN 
#define U_CDECL_END 
#endif
#ifndef U_ATTRIBUTE_DEPRECATED
#if U_GCC_MAJOR_MINOR >= 302
#define U_ATTRIBUTE_DEPRECATED __attribute__ ((deprecated))
#elif defined(_MSC_VER) && (_MSC_VER >= 1400)
#define U_ATTRIBUTE_DEPRECATED __declspec(deprecated)
#else
#define U_ATTRIBUTE_DEPRECATED 
#endif
#endif
#define U_CAPI U_CFUNC U_EXPORT
#define U_STABLE U_CAPI
#define U_DRAFT U_CAPI
#define U_DEPRECATED U_CAPI U_ATTRIBUTE_DEPRECATED
#define U_OBSOLETE U_CAPI
#define U_INTERNAL U_CAPI
#if U_CPLUSPLUS_VERSION >= 11
#ifndef U_OVERRIDE
#define U_OVERRIDE override
#endif
#ifndef U_FINAL
#define U_FINAL final
#endif
#else
#ifndef U_OVERRIDE
#define U_OVERRIDE 
#endif
#ifndef U_FINAL
#define U_FINAL 
#endif
#endif
#ifndef INT8_MIN
#define INT8_MIN ((int8_t)(-128))
#endif
#ifndef INT16_MIN
#define INT16_MIN ((int16_t)(-32767-1))
#endif
#ifndef INT32_MIN
#define INT32_MIN ((int32_t)(-2147483647-1))
#endif
#ifndef INT8_MAX
#define INT8_MAX ((int8_t)(127))
#endif
#ifndef INT16_MAX
#define INT16_MAX ((int16_t)(32767))
#endif
#ifndef INT32_MAX
#define INT32_MAX ((int32_t)(2147483647))
#endif
#ifndef UINT8_MAX
#define UINT8_MAX ((uint8_t)(255U))
#endif
#ifndef UINT16_MAX
#define UINT16_MAX ((uint16_t)(65535U))
#endif
#ifndef UINT32_MAX
#define UINT32_MAX ((uint32_t)(4294967295U))
#endif
#if defined(U_INT64_T_UNAVAILABLE)
# error int64_t is required for decimal format and rule-based number format.
#else
# ifndef INT64_C
#define INT64_C(c) c ## LL
# endif
# ifndef UINT64_C
#define UINT64_C(c) c ## ULL
# endif
# ifndef U_INT64_MIN
#define U_INT64_MIN ((int64_t)(INT64_C(-9223372036854775807)-1))
# endif
# ifndef U_INT64_MAX
#define U_INT64_MAX ((int64_t)(INT64_C(9223372036854775807)))
# endif
# ifndef U_UINT64_MAX
#define U_UINT64_MAX ((uint64_t)(UINT64_C(18446744073709551615)))
# endif
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#if !defined(U_WCHAR_IS_UTF16) && !defined(U_WCHAR_IS_UTF32)
# ifdef __STDC_ISO_10646__
# if (U_SIZEOF_WCHAR_T==2)
#define U_WCHAR_IS_UTF16 
# elif (U_SIZEOF_WCHAR_T==4)
#define U_WCHAR_IS_UTF32 
# endif
# elif defined __UCS2__
# if (U_PF_OS390 <= U_PLATFORM && U_PLATFORM <= U_PF_OS400) && (U_SIZEOF_WCHAR_T==2)
#define U_WCHAR_IS_UTF16 
# endif
# elif defined(__UCS4__) || (U_PLATFORM == U_PF_OS400 && defined(__UTF32__))
# if (U_SIZEOF_WCHAR_T==4)
#define U_WCHAR_IS_UTF32 
# endif
# elif U_PLATFORM_IS_DARWIN_BASED || (U_SIZEOF_WCHAR_T==4 && U_PLATFORM_IS_LINUX_BASED)
#define U_WCHAR_IS_UTF32 
# elif U_PLATFORM_HAS_WIN32_API
#define U_WCHAR_IS_UTF16 
# endif
#endif
#define U_SIZEOF_UCHAR 2
#if (U_PLATFORM == U_PF_AIX) && defined(__cplusplus) &&(U_CPLUSPLUS_VERSION < 11)
# include <uchar.h>
#define U_CHAR16_IS_TYPEDEF 1
#else
#define U_CHAR16_IS_TYPEDEF 0
#endif
#if 1
#elif !defined(UCHAR_TYPE)
#define UCHAR_TYPE uint16_t
#endif
#if defined(U_COMBINED_IMPLEMENTATION) || defined(U_COMMON_IMPLEMENTATION) || defined(U_I18N_IMPLEMENTATION) || defined(U_IO_IMPLEMENTATION)
#elif defined(UCHAR_TYPE)
#elif defined(__cplusplus)
#else
#endif
#if U_SIZEOF_WCHAR_T==2
#elif defined(__CHAR16_TYPE__)
#else
#endif
#define U_SENTINEL (-1)
#include "unicode/urename.h"
#endif
