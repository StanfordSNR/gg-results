// GGHASH:VwxpGSV1.SPcZYg1dlx_HixZbJHBz.5P1RZLss87xXpw00000c7e
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <shaintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _SHAINTRIN_H_INCLUDED
#define _SHAINTRIN_H_INCLUDED 
#ifndef __SHA__
#pragma GCC push_options
#pragma GCC target("sha")
#define __DISABLE_SHA__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_sha1rnds4_epu32(A,B,I) ((__m128i) __builtin_ia32_sha1rnds4 ((__v4si)(__m128i)A, (__v4si)(__m128i)B, (int)I))
#endif
#ifdef __DISABLE_SHA__
#undef __DISABLE_SHA__
#pragma GCC pop_options
#endif
#endif
