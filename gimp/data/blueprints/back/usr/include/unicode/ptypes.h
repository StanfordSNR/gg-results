// GGHASH:VPTxpypSBUtnchUy1wBwEDRqnr7D0lWGgqJsFJKRCgOk00000de2
#ifndef _PTYPES_H
#define _PTYPES_H 
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 
#endif
#include <stddef.h>
#include "unicode/platform.h"
#if U_HAVE_STDINT_H
#include <stdint.h>
#if U_PLATFORM == U_PF_OS390
#include <features.h>
#if !defined(__uint8_t)
#define __uint8_t 1
#endif
#endif
#elif U_HAVE_INTTYPES_H
# include <inttypes.h>
#else
#if ! U_HAVE_INT8_T
#endif
#if ! U_HAVE_UINT8_T
#endif
#if ! U_HAVE_INT16_T
#endif
#if ! U_HAVE_UINT16_T
#endif
#if ! U_HAVE_INT32_T
#endif
#if ! U_HAVE_UINT32_T
#endif
#if ! U_HAVE_INT64_T
#ifdef _MSC_VER
#else
#endif
#endif
#if ! U_HAVE_UINT64_T
#ifdef _MSC_VER
#else
#endif
#endif
#endif
#endif
