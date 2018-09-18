// GGHASH:VCbutLLvS3biIpNGjvkVxJCORrzQYmjb.IkybjuvXJi000006edc
#ifndef _PLATFORM_H
#define _PLATFORM_H 
#include "unicode/uconfig.h"
#include "unicode/uvernum.h"
#ifdef U_IN_DOXYGEN
#endif
#define U_PF_UNKNOWN 0
#define U_PF_WINDOWS 1000
#define U_PF_MINGW 1800
#define U_PF_CYGWIN 1900
#define U_PF_HPUX 2100
#define U_PF_SOLARIS 2600
#define U_PF_BSD 3000
#define U_PF_AIX 3100
#define U_PF_IRIX 3200
#define U_PF_DARWIN 3500
#define U_PF_IPHONE 3550
#define U_PF_QNX 3700
#define U_PF_LINUX 4000
#define U_PF_BROWSER_NATIVE_CLIENT 4020
#define U_PF_ANDROID 4050
#define U_PF_FUCHSIA 4100
#define U_PF_OS390 9000
#define U_PF_OS400 9400
#ifdef U_PLATFORM
#elif defined(__MINGW32__)
#define U_PLATFORM U_PF_MINGW
#elif defined(__CYGWIN__)
#define U_PLATFORM U_PF_CYGWIN
#elif defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
#define U_PLATFORM U_PF_WINDOWS
#elif defined(__ANDROID__)
#define U_PLATFORM U_PF_ANDROID
# include <android/api-level.h>
#elif defined(__pnacl__) || defined(__native_client__)
#define U_PLATFORM U_PF_BROWSER_NATIVE_CLIENT
#elif defined(__Fuchsia__)
#define U_PLATFORM U_PF_FUCHSIA
#elif defined(linux) || defined(__linux__) || defined(__linux)
#define U_PLATFORM U_PF_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
# include <TargetConditionals.h>
# if defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#define U_PLATFORM U_PF_IPHONE
# else
#define U_PLATFORM U_PF_DARWIN
# endif
#elif defined(BSD) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__MirBSD__)
# if defined(__FreeBSD__)
# include <sys/endian.h>
# endif
#define U_PLATFORM U_PF_BSD
#elif defined(sun) || defined(__sun)
#define U_PLATFORM U_PF_SOLARIS
# if defined(__GNUC__)
# include <sys/isa_defs.h>
# endif
#elif defined(_AIX) || defined(__TOS_AIX__)
#define U_PLATFORM U_PF_AIX
#elif defined(_hpux) || defined(hpux) || defined(__hpux)
#define U_PLATFORM U_PF_HPUX
#elif defined(sgi) || defined(__sgi)
#define U_PLATFORM U_PF_IRIX
#elif defined(__QNX__) || defined(__QNXNTO__)
#define U_PLATFORM U_PF_QNX
#elif defined(__TOS_MVS__)
#define U_PLATFORM U_PF_OS390
#elif defined(__OS400__) || defined(__TOS_OS400__)
#define U_PLATFORM U_PF_OS400
#else
#define U_PLATFORM U_PF_UNKNOWN
#endif
#ifndef UPRV_INCOMPLETE_CPP11_SUPPORT
#define UPRV_INCOMPLETE_CPP11_SUPPORT (U_PLATFORM == U_PF_AIX || U_PLATFORM == U_PF_OS390 || U_PLATFORM == U_PF_SOLARIS )
#endif
#ifdef U_PLATFORM_USES_ONLY_WIN32_API
#elif (U_PF_WINDOWS <= U_PLATFORM && U_PLATFORM <= U_PF_MINGW) || defined(CYGWINMSVC)
#define U_PLATFORM_USES_ONLY_WIN32_API 1
#else
#define U_PLATFORM_USES_ONLY_WIN32_API 0
#endif
#ifdef U_PLATFORM_HAS_WIN32_API
#elif U_PF_WINDOWS <= U_PLATFORM && U_PLATFORM <= U_PF_CYGWIN
#define U_PLATFORM_HAS_WIN32_API 1
#else
#define U_PLATFORM_HAS_WIN32_API 0
#endif
#ifdef U_PLATFORM_HAS_WINUWP_API
#else
#define U_PLATFORM_HAS_WINUWP_API 0
#endif
#ifdef U_PLATFORM_IMPLEMENTS_POSIX
#elif U_PLATFORM_USES_ONLY_WIN32_API
#define U_PLATFORM_IMPLEMENTS_POSIX 0
#else
#define U_PLATFORM_IMPLEMENTS_POSIX 1
#endif
#ifdef U_PLATFORM_IS_LINUX_BASED
#elif U_PF_LINUX <= U_PLATFORM && U_PLATFORM <= 4499
#define U_PLATFORM_IS_LINUX_BASED 1
#else
#define U_PLATFORM_IS_LINUX_BASED 0
#endif
#ifdef U_PLATFORM_IS_DARWIN_BASED
#elif U_PF_DARWIN <= U_PLATFORM && U_PLATFORM <= U_PF_IPHONE
#define U_PLATFORM_IS_DARWIN_BASED 1
#else
#define U_PLATFORM_IS_DARWIN_BASED 0
#endif
#ifdef U_HAVE_STDINT_H
#elif U_PLATFORM_USES_ONLY_WIN32_API
# if defined(__BORLANDC__) || U_PLATFORM == U_PF_MINGW || (defined(_MSC_VER) && _MSC_VER>=1600)
#define U_HAVE_STDINT_H 1
# else
#define U_HAVE_STDINT_H 0
# endif
#elif U_PLATFORM == U_PF_SOLARIS
#define U_HAVE_STDINT_H 0
#elif U_PLATFORM == U_PF_AIX && !defined(_AIX51) && defined(_POWER)
#define U_HAVE_STDINT_H 0
#else
#define U_HAVE_STDINT_H 1
#endif
#ifdef U_HAVE_INTTYPES_H
#elif U_PLATFORM == U_PF_SOLARIS
#define U_HAVE_INTTYPES_H 1
#elif U_PLATFORM == U_PF_AIX && !defined(_AIX51) && defined(_POWER)
#define U_HAVE_INTTYPES_H 1
#else
#define U_HAVE_INTTYPES_H U_HAVE_STDINT_H
#endif
#ifdef __GNUC__
#define U_GCC_MAJOR_MINOR (__GNUC__ * 100 + __GNUC_MINOR__)
#else
#define U_GCC_MAJOR_MINOR 0
#endif
#ifdef U_IS_BIG_ENDIAN
#elif defined(BYTE_ORDER) && defined(BIG_ENDIAN)
#define U_IS_BIG_ENDIAN (BYTE_ORDER == BIG_ENDIAN)
#elif defined(__BYTE_ORDER__) && defined(__ORDER_BIG_ENDIAN__)
#define U_IS_BIG_ENDIAN (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#elif defined(__BIG_ENDIAN__) || defined(_BIG_ENDIAN)
#define U_IS_BIG_ENDIAN 1
#elif defined(__LITTLE_ENDIAN__) || defined(_LITTLE_ENDIAN)
#define U_IS_BIG_ENDIAN 0
#elif U_PLATFORM == U_PF_OS390 || U_PLATFORM == U_PF_OS400 || defined(__s390__) || defined(__s390x__)
#define U_IS_BIG_ENDIAN 1
#elif defined(_PA_RISC1_0) || defined(_PA_RISC1_1) || defined(_PA_RISC2_0)
#define U_IS_BIG_ENDIAN 1
#elif defined(sparc) || defined(__sparc) || defined(__sparc__)
#define U_IS_BIG_ENDIAN 1
#else
#define U_IS_BIG_ENDIAN 0
#endif
#ifdef U_HAVE_PLACEMENT_NEW
#elif defined(__BORLANDC__)
#define U_HAVE_PLACEMENT_NEW 0
#else
#define U_HAVE_PLACEMENT_NEW 1
#endif
#ifdef U_HAVE_DEBUG_LOCATION_NEW
#elif defined(_MSC_VER)
#define U_HAVE_DEBUG_LOCATION_NEW 1
#else
#define U_HAVE_DEBUG_LOCATION_NEW 0
#endif
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
#define __has_cpp_attribute(x) 0
#endif
#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#ifndef __has_feature
#define __has_feature(x) 0
#endif
#ifndef __has_extension
#define __has_extension(x) 0
#endif
#ifndef __has_warning
#define __has_warning(x) 0
#endif
#if defined(__GNUC__) && __GNUC__>=3
#define U_MALLOC_ATTR __attribute__ ((__malloc__))
#else
#define U_MALLOC_ATTR 
#endif
#if (defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))) || __has_attribute(alloc_size)
#define U_ALLOC_SIZE_ATTR(X) __attribute__ ((alloc_size(X)))
#define U_ALLOC_SIZE_ATTR2(X,Y) __attribute__ ((alloc_size(X,Y)))
#else
#define U_ALLOC_SIZE_ATTR(X) 
#define U_ALLOC_SIZE_ATTR2(X,Y) 
#endif
#ifdef U_CPLUSPLUS_VERSION
# if U_CPLUSPLUS_VERSION != 0 && !defined(__cplusplus)
#undef U_CPLUSPLUS_VERSION
#define U_CPLUSPLUS_VERSION 0
# endif
#elif !defined(__cplusplus)
#define U_CPLUSPLUS_VERSION 0
#elif __cplusplus >= 201402L
#define U_CPLUSPLUS_VERSION 14
#elif __cplusplus >= 201103L
#define U_CPLUSPLUS_VERSION 11
#else
#define U_CPLUSPLUS_VERSION 1
#endif
#if (U_PLATFORM == U_PF_AIX || U_PLATFORM == U_PF_OS390) && defined(__cplusplus) &&(U_CPLUSPLUS_VERSION < 11)
#endif
#ifdef U_HAVE_RVALUE_REFERENCES
#elif U_CPLUSPLUS_VERSION >= 11 || __has_feature(cxx_rvalue_references) || defined(__GXX_EXPERIMENTAL_CXX0X__) || (defined(_MSC_VER) && _MSC_VER >= 1600)
#define U_HAVE_RVALUE_REFERENCES 1
#else
#define U_HAVE_RVALUE_REFERENCES 0
#endif
#ifdef U_NOEXCEPT
#elif defined(_HAS_EXCEPTIONS) && !_HAS_EXCEPTIONS
#define U_NOEXCEPT 
#elif U_CPLUSPLUS_VERSION >= 11 || __has_feature(cxx_noexcept) || __has_extension(cxx_noexcept) || (defined(_MSC_VER) && _MSC_VER >= 1900)
#define U_NOEXCEPT noexcept
#else
#define U_NOEXCEPT 
#endif
#ifndef __cplusplus
#elif defined(U_FALLTHROUGH)
#elif defined(__clang__)
# if __has_cpp_attribute(clang::fallthrough) || (__has_feature(cxx_attributes) && __has_warning("-Wimplicit-fallthrough"))
#define U_FALLTHROUGH [[clang::fallthrough]]
# endif
#endif
#ifndef U_FALLTHROUGH
#define U_FALLTHROUGH 
#endif
#define U_ASCII_FAMILY 0
#define U_EBCDIC_FAMILY 1
#ifdef U_CHARSET_FAMILY
#elif U_PLATFORM == U_PF_OS390 && (!defined(__CHARSET_LIB) || !__CHARSET_LIB)
#define U_CHARSET_FAMILY U_EBCDIC_FAMILY
#elif U_PLATFORM == U_PF_OS400 && !defined(__UTF32__)
#define U_CHARSET_FAMILY U_EBCDIC_FAMILY
#else
#define U_CHARSET_FAMILY U_ASCII_FAMILY
#endif
#ifdef U_CHARSET_IS_UTF8
#elif U_PLATFORM == U_PF_ANDROID || U_PLATFORM_IS_DARWIN_BASED
#define U_CHARSET_IS_UTF8 1
#else
#define U_CHARSET_IS_UTF8 0
#endif
#ifdef U_HAVE_WCHAR_H
#elif U_PLATFORM == U_PF_ANDROID && __ANDROID_API__ < 9
#define U_HAVE_WCHAR_H 0
#else
#define U_HAVE_WCHAR_H 1
#endif
#ifdef U_SIZEOF_WCHAR_T
#elif (U_PLATFORM == U_PF_ANDROID && __ANDROID_API__ < 9)
#define U_SIZEOF_WCHAR_T 1
#elif U_PLATFORM_HAS_WIN32_API || U_PLATFORM == U_PF_CYGWIN
#define U_SIZEOF_WCHAR_T 2
#elif U_PLATFORM == U_PF_AIX
# ifdef __64BIT__
#define U_SIZEOF_WCHAR_T 4
# else
#define U_SIZEOF_WCHAR_T 2
# endif
#elif U_PLATFORM == U_PF_OS390
# ifdef _LP64
#define U_SIZEOF_WCHAR_T 4
# else
#define U_SIZEOF_WCHAR_T 2
# endif
#elif U_PLATFORM == U_PF_OS400
# if defined(__UTF32__)
#define U_SIZEOF_WCHAR_T 4
# elif defined(__UCS2__)
#define U_SIZEOF_WCHAR_T 2
#else
#define U_SIZEOF_WCHAR_T 2
# endif
#else
#define U_SIZEOF_WCHAR_T 4
#endif
#ifndef U_HAVE_WCSCPY
#define U_HAVE_WCSCPY U_HAVE_WCHAR_H
#endif
#ifdef U_HAVE_CHAR16_T
#else
# if U_CPLUSPLUS_VERSION >= 11 || (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L)
#define U_HAVE_CHAR16_T 1
# else
#define U_HAVE_CHAR16_T 0
# endif
#endif
#ifdef U_DECLARE_UTF16
#elif U_HAVE_CHAR16_T || (defined(__xlC__) && defined(__IBM_UTF_LITERAL) && U_SIZEOF_WCHAR_T != 2) || (defined(__HP_aCC) && __HP_aCC >= 035000) || (defined(__HP_cc) && __HP_cc >= 111106)
#define U_DECLARE_UTF16(string) u ## string
#elif U_SIZEOF_WCHAR_T == 2 && (U_CHARSET_FAMILY == 0 || (U_PF_OS390 <= U_PLATFORM && U_PLATFORM <= U_PF_OS400 && defined(__UCS2__)))
#define U_DECLARE_UTF16(string) L ## string
#else
#endif
#ifdef U_EXPORT
#elif defined(U_STATIC_IMPLEMENTATION)
#define U_EXPORT 
#elif defined(__GNUC__)
#define U_EXPORT __attribute__((visibility("default")))
#elif (defined(__SUNPRO_CC) && __SUNPRO_CC >= 0x550) || (defined(__SUNPRO_C) && __SUNPRO_C >= 0x550)
#define U_EXPORT __global
#elif defined(_MSC_VER)
#define U_EXPORT __declspec(dllexport)
#else
#define U_EXPORT 
#endif
#ifdef U_EXPORT2
#elif defined(_MSC_VER)
#define U_EXPORT2 __cdecl
#else
#define U_EXPORT2 
#endif
#ifdef U_IMPORT
#elif defined(_MSC_VER)
#define U_IMPORT __declspec(dllimport)
#else
#define U_IMPORT 
#endif
#if U_PLATFORM == U_PF_OS390 && defined(__cplusplus)
#define U_CALLCONV __cdecl
#else
#define U_CALLCONV U_EXPORT2
#endif
#if U_PLATFORM == U_PF_OS390 && defined(__cplusplus)
#define U_CALLCONV_FPTR U_CALLCONV
#else
#define U_CALLCONV_FPTR 
#endif
#endif
