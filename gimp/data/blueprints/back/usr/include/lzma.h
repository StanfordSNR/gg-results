// GGHASH:VQrbiApuyRXoMGnCRPQfe2wjaruYT.65dDJZ1slevuRo00002609
#ifndef LZMA_H
#define LZMA_H 
#ifndef LZMA_MANUAL_HEADERS
# include <stddef.h>
# if !defined(UINT32_C) || !defined(UINT64_C) || !defined(UINT32_MAX) || !defined(UINT64_MAX)
# if defined(_WIN32) && defined(_MSC_VER) && _MSC_VER < 1800
# else
# ifdef __cplusplus
# ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
# endif
# ifndef __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS 1
# endif
# endif
# include <inttypes.h>
# endif
# ifndef UINT32_C
# if defined(_WIN32) && defined(_MSC_VER)
#define UINT32_C(n) n ## UI32
# else
#define UINT32_C(n) n ## U
# endif
# endif
# ifndef UINT64_C
# if defined(_WIN32) && defined(_MSC_VER)
#define UINT64_C(n) n ## UI64
# else
# include <limits.h>
# if ULONG_MAX == 4294967295UL
#define UINT64_C(n) n ## ULL
# else
#define UINT64_C(n) n ## UL
# endif
# endif
# endif
# ifndef UINT32_MAX
#define UINT32_MAX (UINT32_C(4294967295))
# endif
# ifndef UINT64_MAX
#define UINT64_MAX (UINT64_C(18446744073709551615))
# endif
# endif
#endif
#ifndef LZMA_API_IMPORT
# if !defined(LZMA_API_STATIC) && defined(_WIN32) && !defined(__GNUC__)
#define LZMA_API_IMPORT __declspec(dllimport)
# else
#define LZMA_API_IMPORT 
# endif
#endif
#ifndef LZMA_API_CALL
# if defined(_WIN32) && !defined(__CYGWIN__)
#define LZMA_API_CALL __cdecl
# else
#define LZMA_API_CALL 
# endif
#endif
#ifndef LZMA_API
#define LZMA_API(type) LZMA_API_IMPORT type LZMA_API_CALL
#endif
#ifndef lzma_nothrow
# if defined(__cplusplus)
#define lzma_nothrow throw()
# elif __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3)
#define lzma_nothrow __attribute__((__nothrow__))
# else
#define lzma_nothrow 
# endif
#endif
#if __GNUC__ >= 3
# ifndef lzma_attribute
#define lzma_attribute(attr) __attribute__(attr)
# endif
# ifndef lzma_attr_warn_unused_result
# if __GNUC__ == 3 && __GNUC_MINOR__ < 4
#define lzma_attr_warn_unused_result 
# endif
# endif
#else
# ifndef lzma_attribute
#define lzma_attribute(attr) 
# endif
#endif
#ifndef lzma_attr_pure
#define lzma_attr_pure lzma_attribute((__pure__))
#endif
#ifndef lzma_attr_const
#define lzma_attr_const lzma_attribute((__const__))
#endif
#ifndef lzma_attr_warn_unused_result
#define lzma_attr_warn_unused_result lzma_attribute((__warn_unused_result__))
#endif
#ifdef __cplusplus
#endif
#define LZMA_H_INTERNAL 1
#include "lzma/version.h"
#include "lzma/base.h"
#include "lzma/vli.h"
#include "lzma/check.h"
#include "lzma/filter.h"
#include "lzma/bcj.h"
#include "lzma/delta.h"
#include "lzma/lzma12.h"
#include "lzma/container.h"
#include "lzma/stream_flags.h"
#include "lzma/block.h"
#include "lzma/index.h"
#include "lzma/index_hash.h"
#include "lzma/hardware.h"
#undef LZMA_H_INTERNAL
#ifdef __cplusplus
#endif
#endif
