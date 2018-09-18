// GGHASH:VqGs87h9RKH38CcBwgrHDVvLSrI2hBBaCZP81HOAOu3Q00006ef5
#ifndef _SMMINTRIN_H_INCLUDED
#define _SMMINTRIN_H_INCLUDED 
#include <tmmintrin.h>
#ifndef __SSE4_1__
#pragma GCC push_options
#pragma GCC target("sse4.1")
#define __DISABLE_SSE4_1__ 
#endif
#define _MM_FROUND_TO_NEAREST_INT 0x00
#define _MM_FROUND_TO_NEG_INF 0x01
#define _MM_FROUND_TO_POS_INF 0x02
#define _MM_FROUND_TO_ZERO 0x03
#define _MM_FROUND_CUR_DIRECTION 0x04
#define _MM_FROUND_RAISE_EXC 0x00
#define _MM_FROUND_NO_EXC 0x08
#define _MM_FROUND_NINT (_MM_FROUND_TO_NEAREST_INT | _MM_FROUND_RAISE_EXC)
#define _MM_FROUND_FLOOR (_MM_FROUND_TO_NEG_INF | _MM_FROUND_RAISE_EXC)
#define _MM_FROUND_CEIL (_MM_FROUND_TO_POS_INF | _MM_FROUND_RAISE_EXC)
#define _MM_FROUND_TRUNC (_MM_FROUND_TO_ZERO | _MM_FROUND_RAISE_EXC)
#define _MM_FROUND_RINT (_MM_FROUND_CUR_DIRECTION | _MM_FROUND_RAISE_EXC)
#define _MM_FROUND_NEARBYINT (_MM_FROUND_CUR_DIRECTION | _MM_FROUND_NO_EXC)
#define _mm_test_all_zeros(M,V) _mm_testz_si128 ((M), (V))
#define _mm_test_all_ones(V) _mm_testc_si128 ((V), _mm_cmpeq_epi32 ((V), (V)))
#define _mm_test_mix_ones_zeros(M,V) _mm_testnzc_si128 ((M), (V))
#ifdef __OPTIMIZE__
#else
#define _mm_round_pd(V,M) ((__m128d) __builtin_ia32_roundpd ((__v2df)(__m128d)(V), (int)(M)))
#define _mm_round_sd(D,V,M) ((__m128d) __builtin_ia32_roundsd ((__v2df)(__m128d)(D), (__v2df)(__m128d)(V), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_round_ps(V,M) ((__m128) __builtin_ia32_roundps ((__v4sf)(__m128)(V), (int)(M)))
#define _mm_round_ss(D,V,M) ((__m128) __builtin_ia32_roundss ((__v4sf)(__m128)(D), (__v4sf)(__m128)(V), (int)(M)))
#endif
#define _mm_ceil_pd(V) _mm_round_pd ((V), _MM_FROUND_CEIL)
#define _mm_ceil_sd(D,V) _mm_round_sd ((D), (V), _MM_FROUND_CEIL)
#define _mm_floor_pd(V) _mm_round_pd((V), _MM_FROUND_FLOOR)
#define _mm_floor_sd(D,V) _mm_round_sd ((D), (V), _MM_FROUND_FLOOR)
#define _mm_ceil_ps(V) _mm_round_ps ((V), _MM_FROUND_CEIL)
#define _mm_ceil_ss(D,V) _mm_round_ss ((D), (V), _MM_FROUND_CEIL)
#define _mm_floor_ps(V) _mm_round_ps ((V), _MM_FROUND_FLOOR)
#define _mm_floor_ss(D,V) _mm_round_ss ((D), (V), _MM_FROUND_FLOOR)
#ifdef __OPTIMIZE__
#else
#define _mm_blend_epi16(X,Y,M) ((__m128i) __builtin_ia32_pblendw128 ((__v8hi)(__m128i)(X), (__v8hi)(__m128i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_blend_ps(X,Y,M) ((__m128) __builtin_ia32_blendps ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_blend_pd(X,Y,M) ((__m128d) __builtin_ia32_blendpd ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_dp_ps(X,Y,M) ((__m128) __builtin_ia32_dpps ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(M)))
#define _mm_dp_pd(X,Y,M) ((__m128d) __builtin_ia32_dppd ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_insert_ps(D,S,N) ((__m128) __builtin_ia32_insertps128 ((__v4sf)(__m128)(D), (__v4sf)(__m128)(S), (int)(N)))
#endif
#define _MM_MK_INSERTPS_NDX(S,D,M) (((S) << 6) | ((D) << 4) | (M))
#ifdef __OPTIMIZE__
#else
#define _mm_extract_ps(X,N) (__extension__ ({ union { int i; float f; } __tmp; __tmp.f = __builtin_ia32_vec_ext_v4sf ((__v4sf)(__m128)(X), (int)(N)); __tmp.i; }))
#endif
#define _MM_EXTRACT_FLOAT(D,S,N) { (D) = __builtin_ia32_vec_ext_v4sf ((__v4sf)(S), (N)); }
#define _MM_PICK_OUT_PS(X,N) _mm_insert_ps (_mm_setzero_ps (), (X), _MM_MK_INSERTPS_NDX ((N), 0, 0x0e))
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define _mm_insert_epi8(D,S,N) ((__m128i) __builtin_ia32_vec_set_v16qi ((__v16qi)(__m128i)(D), (int)(S), (int)(N)))
#define _mm_insert_epi32(D,S,N) ((__m128i) __builtin_ia32_vec_set_v4si ((__v4si)(__m128i)(D), (int)(S), (int)(N)))
#ifdef __x86_64__
#define _mm_insert_epi64(D,S,N) ((__m128i) __builtin_ia32_vec_set_v2di ((__v2di)(__m128i)(D), (long long)(S), (int)(N)))
#endif
#endif
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define _mm_extract_epi8(X,N) ((int) (unsigned char) __builtin_ia32_vec_ext_v16qi ((__v16qi)(__m128i)(X), (int)(N)))
#define _mm_extract_epi32(X,N) ((int) __builtin_ia32_vec_ext_v4si ((__v4si)(__m128i)(X), (int)(N)))
#ifdef __x86_64__
#define _mm_extract_epi64(X,N) ((long long) __builtin_ia32_vec_ext_v2di ((__v2di)(__m128i)(X), (int)(N)))
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_mpsadbw_epu8(X,Y,M) ((__m128i) __builtin_ia32_mpsadbw128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#endif
#ifndef __SSE4_2__
#pragma GCC push_options
#pragma GCC target("sse4.2")
#define __DISABLE_SSE4_2__ 
#endif
#define _SIDD_UBYTE_OPS 0x00
#define _SIDD_UWORD_OPS 0x01
#define _SIDD_SBYTE_OPS 0x02
#define _SIDD_SWORD_OPS 0x03
#define _SIDD_CMP_EQUAL_ANY 0x00
#define _SIDD_CMP_RANGES 0x04
#define _SIDD_CMP_EQUAL_EACH 0x08
#define _SIDD_CMP_EQUAL_ORDERED 0x0c
#define _SIDD_POSITIVE_POLARITY 0x00
#define _SIDD_NEGATIVE_POLARITY 0x10
#define _SIDD_MASKED_POSITIVE_POLARITY 0x20
#define _SIDD_MASKED_NEGATIVE_POLARITY 0x30
#define _SIDD_LEAST_SIGNIFICANT 0x00
#define _SIDD_MOST_SIGNIFICANT 0x40
#define _SIDD_BIT_MASK 0x00
#define _SIDD_UNIT_MASK 0x40
#ifdef __OPTIMIZE__
#else
#define _mm_cmpistrm(X,Y,M) ((__m128i) __builtin_ia32_pcmpistrm128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpistri(X,Y,M) ((int) __builtin_ia32_pcmpistri128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpestrm(X,LX,Y,LY,M) ((__m128i) __builtin_ia32_pcmpestrm128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#define _mm_cmpestri(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestri128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_cmpistra(X,Y,M) ((int) __builtin_ia32_pcmpistria128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpistrc(X,Y,M) ((int) __builtin_ia32_pcmpistric128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpistro(X,Y,M) ((int) __builtin_ia32_pcmpistrio128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpistrs(X,Y,M) ((int) __builtin_ia32_pcmpistris128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpistrz(X,Y,M) ((int) __builtin_ia32_pcmpistriz128 ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(M)))
#define _mm_cmpestra(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestria128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#define _mm_cmpestrc(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestric128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#define _mm_cmpestro(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestrio128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#define _mm_cmpestrs(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestris128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#define _mm_cmpestrz(X,LX,Y,LY,M) ((int) __builtin_ia32_pcmpestriz128 ((__v16qi)(__m128i)(X), (int)(LX), (__v16qi)(__m128i)(Y), (int)(LY), (int)(M)))
#endif
#ifdef __DISABLE_SSE4_2__
#undef __DISABLE_SSE4_2__
#pragma GCC pop_options
#endif
#ifdef __DISABLE_SSE4_1__
#undef __DISABLE_SSE4_1__
#pragma GCC pop_options
#endif
#include <popcntintrin.h>
#ifndef __SSE4_1__
#pragma GCC push_options
#pragma GCC target("sse4.1")
#define __DISABLE_SSE4_1__ 
#endif
#ifndef __SSE4_2__
#pragma GCC push_options
#pragma GCC target("sse4.2")
#define __DISABLE_SSE4_2__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_SSE4_2__
#undef __DISABLE_SSE4_2__
#pragma GCC pop_options
#endif
#ifdef __DISABLE_SSE4_1__
#undef __DISABLE_SSE4_1__
#pragma GCC pop_options
#endif
#endif
