// GGHASH:Vq7Jxdh7aMQkmr7Yc6oOoNW1LTz32GmpZA8_Echqjeq800000c90
#ifndef _AMMINTRIN_H_INCLUDED
#define _AMMINTRIN_H_INCLUDED 
#include <pmmintrin.h>
#ifndef __SSE4A__
#pragma GCC push_options
#pragma GCC target("sse4a")
#define __DISABLE_SSE4A__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_extracti_si64(X,I,L) ((__m128i) __builtin_ia32_extrqi ((__v2di)(__m128i)(X), (unsigned int)(I), (unsigned int)(L)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_inserti_si64(X,Y,I,L) ((__m128i) __builtin_ia32_insertqi ((__v2di)(__m128i)(X), (__v2di)(__m128i)(Y), (unsigned int)(I), (unsigned int)(L)))
#endif
#ifdef __DISABLE_SSE4A__
#undef __DISABLE_SSE4A__
#pragma GCC pop_options
#endif
#endif
