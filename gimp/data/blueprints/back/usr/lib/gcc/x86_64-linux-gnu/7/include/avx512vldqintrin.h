// GGHASH:VfM9Uf8pleCgi.DLpDwE3tcPvqyA50yvQLcT4e_Eoqk00000ef85
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512vldqintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512VLDQINTRIN_H_INCLUDED
#define _AVX512VLDQINTRIN_H_INCLUDED 
#if !defined(__AVX512VL__) || !defined(__AVX512DQ__)
#pragma GCC push_options
#pragma GCC target("avx512vl,avx512dq")
#define __DISABLE_AVX512VLDQ__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_insertf64x2(X,Y,C) ((__m256d) __builtin_ia32_insertf64x2_256_mask ((__v4df)(__m256d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v4df)(__m256d)_mm256_setzero_pd(), (__mmask8)-1))
#define _mm256_mask_insertf64x2(W,U,X,Y,C) ((__m256d) __builtin_ia32_insertf64x2_256_mask ((__v4df)(__m256d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v4df)(__m256d)(W), (__mmask8)(U)))
#define _mm256_maskz_insertf64x2(U,X,Y,C) ((__m256d) __builtin_ia32_insertf64x2_256_mask ((__v4df)(__m256d) (X), (__v2df)(__m128d) (Y), (int) (C), (__v4df)(__m256d)_mm256_setzero_pd(), (__mmask8)(U)))
#define _mm256_inserti64x2(X,Y,C) ((__m256i) __builtin_ia32_inserti64x2_256_mask ((__v4di)(__m256i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v4di)(__m256i)_mm256_setzero_si256 (), (__mmask8)-1))
#define _mm256_mask_inserti64x2(W,U,X,Y,C) ((__m256i) __builtin_ia32_inserti64x2_256_mask ((__v4di)(__m256i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v4di)(__m256i)(W), (__mmask8)(U)))
#define _mm256_maskz_inserti64x2(U,X,Y,C) ((__m256i) __builtin_ia32_inserti64x2_256_mask ((__v4di)(__m256i) (X), (__v2di)(__m128i) (Y), (int) (C), (__v4di)(__m256i)_mm256_setzero_si256 (), (__mmask8)(U)))
#define _mm256_extractf64x2_pd(X,C) ((__m128d) __builtin_ia32_extractf64x2_256_mask ((__v4df)(__m256d) (X), (int) (C), (__v2df)(__m128d) _mm_setzero_pd(), (__mmask8)-1))
#define _mm256_mask_extractf64x2_pd(W,U,X,C) ((__m128d) __builtin_ia32_extractf64x2_256_mask ((__v4df)(__m256d) (X), (int) (C), (__v2df)(__m128d) (W), (__mmask8) (U)))
#define _mm256_maskz_extractf64x2_pd(U,X,C) ((__m128d) __builtin_ia32_extractf64x2_256_mask ((__v4df)(__m256d) (X), (int) (C), (__v2df)(__m128d) _mm_setzero_pd(), (__mmask8) (U)))
#define _mm256_extracti64x2_epi64(X,C) ((__m128i) __builtin_ia32_extracti64x2_256_mask ((__v4di)(__m256i) (X), (int) (C), (__v2di)(__m128i) _mm_setzero_si128 (), (__mmask8)-1))
#define _mm256_mask_extracti64x2_epi64(W,U,X,C) ((__m128i) __builtin_ia32_extracti64x2_256_mask ((__v4di)(__m256i) (X), (int) (C), (__v2di)(__m128i) (W), (__mmask8) (U)))
#define _mm256_maskz_extracti64x2_epi64(U,X,C) ((__m128i) __builtin_ia32_extracti64x2_256_mask ((__v4di)(__m256i) (X), (int) (C), (__v2di)(__m128i) _mm_setzero_si128 (), (__mmask8) (U)))
#define _mm256_reduce_pd(A,B) ((__m256d) __builtin_ia32_reducepd256_mask ((__v4df)(__m256d)(A), (int)(B), (__v4df)_mm256_setzero_pd(), (__mmask8)-1))
#define _mm256_mask_reduce_pd(W,U,A,B) ((__m256d) __builtin_ia32_reducepd256_mask ((__v4df)(__m256d)(A), (int)(B), (__v4df)(__m256d)(W), (__mmask8)(U)))
#define _mm256_maskz_reduce_pd(U,A,B) ((__m256d) __builtin_ia32_reducepd256_mask ((__v4df)(__m256d)(A), (int)(B), (__v4df)_mm256_setzero_pd(), (__mmask8)(U)))
#define _mm_reduce_pd(A,B) ((__m128d) __builtin_ia32_reducepd128_mask ((__v2df)(__m128d)(A), (int)(B), (__v2df)_mm_setzero_pd(), (__mmask8)-1))
#define _mm_mask_reduce_pd(W,U,A,B) ((__m128d) __builtin_ia32_reducepd128_mask ((__v2df)(__m128d)(A), (int)(B), (__v2df)(__m128d)(W), (__mmask8)(U)))
#define _mm_maskz_reduce_pd(U,A,B) ((__m128d) __builtin_ia32_reducepd128_mask ((__v2df)(__m128d)(A), (int)(B), (__v2df)_mm_setzero_pd(), (__mmask8)(U)))
#define _mm256_reduce_ps(A,B) ((__m256) __builtin_ia32_reduceps256_mask ((__v8sf)(__m256)(A), (int)(B), (__v8sf)_mm256_setzero_ps(), (__mmask8)-1))
#define _mm256_mask_reduce_ps(W,U,A,B) ((__m256) __builtin_ia32_reduceps256_mask ((__v8sf)(__m256)(A), (int)(B), (__v8sf)(__m256)(W), (__mmask8)(U)))
#define _mm256_maskz_reduce_ps(U,A,B) ((__m256) __builtin_ia32_reduceps256_mask ((__v8sf)(__m256)(A), (int)(B), (__v8sf)_mm256_setzero_ps(), (__mmask8)(U)))
#define _mm_reduce_ps(A,B) ((__m128) __builtin_ia32_reduceps128_mask ((__v4sf)(__m128)(A), (int)(B), (__v4sf)_mm_setzero_ps(), (__mmask8)-1))
#define _mm_mask_reduce_ps(W,U,A,B) ((__m128) __builtin_ia32_reduceps128_mask ((__v4sf)(__m128)(A), (int)(B), (__v4sf)(__m128)(W), (__mmask8)(U)))
#define _mm_maskz_reduce_ps(U,A,B) ((__m128) __builtin_ia32_reduceps128_mask ((__v4sf)(__m128)(A), (int)(B), (__v4sf)_mm_setzero_ps(), (__mmask8)(U)))
#define _mm256_range_pd(A,B,C) ((__m256d) __builtin_ia32_rangepd256_mask ((__v4df)(__m256d)(A), (__v4df)(__m256d)(B), (int)(C), (__v4df)_mm256_setzero_pd(), (__mmask8)-1))
#define _mm256_maskz_range_pd(U,A,B,C) ((__m256d) __builtin_ia32_rangepd256_mask ((__v4df)(__m256d)(A), (__v4df)(__m256d)(B), (int)(C), (__v4df)_mm256_setzero_pd(), (__mmask8)(U)))
#define _mm_range_pd(A,B,C) ((__m128d) __builtin_ia32_rangepd128_mask ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), (__v2df)_mm_setzero_pd(), (__mmask8)-1))
#define _mm256_range_ps(A,B,C) ((__m256) __builtin_ia32_rangeps256_mask ((__v8sf)(__m256)(A), (__v8sf)(__m256)(B), (int)(C), (__v8sf)_mm256_setzero_ps(), (__mmask8)-1))
#define _mm256_mask_range_ps(W,U,A,B,C) ((__m256) __builtin_ia32_rangeps256_mask ((__v8sf)(__m256)(A), (__v8sf)(__m256)(B), (int)(C), (__v8sf)(__m256)(W), (__mmask8)(U)))
#define _mm256_maskz_range_ps(U,A,B,C) ((__m256) __builtin_ia32_rangeps256_mask ((__v8sf)(__m256)(A), (__v8sf)(__m256)(B), (int)(C), (__v8sf)_mm256_setzero_ps(), (__mmask8)(U)))
#define _mm_range_ps(A,B,C) ((__m128) __builtin_ia32_rangeps128_mask ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), (__v4sf)_mm_setzero_ps(), (__mmask8)-1))
#define _mm_mask_range_ps(W,U,A,B,C) ((__m128) __builtin_ia32_rangeps128_mask ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), (__v4sf)(__m128)(W), (__mmask8)(U)))
#define _mm_maskz_range_ps(U,A,B,C) ((__m128) __builtin_ia32_rangeps128_mask ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), (__v4sf)_mm_setzero_ps(), (__mmask8)(U)))
#define _mm256_mask_range_pd(W,U,A,B,C) ((__m256d) __builtin_ia32_rangepd256_mask ((__v4df)(__m256d)(A), (__v4df)(__m256d)(B), (int)(C), (__v4df)(__m256d)(W), (__mmask8)(U)))
#define _mm_mask_range_pd(W,U,A,B,C) ((__m128d) __builtin_ia32_rangepd128_mask ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), (__v2df)(__m128d)(W), (__mmask8)(U)))
#define _mm_maskz_range_pd(U,A,B,C) ((__m128d) __builtin_ia32_rangepd128_mask ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), (__v2df)_mm_setzero_pd(), (__mmask8)(U)))
#define _mm256_mask_fpclass_pd_mask(u,X,C) ((__mmask8) __builtin_ia32_fpclasspd256_mask ((__v4df) (__m256d) (X), (int) (C),(__mmask8)(u)))
#define _mm256_mask_fpclass_ps_mask(u,X,C) ((__mmask8) __builtin_ia32_fpclassps256_mask ((__v8sf) (__m256) (X), (int) (C),(__mmask8)(u)))
#define _mm_mask_fpclass_pd_mask(u,X,C) ((__mmask8) __builtin_ia32_fpclasspd128_mask ((__v2df) (__m128d) (X), (int) (C),(__mmask8)(u)))
#define _mm_mask_fpclass_ps_mask(u,X,C) ((__mmask8) __builtin_ia32_fpclassps128_mask ((__v4sf) (__m128) (X), (int) (C),(__mmask8)(u)))
#define _mm256_fpclass_pd_mask(X,C) ((__mmask8) __builtin_ia32_fpclasspd256_mask ((__v4df) (__m256d) (X), (int) (C),(__mmask8)-1))
#define _mm256_fpclass_ps_mask(X,C) ((__mmask8) __builtin_ia32_fpclassps256_mask ((__v8sf) (__m256) (X), (int) (C),(__mmask8)-1))
#define _mm_fpclass_pd_mask(X,C) ((__mmask8) __builtin_ia32_fpclasspd128_mask ((__v2df) (__m128d) (X), (int) (C),(__mmask8)-1))
#define _mm_fpclass_ps_mask(X,C) ((__mmask8) __builtin_ia32_fpclassps128_mask ((__v4sf) (__m128) (X), (int) (C),(__mmask8)-1))
#endif
#ifdef __DISABLE_AVX512VLDQ__
#undef __DISABLE_AVX512VLDQ__
#pragma GCC pop_options
#endif
#endif
