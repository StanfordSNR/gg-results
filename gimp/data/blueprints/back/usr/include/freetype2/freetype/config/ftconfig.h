// GGHASH:VQtt1MgpaBpwxuzFTeKGiBUxyfcl1sH7RbbNo3WoR7z000004fd1
#ifndef FTCONFIG_H_
#define FTCONFIG_H_ 
#include <ft2build.h>
#include FT_CONFIG_OPTIONS_H
#include FT_CONFIG_STANDARD_LIBRARY_H
#define HAVE_UNISTD_H 1
#define HAVE_FCNTL_H 1
#define HAVE_STDINT_H 1
#ifndef FT_CHAR_BIT
#define FT_CHAR_BIT CHAR_BIT
#endif
#ifdef FT_USE_AUTOCONF_SIZEOF_TYPES
#define SIZEOF_INT 4
#define SIZEOF_LONG __SIZEOF_LONG__
#define FT_SIZEOF_INT SIZEOF_INT
#define FT_SIZEOF_LONG SIZEOF_LONG
#else
#if FT_UINT_MAX == 0xFFFFUL
#define FT_SIZEOF_INT (16 / FT_CHAR_BIT)
#elif FT_UINT_MAX == 0xFFFFFFFFUL
#define FT_SIZEOF_INT (32 / FT_CHAR_BIT)
#elif FT_UINT_MAX > 0xFFFFFFFFUL && FT_UINT_MAX == 0xFFFFFFFFFFFFFFFFUL
#define FT_SIZEOF_INT (64 / FT_CHAR_BIT)
#else
#error "Unsupported size of `int' type!"
#endif
#if FT_ULONG_MAX == 0xFFFFFFFFUL
#define FT_SIZEOF_LONG (32 / FT_CHAR_BIT)
#elif FT_ULONG_MAX > 0xFFFFFFFFUL && FT_ULONG_MAX == 0xFFFFFFFFFFUL
#define FT_SIZEOF_LONG (32 / FT_CHAR_BIT)
#elif FT_ULONG_MAX > 0xFFFFFFFFUL && FT_ULONG_MAX == 0xFFFFFFFFFFFFFFFFUL
#define FT_SIZEOF_LONG (64 / FT_CHAR_BIT)
#else
#error "Unsupported size of `long' type!"
#endif
#endif
#ifndef FT_UNUSED
#define FT_UNUSED(arg) ( (arg) = (arg) )
#endif
#if defined( __APPLE__ ) || ( defined( __MWERKS__ ) && defined( macintosh ) )
#include <errno.h>
#ifdef ECANCELED
#include "AvailabilityMacros.h"
#endif
#if defined( __LP64__ ) && ( MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_4 )
#undef FT_MACINTOSH
#endif
#elif defined( __SC__ ) || defined( __MRC__ )
#include "ConditionalMacros.h"
#if TARGET_OS_MAC
#define FT_MACINTOSH 1
#endif
#endif
#if defined( __sgi ) && !defined( __GNUC__ )
#if defined( _COMPILER_VERSION ) && ( _COMPILER_VERSION >= 730 )
#pragma set woff 3505
#endif
#endif
#if 0
#endif
#if FT_SIZEOF_INT == 4
#elif FT_SIZEOF_LONG == 4
#else
#error "no 32bit type found -- please check your configuration files"
#endif
#if FT_SIZEOF_INT >= 4
#elif FT_SIZEOF_LONG >= 4
#endif
#if FT_SIZEOF_LONG == 8
#define FT_LONG64 
#define FT_INT64 long
#define FT_UINT64 unsigned long
#elif ( FT_SIZEOF_LONG == 4 ) && defined( HAVE_LONG_LONG_INT ) && defined( __GNUC__ )
#pragma GCC diagnostic ignored "-Wlong-long"
#define FT_LONG64 
#define FT_INT64 long long int
#define FT_UINT64 unsigned long long int
#elif !defined( __STDC__ ) || defined( FT_CONFIG_OPTION_FORCE_INT64 )
#if defined( __STDC_VERSION__ ) && __STDC_VERSION__ >= 199901L
#define FT_LONG64 
#define FT_INT64 long long int
#define FT_UINT64 unsigned long long int
#elif defined( _MSC_VER ) && _MSC_VER >= 900
#define FT_LONG64 
#define FT_INT64 __int64
#define FT_UINT64 unsigned __int64
#elif defined( __BORLANDC__ )
#define FT_LONG64 
#define FT_INT64 __int64
#define FT_UINT64 unsigned __int64
#elif defined( __WATCOMC__ )
#elif defined( __MWERKS__ )
#define FT_LONG64 
#define FT_INT64 long long int
#define FT_UINT64 unsigned long long int
#elif defined( __GNUC__ )
#define FT_LONG64 
#define FT_INT64 long long int
#define FT_UINT64 unsigned long long int
#endif
#endif
#ifdef FT_LONG64
#endif
#ifdef _WIN64
#define FT_UINT_TO_POINTER(x) (void*)(unsigned __int64)(x)
#else
#define FT_UINT_TO_POINTER(x) (void*)(unsigned long)(x)
#endif
#define FT_BEGIN_STMNT do {
#define FT_END_STMNT } while ( 0 )
#define FT_DUMMY_STMNT FT_BEGIN_STMNT FT_END_STMNT
#if ( ( defined( __GNUC__ ) && __GNUC__ >= 2 ) || ( defined( __IBMC__ ) && __IBMC__ >= 1210 && defined( __IBM__TYPEOF__ ) ) || ( defined( __SUNPRO_C ) && __SUNPRO_C >= 0x5110 && !__STDC__ ) )
#define FT_TYPEOF(type) ( __typeof__ ( type ) )
#else
#define FT_TYPEOF(type) 
#endif
#ifdef FT_MAKE_OPTION_SINGLE_OBJECT
#define FT_LOCAL(x) static x
#define FT_LOCAL_DEF(x) static x
#else
#ifdef __cplusplus
#define FT_LOCAL(x) extern "C" x
#define FT_LOCAL_DEF(x) extern "C" x
#else
#define FT_LOCAL(x) extern x
#define FT_LOCAL_DEF(x) x
#endif
#endif
#define FT_LOCAL_ARRAY(x) extern const x
#define FT_LOCAL_ARRAY_DEF(x) const x
#ifndef FT_BASE
#ifdef __cplusplus
#define FT_BASE(x) extern "C" x
#else
#define FT_BASE(x) extern x
#endif
#endif
#ifndef FT_BASE_DEF
#ifdef __cplusplus
#define FT_BASE_DEF(x) x
#else
#define FT_BASE_DEF(x) x
#endif
#endif
#ifndef FT_EXPORT
#ifdef __cplusplus
#define FT_EXPORT(x) extern "C" x
#else
#define FT_EXPORT(x) extern x
#endif
#endif
#ifndef FT_EXPORT_DEF
#ifdef __cplusplus
#define FT_EXPORT_DEF(x) extern "C" x
#else
#define FT_EXPORT_DEF(x) extern x
#endif
#endif
#ifndef FT_EXPORT_VAR
#ifdef __cplusplus
#define FT_EXPORT_VAR(x) extern "C" x
#else
#define FT_EXPORT_VAR(x) extern x
#endif
#endif
#ifndef FT_CALLBACK_DEF
#ifdef __cplusplus
#define FT_CALLBACK_DEF(x) extern "C" x
#else
#define FT_CALLBACK_DEF(x) static x
#endif
#endif
#ifndef FT_CALLBACK_TABLE
#ifdef __cplusplus
#define FT_CALLBACK_TABLE extern "C"
#define FT_CALLBACK_TABLE_DEF extern "C"
#else
#define FT_CALLBACK_TABLE extern
#define FT_CALLBACK_TABLE_DEF 
#endif
#endif
#endif
