// GGHASH:V.gI5gxwXfXejfWXMcUah7DPzrVzBb9Gwrfu2x_oyZDk000077ae
#ifndef UTYPES_H
#define UTYPES_H 
#include "unicode/umachine.h"
#include "unicode/uversion.h"
#include "unicode/uconfig.h"
#include <float.h>
#if !U_NO_DEFAULT_INCLUDE_UTF_HEADERS
# include "unicode/utf.h"
#endif
#ifdef __cplusplus
# ifndef U_SHOW_CPLUSPLUS_API
#define U_SHOW_CPLUSPLUS_API 1
# endif
#else
#undef U_SHOW_CPLUSPLUS_API
#define U_SHOW_CPLUSPLUS_API 0
#endif
#if !U_DEFAULT_SHOW_DRAFT && !defined(U_SHOW_DRAFT_API)
#define U_HIDE_DRAFT_API 1
#endif
#if !U_DEFAULT_SHOW_DRAFT && !defined(U_SHOW_INTERNAL_API)
#define U_HIDE_INTERNAL_API 1
#endif
#if U_CHARSET_FAMILY
# if U_IS_BIG_ENDIAN
#define U_ICUDATA_TYPE_LETTER "e"
#define U_ICUDATA_TYPE_LITLETTER e
# else
# error "Don't know what to do with little endian EBCDIC!"
#define U_ICUDATA_TYPE_LETTER "x"
#define U_ICUDATA_TYPE_LITLETTER x
# endif
#else
# if U_IS_BIG_ENDIAN
#define U_ICUDATA_TYPE_LETTER "b"
#define U_ICUDATA_TYPE_LITLETTER b
# else
#define U_ICUDATA_TYPE_LETTER "l"
#define U_ICUDATA_TYPE_LITLETTER l
# endif
#endif
#define U_ICUDATA_NAME "icudt" U_ICU_VERSION_SHORT U_ICUDATA_TYPE_LETTER
#ifndef U_HIDE_INTERNAL_API
#define U_USRDATA_NAME "usrdt" U_ICU_VERSION_SHORT U_ICUDATA_TYPE_LETTER
#define U_USE_USRDATA 0
#endif
#define U_ICUDATA_ENTRY_POINT U_DEF2_ICUDATA_ENTRY_POINT(U_ICU_VERSION_MAJOR_NUM,U_LIB_SUFFIX_C_NAME)
#ifndef U_HIDE_INTERNAL_API
#define U_DEF2_ICUDATA_ENTRY_POINT(major,suff) U_DEF_ICUDATA_ENTRY_POINT(major,suff)
#ifndef U_DEF_ICUDATA_ENTRY_POINT
#ifndef U_LIB_SUFFIX_C_NAME
#define U_DEF_ICUDATA_ENTRY_POINT(major,suff) icudt ##major ##_dat
#else
#define U_DEF_ICUDATA_ENTRY_POINT(major,suff) icudt ##suff ## major ##_dat
#endif
#endif
#endif
#ifndef NULL
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void *)0)
#endif
#endif
#define U_MILLIS_PER_SECOND (1000)
#define U_MILLIS_PER_MINUTE (60000)
#define U_MILLIS_PER_HOUR (3600000)
#define U_MILLIS_PER_DAY (86400000)
#define U_DATE_MAX DBL_MAX
#define U_DATE_MIN -U_DATE_MAX
#if defined(U_COMBINED_IMPLEMENTATION)
#define U_DATA_API U_EXPORT
#define U_COMMON_API U_EXPORT
#define U_I18N_API U_EXPORT
#define U_LAYOUT_API U_EXPORT
#define U_LAYOUTEX_API U_EXPORT
#define U_IO_API U_EXPORT
#define U_TOOLUTIL_API U_EXPORT
#elif defined(U_STATIC_IMPLEMENTATION)
#define U_DATA_API 
#define U_COMMON_API 
#define U_I18N_API 
#define U_LAYOUT_API 
#define U_LAYOUTEX_API 
#define U_IO_API 
#define U_TOOLUTIL_API 
#elif defined(U_COMMON_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_EXPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_IMPORT
#elif defined(U_I18N_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_EXPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_IMPORT
#elif defined(U_LAYOUT_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_EXPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_IMPORT
#elif defined(U_LAYOUTEX_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_EXPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_IMPORT
#elif defined(U_IO_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_EXPORT
#define U_TOOLUTIL_API U_IMPORT
#elif defined(U_TOOLUTIL_IMPLEMENTATION)
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_EXPORT
#else
#define U_DATA_API U_IMPORT
#define U_COMMON_API U_IMPORT
#define U_I18N_API U_IMPORT
#define U_LAYOUT_API U_IMPORT
#define U_LAYOUTEX_API U_IMPORT
#define U_IO_API U_IMPORT
#define U_TOOLUTIL_API U_IMPORT
#endif
#ifdef __cplusplus
#define U_STANDARD_CPP_NAMESPACE ::
#else
#define U_STANDARD_CPP_NAMESPACE 
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifdef __cplusplus
#else
#define U_SUCCESS(x) ((x)<=U_ZERO_ERROR)
#define U_FAILURE(x) ((x)>U_ZERO_ERROR)
#endif
#endif
