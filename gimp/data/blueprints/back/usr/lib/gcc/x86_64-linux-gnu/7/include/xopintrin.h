// GGHASH:Vh6JygpgKEKJoY93faWCZUK.0PrX8rJr9sJPMODDSiPQ00006f96
#ifndef _X86INTRIN_H_INCLUDED
# error "Never use <xopintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _XOPMMINTRIN_H_INCLUDED
#define _XOPMMINTRIN_H_INCLUDED 
#include <fma4intrin.h>
#ifndef __XOP__
#pragma GCC push_options
#pragma GCC target("xop")
#define __DISABLE_XOP__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_roti_epi8(A,N) ((__m128i) __builtin_ia32_vprotbi ((__v16qi)(__m128i)(A), (int)(N)))
#define _mm_roti_epi16(A,N) ((__m128i) __builtin_ia32_vprotwi ((__v8hi)(__m128i)(A), (int)(N)))
#define _mm_roti_epi32(A,N) ((__m128i) __builtin_ia32_vprotdi ((__v4si)(__m128i)(A), (int)(N)))
#define _mm_roti_epi64(A,N) ((__m128i) __builtin_ia32_vprotqi ((__v2di)(__m128i)(A), (int)(N)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_permute2_pd(X,Y,C,I) ((__m128d) __builtin_ia32_vpermil2pd ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128d)(C), (int)(I)))
#define _mm256_permute2_pd(X,Y,C,I) ((__m256d) __builtin_ia32_vpermil2pd256 ((__v4df)(__m256d)(X), (__v4df)(__m256d)(Y), (__v4di)(__m256d)(C), (int)(I)))
#define _mm_permute2_ps(X,Y,C,I) ((__m128) __builtin_ia32_vpermil2ps ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128)(C), (int)(I)))
#define _mm256_permute2_ps(X,Y,C,I) ((__m256) __builtin_ia32_vpermil2ps256 ((__v8sf)(__m256)(X), (__v8sf)(__m256)(Y), (__v8si)(__m256)(C), (int)(I)))
#endif
#ifdef __DISABLE_XOP__
#undef __DISABLE_XOP__
#pragma GCC pop_options
#endif
#endif
