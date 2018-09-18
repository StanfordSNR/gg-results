// GGHASH:V1OHmdm66bU3XlOn5z4eohFE9akEGQ8cjo6K0RQVQwLM0001308b
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512dqintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512DQINTRIN_H_INCLUDED
#define _AVX512DQINTRIN_H_INCLUDED 
#ifndef __AVX512DQ__
#pragma GCC push_options
#pragma GCC target("avx512dq")
#define __DISABLE_AVX512DQ__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _kshiftli_mask8(X,Y) ((__mmask8) __builtin_ia32_kshiftliqi ((__mmask8)(X), (__mmask8)(Y)))
#define _kshiftri_mask8(X,Y) ((__mmask8) __builtin_ia32_kshiftriqi ((__mmask8)(X), (__mmask8)(Y)))
#define _mm_range_sd(A,B,C) ((__m128d) __builtin_ia32_rangesd128_round ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), _MM_FROUND_CUR_DIRECTION))
#define _mm_range_ss(A,B,C) ((__m128) __builtin_ia32_rangess128_round ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), _MM_FROUND_CUR_DIRECTION))
#define _mm_range_round_sd(A,B,C,R) ((__m128d) __builtin_ia32_rangesd128_round ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), (R)))
#define _mm_range_round_ss(A,B,C,R) ((__m128) __builtin_ia32_rangess128_round ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), (R)))
#define _mm512_cvtt_roundpd_epi64(A,B) ((__m512i)__builtin_ia32_cvttpd2qq512_mask ((A), (__v8di) _mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvtt_roundpd_epi64(W,U,A,B) ((__m512i)__builtin_ia32_cvttpd2qq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvtt_roundpd_epi64(U,A,B) ((__m512i)__builtin_ia32_cvttpd2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvtt_roundpd_epu64(A,B) ((__m512i)__builtin_ia32_cvttpd2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvtt_roundpd_epu64(W,U,A,B) ((__m512i)__builtin_ia32_cvttpd2uqq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvtt_roundpd_epu64(U,A,B) ((__m512i)__builtin_ia32_cvttpd2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvtt_roundps_epi64(A,B) ((__m512i)__builtin_ia32_cvttps2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvtt_roundps_epi64(W,U,A,B) ((__m512i)__builtin_ia32_cvttps2qq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvtt_roundps_epi64(U,A,B) ((__m512i)__builtin_ia32_cvttps2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvtt_roundps_epu64(A,B) ((__m512i)__builtin_ia32_cvttps2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvtt_roundps_epu64(W,U,A,B) ((__m512i)__builtin_ia32_cvttps2uqq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvtt_roundps_epu64(U,A,B) ((__m512i)__builtin_ia32_cvttps2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvt_roundpd_epi64(A,B) ((__m512i)__builtin_ia32_cvtpd2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvt_roundpd_epi64(W,U,A,B) ((__m512i)__builtin_ia32_cvtpd2qq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvt_roundpd_epi64(U,A,B) ((__m512i)__builtin_ia32_cvtpd2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvt_roundpd_epu64(A,B) ((__m512i)__builtin_ia32_cvtpd2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvt_roundpd_epu64(W,U,A,B) ((__m512i)__builtin_ia32_cvtpd2uqq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvt_roundpd_epu64(U,A,B) ((__m512i)__builtin_ia32_cvtpd2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvt_roundps_epi64(A,B) ((__m512i)__builtin_ia32_cvtps2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvt_roundps_epi64(W,U,A,B) ((__m512i)__builtin_ia32_cvtps2qq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvt_roundps_epi64(U,A,B) ((__m512i)__builtin_ia32_cvtps2qq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvt_roundps_epu64(A,B) ((__m512i)__builtin_ia32_cvtps2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), -1, (B)))
#define _mm512_mask_cvt_roundps_epu64(W,U,A,B) ((__m512i)__builtin_ia32_cvtps2uqq512_mask ((A), (__v8di)(W), (U), (B)))
#define _mm512_maskz_cvt_roundps_epu64(U,A,B) ((__m512i)__builtin_ia32_cvtps2uqq512_mask ((A), (__v8di)_mm512_setzero_si512 (), (U), (B)))
#define _mm512_cvt_roundepi64_ps(A,B) ((__m256)__builtin_ia32_cvtqq2ps512_mask ((__v8di)(A), (__v8sf)_mm256_setzero_ps (), -1, (B)))
#define _mm512_mask_cvt_roundepi64_ps(W,U,A,B) ((__m256)__builtin_ia32_cvtqq2ps512_mask ((__v8di)(A), (W), (U), (B)))
#define _mm512_maskz_cvt_roundepi64_ps(U,A,B) ((__m256)__builtin_ia32_cvtqq2ps512_mask ((__v8di)(A), (__v8sf)_mm256_setzero_ps (), (U), (B)))
#define _mm512_cvt_roundepu64_ps(A,B) ((__m256)__builtin_ia32_cvtuqq2ps512_mask ((__v8di)(A), (__v8sf)_mm256_setzero_ps (), -1, (B)))
#define _mm512_mask_cvt_roundepu64_ps(W,U,A,B) ((__m256)__builtin_ia32_cvtuqq2ps512_mask ((__v8di)(A), (W), (U), (B)))
#define _mm512_maskz_cvt_roundepu64_ps(U,A,B) ((__m256)__builtin_ia32_cvtuqq2ps512_mask ((__v8di)(A), (__v8sf)_mm256_setzero_ps (), (U), (B)))
#define _mm512_cvt_roundepi64_pd(A,B) ((__m512d)__builtin_ia32_cvtqq2pd512_mask ((__v8di)(A), (__v8df)_mm512_setzero_pd (), -1, (B)))
#define _mm512_mask_cvt_roundepi64_pd(W,U,A,B) ((__m512d)__builtin_ia32_cvtqq2pd512_mask ((__v8di)(A), (W), (U), (B)))
#define _mm512_maskz_cvt_roundepi64_pd(U,A,B) ((__m512d)__builtin_ia32_cvtqq2pd512_mask ((__v8di)(A), (__v8df)_mm512_setzero_pd (), (U), (B)))
#define _mm512_cvt_roundepu64_pd(A,B) ((__m512d)__builtin_ia32_cvtuqq2pd512_mask ((__v8di)(A), (__v8df)_mm512_setzero_pd (), -1, (B)))
#define _mm512_mask_cvt_roundepu64_pd(W,U,A,B) ((__m512d)__builtin_ia32_cvtuqq2pd512_mask ((__v8di)(A), (W), (U), (B)))
#define _mm512_maskz_cvt_roundepu64_pd(U,A,B) ((__m512d)__builtin_ia32_cvtuqq2pd512_mask ((__v8di)(A), (__v8df)_mm512_setzero_pd (), (U), (B)))
#define _mm512_reduce_pd(A,B) ((__m512d) __builtin_ia32_reducepd512_mask ((__v8df)(__m512d)(A), (int)(B), (__v8df)_mm512_setzero_pd (), (__mmask8)-1))
#define _mm512_mask_reduce_pd(W,U,A,B) ((__m512d) __builtin_ia32_reducepd512_mask ((__v8df)(__m512d)(A), (int)(B), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_reduce_pd(U,A,B) ((__m512d) __builtin_ia32_reducepd512_mask ((__v8df)(__m512d)(A), (int)(B), (__v8df)_mm512_setzero_pd (), (__mmask8)(U)))
#define _mm512_reduce_ps(A,B) ((__m512) __builtin_ia32_reduceps512_mask ((__v16sf)(__m512)(A), (int)(B), (__v16sf)_mm512_setzero_ps (), (__mmask16)-1))
#define _mm512_mask_reduce_ps(W,U,A,B) ((__m512) __builtin_ia32_reduceps512_mask ((__v16sf)(__m512)(A), (int)(B), (__v16sf)(__m512)(W), (__mmask16)(U)))
#define _mm512_maskz_reduce_ps(U,A,B) ((__m512) __builtin_ia32_reduceps512_mask ((__v16sf)(__m512)(A), (int)(B), (__v16sf)_mm512_setzero_ps (), (__mmask16)(U)))
#define _mm512_extractf32x8_ps(X,C) ((__m256) __builtin_ia32_extractf32x8_mask ((__v16sf)(__m512) (X), (int) (C), (__v8sf)(__m256) _mm256_setzero_ps (), (__mmask8)-1))
#define _mm512_mask_extractf32x8_ps(W,U,X,C) ((__m256) __builtin_ia32_extractf32x8_mask ((__v16sf)(__m512) (X), (int) (C), (__v8sf)(__m256) (W), (__mmask8) (U)))
#define _mm512_maskz_extractf32x8_ps(U,X,C) ((__m256) __builtin_ia32_extractf32x8_mask ((__v16sf)(__m512) (X), (int) (C), (__v8sf)(__m256) _mm256_setzero_ps (), (__mmask8) (U)))
#define _mm512_extractf64x2_pd(X,C) ((__m128d) __builtin_ia32_extractf64x2_512_mask ((__v8df)(__m512d) (X), (int) (C), (__v2df)(__m128d) _mm_setzero_pd (), (__mmask8)-1))
#define _mm512_mask_extractf64x2_pd(W,U,X,C) ((__m128d) __builtin_ia32_extractf64x2_512_mask ((__v8df)(__m512d) (X), (int) (C), (__v2df)(__m128d) (W), (__mmask8) (U)))
#define _mm512_maskz_extractf64x2_pd(U,X,C) ((__m128d) __builtin_ia32_extractf64x2_512_mask ((__v8df)(__m512d) (X), (int) (C), (__v2df)(__m128d) _mm_setzero_pd (), (__mmask8) (U)))
#define _mm512_extracti32x8_epi32(X,C) ((__m256i) __builtin_ia32_extracti32x8_mask ((__v16si)(__m512i) (X), (int) (C), (__v8si)(__m256i) _mm256_setzero_si256 (), (__mmask8)-1))
#define _mm512_mask_extracti32x8_epi32(W,U,X,C) ((__m256i) __builtin_ia32_extracti32x8_mask ((__v16si)(__m512i) (X), (int) (C), (__v8si)(__m256i) (W), (__mmask8) (U)))
#define _mm512_maskz_extracti32x8_epi32(U,X,C) ((__m256i) __builtin_ia32_extracti32x8_mask ((__v16si)(__m512i) (X), (int) (C), (__v8si)(__m256i) _mm256_setzero_si256 (), (__mmask8) (U)))
#define _mm512_extracti64x2_epi64(X,C) ((__m128i) __builtin_ia32_extracti64x2_512_mask ((__v8di)(__m512i) (X), (int) (C), (__v2di)(__m128i) _mm_setzero_si128 (), (__mmask8)-1))
#define _mm512_mask_extracti64x2_epi64(W,U,X,C) ((__m128i) __builtin_ia32_extracti64x2_512_mask ((__v8di)(__m512i) (X), (int) (C), (__v2di)(__m128i) (W), (__mmask8) (U)))
#define _mm512_maskz_extracti64x2_epi64(U,X,C) ((__m128i) __builtin_ia32_extracti64x2_512_mask ((__v8di)(__m512i) (X), (int) (C), (__v2di)(__m128i) _mm_setzero_si128 (), (__mmask8) (U)))
#define _mm512_range_pd(A,B,C) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd (), (__mmask8)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_range_pd(W,U,A,B,C) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)(__m512d)(W), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_range_pd(U,A,B,C) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd (), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_range_ps(A,B,C) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps (), (__mmask16)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_range_ps(W,U,A,B,C) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)(__m512)(W), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_range_ps(U,A,B,C) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps (), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_range_round_pd(A,B,C,R) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd (), (__mmask8)-1, (R)))
#define _mm512_mask_range_round_pd(W,U,A,B,C,R) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)(__m512d)(W), (__mmask8)(U), (R)))
#define _mm512_maskz_range_round_pd(U,A,B,C,R) ((__m512d) __builtin_ia32_rangepd512_mask ((__v8df)(__m512d)(A), (__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd (), (__mmask8)(U), (R)))
#define _mm512_range_round_ps(A,B,C,R) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps (), (__mmask16)-1, (R)))
#define _mm512_mask_range_round_ps(W,U,A,B,C,R) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)(__m512)(W), (__mmask16)(U), (R)))
#define _mm512_maskz_range_round_ps(U,A,B,C,R) ((__m512) __builtin_ia32_rangeps512_mask ((__v16sf)(__m512)(A), (__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps (), (__mmask16)(U), (R)))
#define _mm512_insertf64x2(X,Y,C) ((__m512d) __builtin_ia32_insertf64x2_512_mask ((__v8df)(__m512d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v8df)(__m512d) (X), (__mmask8)-1))
#define _mm512_mask_insertf64x2(W,U,X,Y,C) ((__m512d) __builtin_ia32_insertf64x2_512_mask ((__v8df)(__m512d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v8df)(__m512d) (W), (__mmask8) (U)))
#define _mm512_maskz_insertf64x2(U,X,Y,C) ((__m512d) __builtin_ia32_insertf64x2_512_mask ((__v8df)(__m512d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v8df)(__m512d) _mm512_setzero_pd (), (__mmask8) (U)))
#define _mm512_inserti64x2(X,Y,C) ((__m512i) __builtin_ia32_inserti64x2_512_mask ((__v8di)(__m512i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v8di)(__m512i) (X), (__mmask8)-1))
#define _mm512_mask_inserti64x2(W,U,X,Y,C) ((__m512i) __builtin_ia32_inserti64x2_512_mask ((__v8di)(__m512i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v8di)(__m512i) (W), (__mmask8) (U)))
#define _mm512_maskz_inserti64x2(U,X,Y,C) ((__m512i) __builtin_ia32_inserti64x2_512_mask ((__v8di)(__m512i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v8di)(__m512i) _mm512_setzero_si512 (), (__mmask8) (U)))
#define _mm512_insertf32x8(X,Y,C) ((__m512) __builtin_ia32_insertf32x8_mask ((__v16sf)(__m512) (X), (__v8sf)(__m256) (Y), (int) (C), (__v16sf)(__m512)_mm512_setzero_ps (), (__mmask16)-1))
#define _mm512_mask_insertf32x8(W,U,X,Y,C) ((__m512) __builtin_ia32_insertf32x8_mask ((__v16sf)(__m512) (X), (__v8sf)(__m256) (Y), (int) (C), (__v16sf)(__m512)(W), (__mmask16)(U)))
#define _mm512_maskz_insertf32x8(U,X,Y,C) ((__m512) __builtin_ia32_insertf32x8_mask ((__v16sf)(__m512) (X), (__v8sf)(__m256) (Y), (int) (C), (__v16sf)(__m512)_mm512_setzero_ps (), (__mmask16)(U)))
#define _mm512_inserti32x8(X,Y,C) ((__m512i) __builtin_ia32_inserti32x8_mask ((__v16si)(__m512i) (X), (__v8si)(__m256i) (Y), (int) (C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)-1))
#define _mm512_mask_inserti32x8(W,U,X,Y,C) ((__m512i) __builtin_ia32_inserti32x8_mask ((__v16si)(__m512i) (X), (__v8si)(__m256i) (Y), (int) (C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_inserti32x8(U,X,Y,C) ((__m512i) __builtin_ia32_inserti32x8_mask ((__v16si)(__m512i) (X), (__v8si)(__m256i) (Y), (int) (C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm_fpclass_ss_mask(X,C) ((__mmask8) __builtin_ia32_fpclassss ((__v4sf) (__m128) (X), (int) (C)))
#define _mm_fpclass_sd_mask(X,C) ((__mmask8) __builtin_ia32_fpclasssd ((__v2df) (__m128d) (X), (int) (C)))
#define _mm512_mask_fpclass_pd_mask(u,X,C) ((__mmask8) __builtin_ia32_fpclasspd512_mask ((__v8df) (__m512d) (X), (int) (C), (__mmask8)(u)))
#define _mm512_mask_fpclass_ps_mask(u,x,c) ((__mmask16) __builtin_ia32_fpclassps512_mask ((__v16sf) (__m512) (x), (int) (c),(__mmask8)(u)))
#define _mm512_fpclass_pd_mask(X,C) ((__mmask8) __builtin_ia32_fpclasspd512_mask ((__v8df) (__m512d) (X), (int) (C), (__mmask8)-1))
#define _mm512_fpclass_ps_mask(x,c) ((__mmask16) __builtin_ia32_fpclassps512_mask ((__v16sf) (__m512) (x), (int) (c),(__mmask8)-1))
#define _mm_reduce_sd(A,B,C) ((__m128d) __builtin_ia32_reducesd ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C)))
#define _mm_reduce_ss(A,B,C) ((__m128) __builtin_ia32_reducess ((__v4sf)(__m128)(A), (__v4sf)(__m128)(A), (int)(C)))
#endif
#ifdef __DISABLE_AVX512DQ__
#undef __DISABLE_AVX512DQ__
#pragma GCC pop_options
#endif
#endif
