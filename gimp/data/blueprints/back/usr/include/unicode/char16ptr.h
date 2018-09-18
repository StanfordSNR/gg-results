// GGHASH:VRPXhkPaXcg2Zp83wMx9DT9fyhShMtFUYXN16Gd1Ew0w00001d2e
#ifndef __CHAR16PTR_H__
#define __CHAR16PTR_H__ 
#include <cstddef>
#include "unicode/utypes.h"
#ifdef U_ALIASING_BARRIER
#elif (defined(__clang__) || defined(__GNUC__)) && U_PLATFORM != U_PF_BROWSER_NATIVE_CLIENT
#define U_ALIASING_BARRIER(ptr) asm volatile("" : : "rm"(ptr) : "memory")
#endif
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2 || defined(U_IN_DOXYGEN)
#endif
#ifdef U_ALIASING_BARRIER
#else
#endif
#ifdef U_ALIASING_BARRIER
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2
#endif
#else
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2
#endif
#endif
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2 || defined(U_IN_DOXYGEN)
#endif
#ifdef U_ALIASING_BARRIER
#else
#endif
#ifdef U_ALIASING_BARRIER
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2
#endif
#else
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2
#endif
#endif
#ifdef U_ALIASING_BARRIER
#endif
#ifdef U_ALIASING_BARRIER
#endif
#ifdef U_ALIASING_BARRIER
#endif
#ifdef U_ALIASING_BARRIER
#endif
#endif
