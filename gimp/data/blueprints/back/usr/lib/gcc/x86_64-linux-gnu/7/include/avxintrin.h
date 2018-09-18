// GGHASH:VCI013mDzRpbkw_MpIaaRqYpPH6Ow7bYoCGvg1n.l7T40000c0e7
#ifndef _IMMINTRIN_H_INCLUDED
# error "Never use <avxintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVXINTRIN_H_INCLUDED
#define _AVXINTRIN_H_INCLUDED 
#ifndef __AVX__
#pragma GCC push_options
#pragma GCC target("avx")
#define __DISABLE_AVX__ 
#endif
#define _CMP_EQ_OQ 0x00
#define _CMP_LT_OS 0x01
#define _CMP_LE_OS 0x02
#define _CMP_UNORD_Q 0x03
#define _CMP_NEQ_UQ 0x04
#define _CMP_NLT_US 0x05
#define _CMP_NLE_US 0x06
#define _CMP_ORD_Q 0x07
#define _CMP_EQ_UQ 0x08
#define _CMP_NGE_US 0x09
#define _CMP_NGT_US 0x0a
#define _CMP_FALSE_OQ 0x0b
#define _CMP_NEQ_OQ 0x0c
#define _CMP_GE_OS 0x0d
#define _CMP_GT_OS 0x0e
#define _CMP_TRUE_UQ 0x0f
#define _CMP_EQ_OS 0x10
#define _CMP_LT_OQ 0x11
#define _CMP_LE_OQ 0x12
#define _CMP_UNORD_S 0x13
#define _CMP_NEQ_US 0x14
#define _CMP_NLT_UQ 0x15
#define _CMP_NLE_UQ 0x16
#define _CMP_ORD_S 0x17
#define _CMP_EQ_US 0x18
#define _CMP_NGE_UQ 0x19
#define _CMP_NGT_UQ 0x1a
#define _CMP_FALSE_OS 0x1b
#define _CMP_NEQ_OS 0x1c
#define _CMP_GE_OQ 0x1d
#define _CMP_GT_OQ 0x1e
#define _CMP_TRUE_US 0x1f
#ifdef __OPTIMIZE__
#else
#define _mm256_blend_pd(X,Y,M) ((__m256d) __builtin_ia32_blendpd256 ((__v4df)(__m256d)(X), (__v4df)(__m256d)(Y), (int)(M)))
#define _mm256_blend_ps(X,Y,M) ((__m256) __builtin_ia32_blendps256 ((__v8sf)(__m256)(X), (__v8sf)(__m256)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_dp_ps(X,Y,M) ((__m256) __builtin_ia32_dpps256 ((__v8sf)(__m256)(X), (__v8sf)(__m256)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_shuffle_pd(A,B,N) ((__m256d)__builtin_ia32_shufpd256 ((__v4df)(__m256d)(A), (__v4df)(__m256d)(B), (int)(N)))
#define _mm256_shuffle_ps(A,B,N) ((__m256) __builtin_ia32_shufps256 ((__v8sf)(__m256)(A), (__v8sf)(__m256)(B), (int)(N)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_cmp_pd(X,Y,P) ((__m128d) __builtin_ia32_cmppd ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P)))
#define _mm_cmp_ps(X,Y,P) ((__m128) __builtin_ia32_cmpps ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P)))
#define _mm256_cmp_pd(X,Y,P) ((__m256d) __builtin_ia32_cmppd256 ((__v4df)(__m256d)(X), (__v4df)(__m256d)(Y), (int)(P)))
#define _mm256_cmp_ps(X,Y,P) ((__m256) __builtin_ia32_cmpps256 ((__v8sf)(__m256)(X), (__v8sf)(__m256)(Y), (int)(P)))
#define _mm_cmp_sd(X,Y,P) ((__m128d) __builtin_ia32_cmpsd ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P)))
#define _mm_cmp_ss(X,Y,P) ((__m128) __builtin_ia32_cmpss ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P)))
#endif
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define _mm256_extractf128_pd(X,N) ((__m128d) __builtin_ia32_vextractf128_pd256 ((__v4df)(__m256d)(X), (int)(N)))
#define _mm256_extractf128_ps(X,N) ((__m128) __builtin_ia32_vextractf128_ps256 ((__v8sf)(__m256)(X), (int)(N)))
#define _mm256_extractf128_si256(X,N) ((__m128i) __builtin_ia32_vextractf128_si256 ((__v8si)(__m256i)(X), (int)(N)))
#define _mm256_extract_epi32(X,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 2); _mm_extract_epi32 (__Y, (N) % 4); }))
#define _mm256_extract_epi16(X,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 3); _mm_extract_epi16 (__Y, (N) % 8); }))
#define _mm256_extract_epi8(X,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 4); _mm_extract_epi8 (__Y, (N) % 16); }))
#ifdef __x86_64__
#define _mm256_extract_epi64(X,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 1); _mm_extract_epi64 (__Y, (N) % 2); }))
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_permute_pd(X,C) ((__m128d) __builtin_ia32_vpermilpd ((__v2df)(__m128d)(X), (int)(C)))
#define _mm256_permute_pd(X,C) ((__m256d) __builtin_ia32_vpermilpd256 ((__v4df)(__m256d)(X), (int)(C)))
#define _mm_permute_ps(X,C) ((__m128) __builtin_ia32_vpermilps ((__v4sf)(__m128)(X), (int)(C)))
#define _mm256_permute_ps(X,C) ((__m256) __builtin_ia32_vpermilps256 ((__v8sf)(__m256)(X), (int)(C)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_permute2f128_pd(X,Y,C) ((__m256d) __builtin_ia32_vperm2f128_pd256 ((__v4df)(__m256d)(X), (__v4df)(__m256d)(Y), (int)(C)))
#define _mm256_permute2f128_ps(X,Y,C) ((__m256) __builtin_ia32_vperm2f128_ps256 ((__v8sf)(__m256)(X), (__v8sf)(__m256)(Y), (int)(C)))
#define _mm256_permute2f128_si256(X,Y,C) ((__m256i) __builtin_ia32_vperm2f128_si256 ((__v8si)(__m256i)(X), (__v8si)(__m256i)(Y), (int)(C)))
#endif
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define _mm256_insertf128_pd(X,Y,O) ((__m256d) __builtin_ia32_vinsertf128_pd256 ((__v4df)(__m256d)(X), (__v2df)(__m128d)(Y), (int)(O)))
#define _mm256_insertf128_ps(X,Y,O) ((__m256) __builtin_ia32_vinsertf128_ps256 ((__v8sf)(__m256)(X), (__v4sf)(__m128)(Y), (int)(O)))
#define _mm256_insertf128_si256(X,Y,O) ((__m256i) __builtin_ia32_vinsertf128_si256 ((__v8si)(__m256i)(X), (__v4si)(__m128i)(Y), (int)(O)))
#define _mm256_insert_epi32(X,D,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 2); __Y = _mm_insert_epi32 (__Y, (D), (N) % 4); _mm256_insertf128_si256 ((X), __Y, (N) >> 2); }))
#define _mm256_insert_epi16(X,D,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 3); __Y = _mm_insert_epi16 (__Y, (D), (N) % 8); _mm256_insertf128_si256 ((X), __Y, (N) >> 3); }))
#define _mm256_insert_epi8(X,D,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 4); __Y = _mm_insert_epi8 (__Y, (D), (N) % 16); _mm256_insertf128_si256 ((X), __Y, (N) >> 4); }))
#ifdef __x86_64__
#define _mm256_insert_epi64(X,D,N) (__extension__ ({ __m128i __Y = _mm256_extractf128_si256 ((X), (N) >> 1); __Y = _mm_insert_epi64 (__Y, (D), (N) % 2); _mm256_insertf128_si256 ((X), __Y, (N) >> 1); }))
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_round_pd(V,M) ((__m256d) __builtin_ia32_roundpd256 ((__v4df)(__m256d)(V), (int)(M)))
#define _mm256_round_ps(V,M) ((__m256) __builtin_ia32_roundps256 ((__v8sf)(__m256)(V), (int)(M)))
#endif
#define _mm256_ceil_pd(V) _mm256_round_pd ((V), _MM_FROUND_CEIL)
#define _mm256_floor_pd(V) _mm256_round_pd ((V), _MM_FROUND_FLOOR)
#define _mm256_ceil_ps(V) _mm256_round_ps ((V), _MM_FROUND_CEIL)
#define _mm256_floor_ps(V) _mm256_round_ps ((V), _MM_FROUND_FLOOR)
#ifdef __DISABLE_AVX__
#undef __DISABLE_AVX__
#pragma GCC pop_options
#endif
#endif
