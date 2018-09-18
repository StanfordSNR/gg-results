// GGHASH:VteFZEiL6aGzX3J2A12Q44UuG7yM81vguYSMyuXY8msI000011ee
#ifndef _WMMINTRIN_H_INCLUDED
#define _WMMINTRIN_H_INCLUDED 
#include <emmintrin.h>
#ifndef __AES__
#pragma GCC push_options
#pragma GCC target("aes")
#define __DISABLE_AES__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_aeskeygenassist_si128(X,C) ((__m128i) __builtin_ia32_aeskeygenassist128 ((__v2di)(__m128i)(X), (int)(C)))
#endif
#ifdef __DISABLE_AES__
#undef __DISABLE_AES__
#pragma GCC pop_options
#endif
#ifndef __PCLMUL__
#pragma GCC push_options
#pragma GCC target("pclmul")
#define __DISABLE_PCLMUL__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_clmulepi64_si128(X,Y,I) ((__m128i) __builtin_ia32_pclmulqdq128 ((__v2di)(__m128i)(X), (__v2di)(__m128i)(Y), (int)(I)))
#endif
#ifdef __DISABLE_PCLMUL__
#undef __DISABLE_PCLMUL__
#pragma GCC pop_options
#endif
#endif
