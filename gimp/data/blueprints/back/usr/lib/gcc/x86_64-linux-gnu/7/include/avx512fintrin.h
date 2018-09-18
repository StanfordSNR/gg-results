// GGHASH:V2pEhyh085KzYChooR.3B2YxmvkFfdt74oaClpP0wn_g0006b29b
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512fintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512FINTRIN_H_INCLUDED
#define _AVX512FINTRIN_H_INCLUDED 
#ifndef __AVX512F__
#pragma GCC push_options
#pragma GCC target("avx512f")
#define __DISABLE_AVX512F__ 
#endif
#define _mm512_setr_epi64(e0,e1,e2,e3,e4,e5,e6,e7) _mm512_set_epi64(e7,e6,e5,e4,e3,e2,e1,e0)
#define _mm512_setr_epi32(e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15) _mm512_set_epi32(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0)
#define _mm512_setr_pd(e0,e1,e2,e3,e4,e5,e6,e7) _mm512_set_pd(e7,e6,e5,e4,e3,e2,e1,e0)
#define _mm512_setr_ps(e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15) _mm512_set_ps(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0)
#define _mm512_undefined _mm512_undefined_ps
#define _mm512_undefined_si512 _mm512_undefined_epi32
#define _mm512_setr4_epi64(e0,e1,e2,e3) _mm512_set4_epi64(e3,e2,e1,e0)
#define _mm512_setr4_epi32(e0,e1,e2,e3) _mm512_set4_epi32(e3,e2,e1,e0)
#define _mm512_setr4_pd(e0,e1,e2,e3) _mm512_set4_pd(e3,e2,e1,e0)
#define _mm512_setr4_ps(e0,e1,e2,e3) _mm512_set4_ps(e3,e2,e1,e0)
#ifdef __OPTIMIZE__
#else
#define _mm512_slli_epi64(X,C) ((__m512i) __builtin_ia32_psllqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_slli_epi64(W,U,X,C) ((__m512i) __builtin_ia32_psllqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_slli_epi64(U,X,C) ((__m512i) __builtin_ia32_psllqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_srli_epi64(X,C) ((__m512i) __builtin_ia32_psrlqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_srli_epi64(W,U,X,C) ((__m512i) __builtin_ia32_psrlqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_srli_epi64(U,X,C) ((__m512i) __builtin_ia32_psrlqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_srai_epi64(X,C) ((__m512i) __builtin_ia32_psraqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_srai_epi64(W,U,X,C) ((__m512i) __builtin_ia32_psraqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_srai_epi64(U,X,C) ((__m512i) __builtin_ia32_psraqi512_mask ((__v8di)(__m512i)(X), (int)(C), (__v8di)(__m512i)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_slli_epi32(X,C) ((__m512i) __builtin_ia32_pslldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_slli_epi32(W,U,X,C) ((__m512i) __builtin_ia32_pslldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_slli_epi32(U,X,C) ((__m512i) __builtin_ia32_pslldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_srli_epi32(X,C) ((__m512i) __builtin_ia32_psrldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_srli_epi32(W,U,X,C) ((__m512i) __builtin_ia32_psrldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_srli_epi32(U,X,C) ((__m512i) __builtin_ia32_psrldi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_srai_epi32(X,C) ((__m512i) __builtin_ia32_psradi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_srai_epi32(W,U,X,C) ((__m512i) __builtin_ia32_psradi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_srai_epi32(U,X,C) ((__m512i) __builtin_ia32_psradi512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_add_round_sd(A,B,C) (__m128d)__builtin_ia32_addsd_round(A, B, C)
#define _mm_add_round_ss(A,B,C) (__m128)__builtin_ia32_addss_round(A, B, C)
#define _mm_sub_round_sd(A,B,C) (__m128d)__builtin_ia32_subsd_round(A, B, C)
#define _mm_sub_round_ss(A,B,C) (__m128)__builtin_ia32_subss_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_ternarylogic_epi64(A,B,C,I) ((__m512i) __builtin_ia32_pternlogq512_mask ((__v8di)(__m512i)(A), (__v8di)(__m512i)(B), (__v8di)(__m512i)(C), (int)(I), (__mmask8)-1))
#define _mm512_mask_ternarylogic_epi64(A,U,B,C,I) ((__m512i) __builtin_ia32_pternlogq512_mask ((__v8di)(__m512i)(A), (__v8di)(__m512i)(B), (__v8di)(__m512i)(C), (int)(I), (__mmask8)(U)))
#define _mm512_maskz_ternarylogic_epi64(U,A,B,C,I) ((__m512i) __builtin_ia32_pternlogq512_maskz ((__v8di)(__m512i)(A), (__v8di)(__m512i)(B), (__v8di)(__m512i)(C), (int)(I), (__mmask8)(U)))
#define _mm512_ternarylogic_epi32(A,B,C,I) ((__m512i) __builtin_ia32_pternlogd512_mask ((__v16si)(__m512i)(A), (__v16si)(__m512i)(B), (__v16si)(__m512i)(C), (int)(I), (__mmask16)-1))
#define _mm512_mask_ternarylogic_epi32(A,U,B,C,I) ((__m512i) __builtin_ia32_pternlogd512_mask ((__v16si)(__m512i)(A), (__v16si)(__m512i)(B), (__v16si)(__m512i)(C), (int)(I), (__mmask16)(U)))
#define _mm512_maskz_ternarylogic_epi32(U,A,B,C,I) ((__m512i) __builtin_ia32_pternlogd512_maskz ((__v16si)(__m512i)(A), (__v16si)(__m512i)(B), (__v16si)(__m512i)(C), (int)(I), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_sqrt_round_pd(A,C) (__m512d)__builtin_ia32_sqrtpd512_mask(A, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_sqrt_round_pd(W,U,A,C) (__m512d)__builtin_ia32_sqrtpd512_mask(A, W, U, C)
#define _mm512_maskz_sqrt_round_pd(U,A,C) (__m512d)__builtin_ia32_sqrtpd512_mask(A, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_sqrt_round_ps(A,C) (__m512)__builtin_ia32_sqrtps512_mask(A, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_sqrt_round_ps(W,U,A,C) (__m512)__builtin_ia32_sqrtps512_mask(A, W, U, C)
#define _mm512_maskz_sqrt_round_ps(U,A,C) (__m512)__builtin_ia32_sqrtps512_mask(A, (__v16sf)_mm512_setzero_ps(), U, C)
#define _mm_sqrt_round_sd(A,B,C) (__m128d)__builtin_ia32_sqrtsd_round(A, B, C)
#define _mm_sqrt_round_ss(A,B,C) (__m128)__builtin_ia32_sqrtss_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_add_round_pd(A,B,C) (__m512d)__builtin_ia32_addpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_add_round_pd(W,U,A,B,C) (__m512d)__builtin_ia32_addpd512_mask(A, B, W, U, C)
#define _mm512_maskz_add_round_pd(U,A,B,C) (__m512d)__builtin_ia32_addpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_add_round_ps(A,B,C) (__m512)__builtin_ia32_addps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_add_round_ps(W,U,A,B,C) (__m512)__builtin_ia32_addps512_mask(A, B, W, U, C)
#define _mm512_maskz_add_round_ps(U,A,B,C) (__m512)__builtin_ia32_addps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, C)
#define _mm512_sub_round_pd(A,B,C) (__m512d)__builtin_ia32_subpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_sub_round_pd(W,U,A,B,C) (__m512d)__builtin_ia32_subpd512_mask(A, B, W, U, C)
#define _mm512_maskz_sub_round_pd(U,A,B,C) (__m512d)__builtin_ia32_subpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_sub_round_ps(A,B,C) (__m512)__builtin_ia32_subps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_sub_round_ps(W,U,A,B,C) (__m512)__builtin_ia32_subps512_mask(A, B, W, U, C)
#define _mm512_maskz_sub_round_ps(U,A,B,C) (__m512)__builtin_ia32_subps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_mul_round_pd(A,B,C) (__m512d)__builtin_ia32_mulpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_mul_round_pd(W,U,A,B,C) (__m512d)__builtin_ia32_mulpd512_mask(A, B, W, U, C)
#define _mm512_maskz_mul_round_pd(U,A,B,C) (__m512d)__builtin_ia32_mulpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_mul_round_ps(A,B,C) (__m512)__builtin_ia32_mulps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_mul_round_ps(W,U,A,B,C) (__m512)__builtin_ia32_mulps512_mask(A, B, W, U, C)
#define _mm512_maskz_mul_round_ps(U,A,B,C) (__m512)__builtin_ia32_mulps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, C)
#define _mm512_div_round_pd(A,B,C) (__m512d)__builtin_ia32_divpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_div_round_pd(W,U,A,B,C) (__m512d)__builtin_ia32_divpd512_mask(A, B, W, U, C)
#define _mm512_maskz_div_round_pd(U,A,B,C) (__m512d)__builtin_ia32_divpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_div_round_ps(A,B,C) (__m512)__builtin_ia32_divps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_div_round_ps(W,U,A,B,C) (__m512)__builtin_ia32_divps512_mask(A, B, W, U, C)
#define _mm512_maskz_div_round_ps(U,A,B,C) (__m512)__builtin_ia32_divps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, C)
#define _mm_mul_round_sd(A,B,C) (__m128d)__builtin_ia32_mulsd_round(A, B, C)
#define _mm_mul_round_ss(A,B,C) (__m128)__builtin_ia32_mulss_round(A, B, C)
#define _mm_div_round_sd(A,B,C) (__m128d)__builtin_ia32_divsd_round(A, B, C)
#define _mm_div_round_ss(A,B,C) (__m128)__builtin_ia32_divss_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_max_round_pd(A,B,R) (__m512d)__builtin_ia32_maxpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, R)
#define _mm512_mask_max_round_pd(W,U,A,B,R) (__m512d)__builtin_ia32_maxpd512_mask(A, B, W, U, R)
#define _mm512_maskz_max_round_pd(U,A,B,R) (__m512d)__builtin_ia32_maxpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, R)
#define _mm512_max_round_ps(A,B,R) (__m512)__builtin_ia32_maxps512_mask(A, B, (__v16sf)_mm512_undefined_pd(), -1, R)
#define _mm512_mask_max_round_ps(W,U,A,B,R) (__m512)__builtin_ia32_maxps512_mask(A, B, W, U, R)
#define _mm512_maskz_max_round_ps(U,A,B,R) (__m512)__builtin_ia32_maxps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, R)
#define _mm512_min_round_pd(A,B,R) (__m512d)__builtin_ia32_minpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, R)
#define _mm512_mask_min_round_pd(W,U,A,B,R) (__m512d)__builtin_ia32_minpd512_mask(A, B, W, U, R)
#define _mm512_maskz_min_round_pd(U,A,B,R) (__m512d)__builtin_ia32_minpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, R)
#define _mm512_min_round_ps(A,B,R) (__m512)__builtin_ia32_minps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, R)
#define _mm512_mask_min_round_ps(W,U,A,B,R) (__m512)__builtin_ia32_minps512_mask(A, B, W, U, R)
#define _mm512_maskz_min_round_ps(U,A,B,R) (__m512)__builtin_ia32_minps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, R)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_scalef_round_pd(A,B,C) (__m512d)__builtin_ia32_scalefpd512_mask(A, B, (__v8df)_mm512_undefined_pd(), -1, C)
#define _mm512_mask_scalef_round_pd(W,U,A,B,C) (__m512d)__builtin_ia32_scalefpd512_mask(A, B, W, U, C)
#define _mm512_maskz_scalef_round_pd(U,A,B,C) (__m512d)__builtin_ia32_scalefpd512_mask(A, B, (__v8df)_mm512_setzero_pd(), U, C)
#define _mm512_scalef_round_ps(A,B,C) (__m512)__builtin_ia32_scalefps512_mask(A, B, (__v16sf)_mm512_undefined_ps(), -1, C)
#define _mm512_mask_scalef_round_ps(W,U,A,B,C) (__m512)__builtin_ia32_scalefps512_mask(A, B, W, U, C)
#define _mm512_maskz_scalef_round_ps(U,A,B,C) (__m512)__builtin_ia32_scalefps512_mask(A, B, (__v16sf)_mm512_setzero_ps(), U, C)
#define _mm_scalef_round_sd(A,B,C) (__m128d)__builtin_ia32_scalefsd_round(A, B, C)
#define _mm_scalef_round_ss(A,B,C) (__m128)__builtin_ia32_scalefss_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_fmadd_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(A, B, C, -1, R)
#define _mm512_mask_fmadd_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(A, B, C, U, R)
#define _mm512_mask3_fmadd_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfmaddpd512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmadd_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_maskz(A, B, C, U, R)
#define _mm512_fmadd_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(A, B, C, -1, R)
#define _mm512_mask_fmadd_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(A, B, C, U, R)
#define _mm512_mask3_fmadd_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfmaddps512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmadd_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_maskz(A, B, C, U, R)
#define _mm512_fmsub_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(A, B, -(C), -1, R)
#define _mm512_mask_fmsub_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(A, B, -(C), U, R)
#define _mm512_mask3_fmsub_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfmsubpd512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmsub_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_maskz(A, B, -(C), U, R)
#define _mm512_fmsub_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(A, B, -(C), -1, R)
#define _mm512_mask_fmsub_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(A, B, -(C), U, R)
#define _mm512_mask3_fmsub_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfmsubps512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmsub_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_maskz(A, B, -(C), U, R)
#define _mm512_fmaddsub_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddsubpd512_mask(A, B, C, -1, R)
#define _mm512_mask_fmaddsub_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(A, B, C, U, R)
#define _mm512_mask3_fmaddsub_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfmaddsubpd512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmaddsub_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddsubpd512_maskz(A, B, C, U, R)
#define _mm512_fmaddsub_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_mask(A, B, C, -1, R)
#define _mm512_mask_fmaddsub_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_mask(A, B, C, U, R)
#define _mm512_mask3_fmaddsub_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfmaddsubps512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmaddsub_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_maskz(A, B, C, U, R)
#define _mm512_fmsubadd_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddsubpd512_mask(A, B, -(C), -1, R)
#define _mm512_mask_fmsubadd_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfmaddsubpd512_mask(A, B, -(C), U, R)
#define _mm512_mask3_fmsubadd_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfmsubaddpd512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmsubadd_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddsubpd512_maskz(A, B, -(C), U, R)
#define _mm512_fmsubadd_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_mask(A, B, -(C), -1, R)
#define _mm512_mask_fmsubadd_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_mask(A, B, -(C), U, R)
#define _mm512_mask3_fmsubadd_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfmsubaddps512_mask3(A, B, C, U, R)
#define _mm512_maskz_fmsubadd_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddsubps512_maskz(A, B, -(C), U, R)
#define _mm512_fnmadd_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(-(A), B, C, -1, R)
#define _mm512_mask_fnmadd_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfnmaddpd512_mask(-(A), B, C, U, R)
#define _mm512_mask3_fnmadd_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfmaddpd512_mask3(-(A), B, C, U, R)
#define _mm512_maskz_fnmadd_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_maskz(-(A), B, C, U, R)
#define _mm512_fnmadd_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(-(A), B, C, -1, R)
#define _mm512_mask_fnmadd_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfnmaddps512_mask(-(A), B, C, U, R)
#define _mm512_mask3_fnmadd_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfmaddps512_mask3(-(A), B, C, U, R)
#define _mm512_maskz_fnmadd_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_maskz(-(A), B, C, U, R)
#define _mm512_fnmsub_round_pd(A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_mask(-(A), B, -(C), -1, R)
#define _mm512_mask_fnmsub_round_pd(A,U,B,C,R) (__m512d)__builtin_ia32_vfnmsubpd512_mask(A, B, C, U, R)
#define _mm512_mask3_fnmsub_round_pd(A,B,C,U,R) (__m512d)__builtin_ia32_vfnmsubpd512_mask3(A, B, C, U, R)
#define _mm512_maskz_fnmsub_round_pd(U,A,B,C,R) (__m512d)__builtin_ia32_vfmaddpd512_maskz(-(A), B, -(C), U, R)
#define _mm512_fnmsub_round_ps(A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_mask(-(A), B, -(C), -1, R)
#define _mm512_mask_fnmsub_round_ps(A,U,B,C,R) (__m512)__builtin_ia32_vfnmsubps512_mask(A, B, C, U, R)
#define _mm512_mask3_fnmsub_round_ps(A,B,C,U,R) (__m512)__builtin_ia32_vfnmsubps512_mask3(A, B, C, U, R)
#define _mm512_maskz_fnmsub_round_ps(U,A,B,C,R) (__m512)__builtin_ia32_vfmaddps512_maskz(-(A), B, -(C), U, R)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_shuffle_epi32(X,C) ((__m512i) __builtin_ia32_pshufd512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_shuffle_epi32(W,U,X,C) ((__m512i) __builtin_ia32_pshufd512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_shuffle_epi32(U,X,C) ((__m512i) __builtin_ia32_pshufd512_mask ((__v16si)(__m512i)(X), (int)(C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm512_shuffle_i64x2(X,Y,C) ((__m512i) __builtin_ia32_shuf_i64x2_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)(__m512i)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_shuffle_i64x2(W,U,X,Y,C) ((__m512i) __builtin_ia32_shuf_i64x2_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_shuffle_i64x2(U,X,Y,C) ((__m512i) __builtin_ia32_shuf_i64x2_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)(__m512i)_mm512_setzero_si512 (), (__mmask8)(U)))
#define _mm512_shuffle_i32x4(X,Y,C) ((__m512i) __builtin_ia32_shuf_i32x4_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)(__m512i)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_shuffle_i32x4(W,U,X,Y,C) ((__m512i) __builtin_ia32_shuf_i32x4_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_shuffle_i32x4(U,X,Y,C) ((__m512i) __builtin_ia32_shuf_i32x4_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)(__m512i)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm512_shuffle_f64x2(X,Y,C) ((__m512d) __builtin_ia32_shuf_f64x2_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)-1))
#define _mm512_mask_shuffle_f64x2(W,U,X,Y,C) ((__m512d) __builtin_ia32_shuf_f64x2_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_shuffle_f64x2(U,X,Y,C) ((__m512d) __builtin_ia32_shuf_f64x2_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U)))
#define _mm512_shuffle_f32x4(X,Y,C) ((__m512) __builtin_ia32_shuf_f32x4_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)_mm512_undefined_ps(), (__mmask16)-1))
#define _mm512_mask_shuffle_f32x4(W,U,X,Y,C) ((__m512) __builtin_ia32_shuf_f32x4_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)(W), (__mmask16)(U)))
#define _mm512_maskz_shuffle_f32x4(U,X,Y,C) ((__m512) __builtin_ia32_shuf_f32x4_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)_mm512_setzero_ps(), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvtt_roundpd_epi32(A,B) ((__m256i)__builtin_ia32_cvttpd2dq512_mask(A, (__v8si)_mm256_undefined_si256(), -1, B))
#define _mm512_mask_cvtt_roundpd_epi32(W,U,A,B) ((__m256i)__builtin_ia32_cvttpd2dq512_mask(A, (__v8si)(W), U, B))
#define _mm512_maskz_cvtt_roundpd_epi32(U,A,B) ((__m256i)__builtin_ia32_cvttpd2dq512_mask(A, (__v8si)_mm256_setzero_si256(), U, B))
#define _mm512_cvtt_roundpd_epu32(A,B) ((__m256i)__builtin_ia32_cvttpd2udq512_mask(A, (__v8si)_mm256_undefined_si256(), -1, B))
#define _mm512_mask_cvtt_roundpd_epu32(W,U,A,B) ((__m256i)__builtin_ia32_cvttpd2udq512_mask(A, (__v8si)(W), U, B))
#define _mm512_maskz_cvtt_roundpd_epu32(U,A,B) ((__m256i)__builtin_ia32_cvttpd2udq512_mask(A, (__v8si)_mm256_setzero_si256(), U, B))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvt_roundpd_epi32(A,B) ((__m256i)__builtin_ia32_cvtpd2dq512_mask(A, (__v8si)_mm256_undefined_si256(), -1, B))
#define _mm512_mask_cvt_roundpd_epi32(W,U,A,B) ((__m256i)__builtin_ia32_cvtpd2dq512_mask(A, (__v8si)(W), U, B))
#define _mm512_maskz_cvt_roundpd_epi32(U,A,B) ((__m256i)__builtin_ia32_cvtpd2dq512_mask(A, (__v8si)_mm256_setzero_si256(), U, B))
#define _mm512_cvt_roundpd_epu32(A,B) ((__m256i)__builtin_ia32_cvtpd2udq512_mask(A, (__v8si)_mm256_undefined_si256(), -1, B))
#define _mm512_mask_cvt_roundpd_epu32(W,U,A,B) ((__m256i)__builtin_ia32_cvtpd2udq512_mask(A, (__v8si)(W), U, B))
#define _mm512_maskz_cvt_roundpd_epu32(U,A,B) ((__m256i)__builtin_ia32_cvtpd2udq512_mask(A, (__v8si)_mm256_setzero_si256(), U, B))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvtt_roundps_epi32(A,B) ((__m512i)__builtin_ia32_cvttps2dq512_mask(A, (__v16si)_mm512_undefined_epi32 (), -1, B))
#define _mm512_mask_cvtt_roundps_epi32(W,U,A,B) ((__m512i)__builtin_ia32_cvttps2dq512_mask(A, (__v16si)(W), U, B))
#define _mm512_maskz_cvtt_roundps_epi32(U,A,B) ((__m512i)__builtin_ia32_cvttps2dq512_mask(A, (__v16si)_mm512_setzero_si512 (), U, B))
#define _mm512_cvtt_roundps_epu32(A,B) ((__m512i)__builtin_ia32_cvttps2udq512_mask(A, (__v16si)_mm512_undefined_epi32 (), -1, B))
#define _mm512_mask_cvtt_roundps_epu32(W,U,A,B) ((__m512i)__builtin_ia32_cvttps2udq512_mask(A, (__v16si)(W), U, B))
#define _mm512_maskz_cvtt_roundps_epu32(U,A,B) ((__m512i)__builtin_ia32_cvttps2udq512_mask(A, (__v16si)_mm512_setzero_si512 (), U, B))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvt_roundps_epi32(A,B) ((__m512i)__builtin_ia32_cvtps2dq512_mask(A, (__v16si)_mm512_undefined_epi32 (), -1, B))
#define _mm512_mask_cvt_roundps_epi32(W,U,A,B) ((__m512i)__builtin_ia32_cvtps2dq512_mask(A, (__v16si)(W), U, B))
#define _mm512_maskz_cvt_roundps_epi32(U,A,B) ((__m512i)__builtin_ia32_cvtps2dq512_mask(A, (__v16si)_mm512_setzero_si512 (), U, B))
#define _mm512_cvt_roundps_epu32(A,B) ((__m512i)__builtin_ia32_cvtps2udq512_mask(A, (__v16si)_mm512_undefined_epi32 (), -1, B))
#define _mm512_mask_cvt_roundps_epu32(W,U,A,B) ((__m512i)__builtin_ia32_cvtps2udq512_mask(A, (__v16si)(W), U, B))
#define _mm512_maskz_cvt_roundps_epu32(U,A,B) ((__m512i)__builtin_ia32_cvtps2udq512_mask(A, (__v16si)_mm512_setzero_si512 (), U, B))
#endif
#ifdef __x86_64__
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundu64_sd(A,B,C) (__m128d)__builtin_ia32_cvtusi2sd64(A, B, C)
#define _mm_cvt_roundi64_sd(A,B,C) (__m128d)__builtin_ia32_cvtsi2sd64(A, B, C)
#define _mm_cvt_roundsi64_sd(A,B,C) (__m128d)__builtin_ia32_cvtsi2sd64(A, B, C)
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundu32_ss(A,B,C) (__m128)__builtin_ia32_cvtusi2ss32(A, B, C)
#define _mm_cvt_roundi32_ss(A,B,C) (__m128)__builtin_ia32_cvtsi2ss32(A, B, C)
#define _mm_cvt_roundsi32_ss(A,B,C) (__m128)__builtin_ia32_cvtsi2ss32(A, B, C)
#endif
#ifdef __x86_64__
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundu64_ss(A,B,C) (__m128)__builtin_ia32_cvtusi2ss64(A, B, C)
#define _mm_cvt_roundi64_ss(A,B,C) (__m128)__builtin_ia32_cvtsi2ss64(A, B, C)
#define _mm_cvt_roundsi64_ss(A,B,C) (__m128)__builtin_ia32_cvtsi2ss64(A, B, C)
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvt_roundepi32_ps(A,B) (__m512)__builtin_ia32_cvtdq2ps512_mask((__v16si)(A), (__v16sf)_mm512_undefined_ps(), -1, B)
#define _mm512_mask_cvt_roundepi32_ps(W,U,A,B) (__m512)__builtin_ia32_cvtdq2ps512_mask((__v16si)(A), W, U, B)
#define _mm512_maskz_cvt_roundepi32_ps(U,A,B) (__m512)__builtin_ia32_cvtdq2ps512_mask((__v16si)(A), (__v16sf)_mm512_setzero_ps(), U, B)
#define _mm512_cvt_roundepu32_ps(A,B) (__m512)__builtin_ia32_cvtudq2ps512_mask((__v16si)(A), (__v16sf)_mm512_undefined_ps(), -1, B)
#define _mm512_mask_cvt_roundepu32_ps(W,U,A,B) (__m512)__builtin_ia32_cvtudq2ps512_mask((__v16si)(A), W, U, B)
#define _mm512_maskz_cvt_roundepu32_ps(U,A,B) (__m512)__builtin_ia32_cvtudq2ps512_mask((__v16si)(A), (__v16sf)_mm512_setzero_ps(), U, B)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_extractf64x4_pd(X,C) ((__m256d) __builtin_ia32_extractf64x4_mask ((__v8df)(__m512d) (X), (int) (C), (__v4df)(__m256d)_mm256_undefined_pd(), (__mmask8)-1))
#define _mm512_mask_extractf64x4_pd(W,U,X,C) ((__m256d) __builtin_ia32_extractf64x4_mask ((__v8df)(__m512d) (X), (int) (C), (__v4df)(__m256d)(W), (__mmask8)(U)))
#define _mm512_maskz_extractf64x4_pd(U,X,C) ((__m256d) __builtin_ia32_extractf64x4_mask ((__v8df)(__m512d) (X), (int) (C), (__v4df)(__m256d)_mm256_setzero_pd(), (__mmask8)(U)))
#define _mm512_extractf32x4_ps(X,C) ((__m128) __builtin_ia32_extractf32x4_mask ((__v16sf)(__m512) (X), (int) (C), (__v4sf)(__m128)_mm_undefined_ps(), (__mmask8)-1))
#define _mm512_mask_extractf32x4_ps(W,U,X,C) ((__m128) __builtin_ia32_extractf32x4_mask ((__v16sf)(__m512) (X), (int) (C), (__v4sf)(__m128)(W), (__mmask8)(U)))
#define _mm512_maskz_extractf32x4_ps(U,X,C) ((__m128) __builtin_ia32_extractf32x4_mask ((__v16sf)(__m512) (X), (int) (C), (__v4sf)(__m128)_mm_setzero_ps(), (__mmask8)(U)))
#define _mm512_extracti64x4_epi64(X,C) ((__m256i) __builtin_ia32_extracti64x4_mask ((__v8di)(__m512i) (X), (int) (C), (__v4di)(__m256i)_mm256_undefined_si256 (), (__mmask8)-1))
#define _mm512_mask_extracti64x4_epi64(W,U,X,C) ((__m256i) __builtin_ia32_extracti64x4_mask ((__v8di)(__m512i) (X), (int) (C), (__v4di)(__m256i)(W), (__mmask8)(U)))
#define _mm512_maskz_extracti64x4_epi64(U,X,C) ((__m256i) __builtin_ia32_extracti64x4_mask ((__v8di)(__m512i) (X), (int) (C), (__v4di)(__m256i)_mm256_setzero_si256 (), (__mmask8)(U)))
#define _mm512_extracti32x4_epi32(X,C) ((__m128i) __builtin_ia32_extracti32x4_mask ((__v16si)(__m512i) (X), (int) (C), (__v4si)(__m128i)_mm_undefined_si128 (), (__mmask8)-1))
#define _mm512_mask_extracti32x4_epi32(W,U,X,C) ((__m128i) __builtin_ia32_extracti32x4_mask ((__v16si)(__m512i) (X), (int) (C), (__v4si)(__m128i)(W), (__mmask8)(U)))
#define _mm512_maskz_extracti32x4_epi32(U,X,C) ((__m128i) __builtin_ia32_extracti32x4_mask ((__v16si)(__m512i) (X), (int) (C), (__v4si)(__m128i)_mm_setzero_si128 (), (__mmask8)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_insertf32x4(X,Y,C) ((__m512) __builtin_ia32_insertf32x4_mask ((__v16sf)(__m512) (X), (__v4sf)(__m128) (Y), (int) (C), (__v16sf)(__m512) (X), (__mmask16)(-1)))
#define _mm512_inserti32x4(X,Y,C) ((__m512i) __builtin_ia32_inserti32x4_mask ((__v16si)(__m512i) (X), (__v4si)(__m128i) (Y), (int) (C), (__v16si)(__m512i) (X), (__mmask16)(-1)))
#define _mm512_insertf64x4(X,Y,C) ((__m512d) __builtin_ia32_insertf64x4_mask ((__v8df)(__m512d) (X), (__v4df)(__m256d) (Y), (int) (C), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)-1))
#define _mm512_mask_insertf64x4(W,U,X,Y,C) ((__m512d) __builtin_ia32_insertf64x4_mask ((__v8df)(__m512d) (X), (__v4df)(__m256d) (Y), (int) (C), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_insertf64x4(U,X,Y,C) ((__m512d) __builtin_ia32_insertf64x4_mask ((__v8df)(__m512d) (X), (__v4df)(__m256d) (Y), (int) (C), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U)))
#define _mm512_inserti64x4(X,Y,C) ((__m512i) __builtin_ia32_inserti64x4_mask ((__v8di)(__m512i) (X), (__v4di)(__m256i) (Y), (int) (C), (__v8di)(__m512i)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_inserti64x4(W,U,X,Y,C) ((__m512i) __builtin_ia32_inserti64x4_mask ((__v8di)(__m512i) (X), (__v4di)(__m256i) (Y), (int) (C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_inserti64x4(U,X,Y,C) ((__m512i) __builtin_ia32_inserti64x4_mask ((__v8di)(__m512i) (X), (__v4di)(__m256i) (Y), (int) (C), (__v8di)(__m512i)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_permute_pd(X,C) ((__m512d) __builtin_ia32_vpermilpd512_mask ((__v8df)(__m512d)(X), (int)(C), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)(-1)))
#define _mm512_mask_permute_pd(W,U,X,C) ((__m512d) __builtin_ia32_vpermilpd512_mask ((__v8df)(__m512d)(X), (int)(C), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_permute_pd(U,X,C) ((__m512d) __builtin_ia32_vpermilpd512_mask ((__v8df)(__m512d)(X), (int)(C), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U)))
#define _mm512_permute_ps(X,C) ((__m512) __builtin_ia32_vpermilps512_mask ((__v16sf)(__m512)(X), (int)(C), (__v16sf)(__m512)_mm512_undefined_ps(), (__mmask16)(-1)))
#define _mm512_mask_permute_ps(W,U,X,C) ((__m512) __builtin_ia32_vpermilps512_mask ((__v16sf)(__m512)(X), (int)(C), (__v16sf)(__m512)(W), (__mmask16)(U)))
#define _mm512_maskz_permute_ps(U,X,C) ((__m512) __builtin_ia32_vpermilps512_mask ((__v16sf)(__m512)(X), (int)(C), (__v16sf)(__m512)_mm512_setzero_ps(), (__mmask16)(U)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_permutex_pd(X,M) ((__m512d) __builtin_ia32_permdf512_mask ((__v8df)(__m512d)(X), (int)(M), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)-1))
#define _mm512_mask_permutex_pd(W,U,X,M) ((__m512d) __builtin_ia32_permdf512_mask ((__v8df)(__m512d)(X), (int)(M), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_permutex_pd(U,X,M) ((__m512d) __builtin_ia32_permdf512_mask ((__v8df)(__m512d)(X), (int)(M), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U)))
#define _mm512_permutex_epi64(X,I) ((__m512i) __builtin_ia32_permdi512_mask ((__v8di)(__m512i)(X), (int)(I), (__v8di)(__m512i) (_mm512_undefined_epi32 ()), (__mmask8)(-1)))
#define _mm512_maskz_permutex_epi64(M,X,I) ((__m512i) __builtin_ia32_permdi512_mask ((__v8di)(__m512i)(X), (int)(I), (__v8di)(__m512i) (_mm512_setzero_si512 ()), (__mmask8)(M)))
#define _mm512_mask_permutex_epi64(W,M,X,I) ((__m512i) __builtin_ia32_permdi512_mask ((__v8di)(__m512i)(X), (int)(I), (__v8di)(__m512i)(W), (__mmask8)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_shuffle_pd(X,Y,C) ((__m512d)__builtin_ia32_shufpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)-1))
#define _mm512_mask_shuffle_pd(W,U,X,Y,C) ((__m512d)__builtin_ia32_shufpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)(W), (__mmask8)(U)))
#define _mm512_maskz_shuffle_pd(U,X,Y,C) ((__m512d)__builtin_ia32_shufpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(C), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U)))
#define _mm512_shuffle_ps(X,Y,C) ((__m512)__builtin_ia32_shufps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)_mm512_undefined_ps(), (__mmask16)-1))
#define _mm512_mask_shuffle_ps(W,U,X,Y,C) ((__m512)__builtin_ia32_shufps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)(W), (__mmask16)(U)))
#define _mm512_maskz_shuffle_ps(U,X,Y,C) ((__m512)__builtin_ia32_shufps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(C), (__v16sf)(__m512)_mm512_setzero_ps(), (__mmask16)(U)))
#define _mm512_fixupimm_round_pd(X,Y,Z,C,R) ((__m512d)__builtin_ia32_fixupimmpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(-1), (R)))
#define _mm512_mask_fixupimm_round_pd(X,U,Y,Z,C,R) ((__m512d)__builtin_ia32_fixupimmpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(U), (R)))
#define _mm512_maskz_fixupimm_round_pd(U,X,Y,Z,C,R) ((__m512d)__builtin_ia32_fixupimmpd512_maskz ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(U), (R)))
#define _mm512_fixupimm_round_ps(X,Y,Z,C,R) ((__m512)__builtin_ia32_fixupimmps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(-1), (R)))
#define _mm512_mask_fixupimm_round_ps(X,U,Y,Z,C,R) ((__m512)__builtin_ia32_fixupimmps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(U), (R)))
#define _mm512_maskz_fixupimm_round_ps(U,X,Y,Z,C,R) ((__m512)__builtin_ia32_fixupimmps512_maskz ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(U), (R)))
#define _mm_fixupimm_round_sd(X,Y,Z,C,R) ((__m128d)__builtin_ia32_fixupimmsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(-1), (R)))
#define _mm_mask_fixupimm_round_sd(X,U,Y,Z,C,R) ((__m128d)__builtin_ia32_fixupimmsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(U), (R)))
#define _mm_maskz_fixupimm_round_sd(U,X,Y,Z,C,R) ((__m128d)__builtin_ia32_fixupimmsd_maskz ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(U), (R)))
#define _mm_fixupimm_round_ss(X,Y,Z,C,R) ((__m128)__builtin_ia32_fixupimmss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(-1), (R)))
#define _mm_mask_fixupimm_round_ss(X,U,Y,Z,C,R) ((__m128)__builtin_ia32_fixupimmss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(U), (R)))
#define _mm_maskz_fixupimm_round_ss(U,X,Y,Z,C,R) ((__m128)__builtin_ia32_fixupimmss_maskz ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(U), (R)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_rol_epi32(A,B) ((__m512i)__builtin_ia32_prold512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)_mm512_undefined_epi32 (), (__mmask16)(-1)))
#define _mm512_mask_rol_epi32(W,U,A,B) ((__m512i)__builtin_ia32_prold512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_rol_epi32(U,A,B) ((__m512i)__builtin_ia32_prold512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm512_ror_epi32(A,B) ((__m512i)__builtin_ia32_prord512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)_mm512_undefined_epi32 (), (__mmask16)(-1)))
#define _mm512_mask_ror_epi32(W,U,A,B) ((__m512i)__builtin_ia32_prord512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_ror_epi32(U,A,B) ((__m512i)__builtin_ia32_prord512_mask ((__v16si)(__m512i)(A), (int)(B), (__v16si)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm512_rol_epi64(A,B) ((__m512i)__builtin_ia32_prolq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)_mm512_undefined_epi32 (), (__mmask8)(-1)))
#define _mm512_mask_rol_epi64(W,U,A,B) ((__m512i)__builtin_ia32_prolq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_rol_epi64(U,A,B) ((__m512i)__builtin_ia32_prolq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)_mm512_setzero_si512 (), (__mmask8)(U)))
#define _mm512_ror_epi64(A,B) ((__m512i)__builtin_ia32_prorq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)_mm512_undefined_epi32 (), (__mmask8)(-1)))
#define _mm512_mask_ror_epi64(W,U,A,B) ((__m512i)__builtin_ia32_prorq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_ror_epi64(U,A,B) ((__m512i)__builtin_ia32_prorq512_mask ((__v8di)(__m512i)(A), (int)(B), (__v8di)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#ifdef __x86_64__
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundss_u64(A,B) ((unsigned long long)__builtin_ia32_vcvtss2usi64(A, B))
#define _mm_cvt_roundss_si64(A,B) ((long long)__builtin_ia32_vcvtss2si64(A, B))
#define _mm_cvt_roundss_i64(A,B) ((long long)__builtin_ia32_vcvtss2si64(A, B))
#define _mm_cvtt_roundss_u64(A,B) ((unsigned long long)__builtin_ia32_vcvttss2usi64(A, B))
#define _mm_cvtt_roundss_i64(A,B) ((long long)__builtin_ia32_vcvttss2si64(A, B))
#define _mm_cvtt_roundss_si64(A,B) ((long long)__builtin_ia32_vcvttss2si64(A, B))
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundss_u32(A,B) ((unsigned)__builtin_ia32_vcvtss2usi32(A, B))
#define _mm_cvt_roundss_si32(A,B) ((int)__builtin_ia32_vcvtss2si32(A, B))
#define _mm_cvt_roundss_i32(A,B) ((int)__builtin_ia32_vcvtss2si32(A, B))
#define _mm_cvtt_roundss_u32(A,B) ((unsigned)__builtin_ia32_vcvttss2usi32(A, B))
#define _mm_cvtt_roundss_si32(A,B) ((int)__builtin_ia32_vcvttss2si32(A, B))
#define _mm_cvtt_roundss_i32(A,B) ((int)__builtin_ia32_vcvttss2si32(A, B))
#endif
#ifdef __x86_64__
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundsd_u64(A,B) ((unsigned long long)__builtin_ia32_vcvtsd2usi64(A, B))
#define _mm_cvt_roundsd_si64(A,B) ((long long)__builtin_ia32_vcvtsd2si64(A, B))
#define _mm_cvt_roundsd_i64(A,B) ((long long)__builtin_ia32_vcvtsd2si64(A, B))
#define _mm_cvtt_roundsd_u64(A,B) ((unsigned long long)__builtin_ia32_vcvttsd2usi64(A, B))
#define _mm_cvtt_roundsd_si64(A,B) ((long long)__builtin_ia32_vcvttsd2si64(A, B))
#define _mm_cvtt_roundsd_i64(A,B) ((long long)__builtin_ia32_vcvttsd2si64(A, B))
#endif
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_cvt_roundsd_u32(A,B) ((unsigned)__builtin_ia32_vcvtsd2usi32(A, B))
#define _mm_cvt_roundsd_si32(A,B) ((int)__builtin_ia32_vcvtsd2si32(A, B))
#define _mm_cvt_roundsd_i32(A,B) ((int)__builtin_ia32_vcvtsd2si32(A, B))
#define _mm_cvtt_roundsd_u32(A,B) ((unsigned)__builtin_ia32_vcvttsd2usi32(A, B))
#define _mm_cvtt_roundsd_si32(A,B) ((int)__builtin_ia32_vcvttsd2si32(A, B))
#define _mm_cvtt_roundsd_i32(A,B) ((int)__builtin_ia32_vcvttsd2si32(A, B))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvt_roundps_pd(A,B) (__m512d)__builtin_ia32_cvtps2pd512_mask(A, (__v8df)_mm512_undefined_pd(), -1, B)
#define _mm512_mask_cvt_roundps_pd(W,U,A,B) (__m512d)__builtin_ia32_cvtps2pd512_mask(A, (__v8df)(W), U, B)
#define _mm512_maskz_cvt_roundps_pd(U,A,B) (__m512d)__builtin_ia32_cvtps2pd512_mask(A, (__v8df)_mm512_setzero_pd(), U, B)
#define _mm512_cvt_roundph_ps(A,B) (__m512)__builtin_ia32_vcvtph2ps512_mask((__v16hi)(A), (__v16sf)_mm512_undefined_ps(), -1, B)
#define _mm512_mask_cvt_roundph_ps(W,U,A,B) (__m512)__builtin_ia32_vcvtph2ps512_mask((__v16hi)(A), (__v16sf)(W), U, B)
#define _mm512_maskz_cvt_roundph_ps(U,A,B) (__m512)__builtin_ia32_vcvtph2ps512_mask((__v16hi)(A), (__v16sf)_mm512_setzero_ps(), U, B)
#define _mm512_cvt_roundps_ph(A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)_mm256_undefined_si256 (), -1))
#define _mm512_cvtps_ph(A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)_mm256_undefined_si256 (), -1))
#define _mm512_mask_cvt_roundps_ph(U,W,A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)(__m256i)(U), (__mmask16) (W)))
#define _mm512_mask_cvtps_ph(U,W,A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)(__m256i)(U), (__mmask16) (W)))
#define _mm512_maskz_cvt_roundps_ph(W,A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)_mm256_setzero_si256 (), (__mmask16) (W)))
#define _mm512_maskz_cvtps_ph(W,A,I) ((__m256i) __builtin_ia32_vcvtps2ph512_mask ((__v16sf)(__m512) A, (int) (I), (__v16hi)_mm256_setzero_si256 (), (__mmask16) (W)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cvt_roundpd_ps(A,B) (__m256)__builtin_ia32_cvtpd2ps512_mask(A, (__v8sf)_mm256_undefined_ps(), -1, B)
#define _mm512_mask_cvt_roundpd_ps(W,U,A,B) (__m256)__builtin_ia32_cvtpd2ps512_mask(A, (__v8sf)(W), U, B)
#define _mm512_maskz_cvt_roundpd_ps(U,A,B) (__m256)__builtin_ia32_cvtpd2ps512_mask(A, (__v8sf)_mm256_setzero_ps(), U, B)
#define _mm_cvt_roundsd_ss(A,B,C) (__m128)__builtin_ia32_cvtsd2ss_round(A, B, C)
#define _mm_cvt_roundss_sd(A,B,C) (__m128d)__builtin_ia32_cvtss2sd_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_getmant_round_pd(X,B,C,R) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)(__m512d)_mm512_undefined_pd(), (__mmask8)-1, (R)))
#define _mm512_mask_getmant_round_pd(W,U,X,B,C,R) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)(__m512d)(W), (__mmask8)(U), (R)))
#define _mm512_maskz_getmant_round_pd(U,X,B,C,R) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)(__m512d)_mm512_setzero_pd(), (__mmask8)(U), (R)))
#define _mm512_getmant_round_ps(X,B,C,R) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)(__m512)_mm512_undefined_ps(), (__mmask16)-1, (R)))
#define _mm512_mask_getmant_round_ps(W,U,X,B,C,R) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)(__m512)(W), (__mmask16)(U), (R)))
#define _mm512_maskz_getmant_round_ps(U,X,B,C,R) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)(__m512)_mm512_setzero_ps(), (__mmask16)(U), (R)))
#define _mm_getmant_round_sd(X,Y,C,D,R) ((__m128d)__builtin_ia32_getmantsd_round ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(((D)<<2) | (C)), (R)))
#define _mm_getmant_round_ss(X,Y,C,D,R) ((__m128)__builtin_ia32_getmantss_round ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(((D)<<2) | (C)), (R)))
#define _mm_getexp_round_ss(A,B,R) ((__m128)__builtin_ia32_getexpss128_round((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), R))
#define _mm_getexp_round_sd(A,B,R) ((__m128d)__builtin_ia32_getexpsd128_round((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), R))
#define _mm512_getexp_round_ps(A,R) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)_mm512_undefined_ps(), (__mmask16)-1, R))
#define _mm512_mask_getexp_round_ps(W,U,A,R) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)(__m512)(W), (__mmask16)(U), R))
#define _mm512_maskz_getexp_round_ps(U,A,R) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)_mm512_setzero_ps(), (__mmask16)(U), R))
#define _mm512_getexp_round_pd(A,R) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)_mm512_undefined_pd(), (__mmask8)-1, R))
#define _mm512_mask_getexp_round_pd(W,U,A,R) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)(__m512d)(W), (__mmask8)(U), R))
#define _mm512_maskz_getexp_round_pd(U,A,R) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)_mm512_setzero_pd(), (__mmask8)(U), R))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_roundscale_round_ps(A,B,R) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(A), (int)(B), (__v16sf)_mm512_undefined_ps(), (__mmask16)(-1), R))
#define _mm512_mask_roundscale_round_ps(A,B,C,D,R) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(C), (int)(D), (__v16sf)(__m512)(A), (__mmask16)(B), R))
#define _mm512_maskz_roundscale_round_ps(A,B,C,R) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps(), (__mmask16)(A), R))
#define _mm512_roundscale_round_pd(A,B,R) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(A), (int)(B), (__v8df)_mm512_undefined_pd(), (__mmask8)(-1), R))
#define _mm512_mask_roundscale_round_pd(A,B,C,D,R) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(C), (int)(D), (__v8df)(__m512d)(A), (__mmask8)(B), R))
#define _mm512_maskz_roundscale_round_pd(A,B,C,R) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd(), (__mmask8)(A), R))
#define _mm_roundscale_round_ss(A,B,C,R) ((__m128) __builtin_ia32_rndscaless_round ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), R))
#define _mm_roundscale_round_sd(A,B,C,R) ((__m128d) __builtin_ia32_rndscalesd_round ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), R))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_alignr_epi32(X,Y,C) ((__m512i)__builtin_ia32_alignd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)_mm512_undefined_epi32 (), (__mmask16)-1))
#define _mm512_mask_alignr_epi32(W,U,X,Y,C) ((__m512i)__builtin_ia32_alignd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)(__m512i)(W), (__mmask16)(U)))
#define _mm512_maskz_alignr_epi32(U,X,Y,C) ((__m512i)__builtin_ia32_alignd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(C), (__v16si)_mm512_setzero_si512 (), (__mmask16)(U)))
#define _mm512_alignr_epi64(X,Y,C) ((__m512i)__builtin_ia32_alignq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)_mm512_undefined_epi32 (), (__mmask8)-1))
#define _mm512_mask_alignr_epi64(W,U,X,Y,C) ((__m512i)__builtin_ia32_alignq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)(__m512i)(W), (__mmask8)(U)))
#define _mm512_maskz_alignr_epi64(U,X,Y,C) ((__m512i)__builtin_ia32_alignq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(C), (__v8di)_mm512_setzero_si512 (), (__mmask8)(U)))
#endif
#define _MM_CMPINT_EQ 0x0
#define _MM_CMPINT_LT 0x1
#define _MM_CMPINT_LE 0x2
#define _MM_CMPINT_UNUSED 0x3
#define _MM_CMPINT_NE 0x4
#define _MM_CMPINT_NLT 0x5
#define _MM_CMPINT_GE 0x5
#define _MM_CMPINT_NLE 0x6
#define _MM_CMPINT_GT 0x6
#ifdef __OPTIMIZE__
#else
#define _kshiftli_mask16(X,Y) ((__mmask16) __builtin_ia32_kshiftlihi ((__mmask16)(X), (__mmask8)(Y)))
#define _kshiftri_mask16(X,Y) ((__mmask16) __builtin_ia32_kshiftrihi ((__mmask16)(X), (__mmask8)(Y)))
#define _mm512_cmp_epi64_mask(X,Y,P) ((__mmask8) __builtin_ia32_cmpq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(P), (__mmask8)-1))
#define _mm512_cmp_epi32_mask(X,Y,P) ((__mmask16) __builtin_ia32_cmpd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(P), (__mmask16)-1))
#define _mm512_cmp_epu64_mask(X,Y,P) ((__mmask8) __builtin_ia32_ucmpq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(P), (__mmask8)-1))
#define _mm512_cmp_epu32_mask(X,Y,P) ((__mmask16) __builtin_ia32_ucmpd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(P), (__mmask16)-1))
#define _mm512_cmp_round_pd_mask(X,Y,P,R) ((__mmask8) __builtin_ia32_cmppd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(P), (__mmask8)-1, R))
#define _mm512_cmp_round_ps_mask(X,Y,P,R) ((__mmask16) __builtin_ia32_cmpps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(P), (__mmask16)-1, R))
#define _mm512_mask_cmp_epi64_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_cmpq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(P), (__mmask8)M))
#define _mm512_mask_cmp_epi32_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_cmpd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(P), (__mmask16)M))
#define _mm512_mask_cmp_epu64_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_ucmpq512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(P), (__mmask8)M))
#define _mm512_mask_cmp_epu32_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_ucmpd512_mask ((__v16si)(__m512i)(X), (__v16si)(__m512i)(Y), (int)(P), (__mmask16)M))
#define _mm512_mask_cmp_round_pd_mask(M,X,Y,P,R) ((__mmask8) __builtin_ia32_cmppd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(P), (__mmask8)M, R))
#define _mm512_mask_cmp_round_ps_mask(M,X,Y,P,R) ((__mmask16) __builtin_ia32_cmpps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(P), (__mmask16)M, R))
#define _mm_cmp_round_sd_mask(X,Y,P,R) ((__mmask8) __builtin_ia32_cmpsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P), (__mmask8)-1, R))
#define _mm_mask_cmp_round_sd_mask(M,X,Y,P,R) ((__mmask8) __builtin_ia32_cmpsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P), (M), R))
#define _mm_cmp_round_ss_mask(X,Y,P,R) ((__mmask8) __builtin_ia32_cmpss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P), (__mmask8)-1, R))
#define _mm_mask_cmp_round_ss_mask(M,X,Y,P,R) ((__mmask8) __builtin_ia32_cmpss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P), (M), R))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_i32gather_ps(INDEX,ADDR,SCALE) (__m512) __builtin_ia32_gathersiv16sf ((__v16sf)_mm512_undefined_ps(), (void const *)ADDR, (__v16si)(__m512i)INDEX, (__mmask16)0xFFFF, (int)SCALE)
#define _mm512_mask_i32gather_ps(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512) __builtin_ia32_gathersiv16sf ((__v16sf)(__m512)V1OLD, (void const *)ADDR, (__v16si)(__m512i)INDEX, (__mmask16)MASK, (int)SCALE)
#define _mm512_i32gather_pd(INDEX,ADDR,SCALE) (__m512d) __builtin_ia32_gathersiv8df ((__v8df)_mm512_undefined_pd(), (void const *)ADDR, (__v8si)(__m256i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i32gather_pd(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512d) __builtin_ia32_gathersiv8df ((__v8df)(__m512d)V1OLD, (void const *)ADDR, (__v8si)(__m256i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i64gather_ps(INDEX,ADDR,SCALE) (__m256) __builtin_ia32_gatherdiv16sf ((__v8sf)_mm256_undefined_ps(), (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i64gather_ps(V1OLD,MASK,INDEX,ADDR,SCALE) (__m256) __builtin_ia32_gatherdiv16sf ((__v8sf)(__m256)V1OLD, (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i64gather_pd(INDEX,ADDR,SCALE) (__m512d) __builtin_ia32_gatherdiv8df ((__v8df)_mm512_undefined_pd(), (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i64gather_pd(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512d) __builtin_ia32_gatherdiv8df ((__v8df)(__m512d)V1OLD, (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i32gather_epi32(INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gathersiv16si ((__v16si)_mm512_undefined_epi32 (), (void const *)ADDR, (__v16si)(__m512i)INDEX, (__mmask16)0xFFFF, (int)SCALE)
#define _mm512_mask_i32gather_epi32(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gathersiv16si ((__v16si)(__m512i)V1OLD, (void const *)ADDR, (__v16si)(__m512i)INDEX, (__mmask16)MASK, (int)SCALE)
#define _mm512_i32gather_epi64(INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gathersiv8di ((__v8di)_mm512_undefined_epi32 (), (void const *)ADDR, (__v8si)(__m256i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i32gather_epi64(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gathersiv8di ((__v8di)(__m512i)V1OLD, (void const *)ADDR, (__v8si)(__m256i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i64gather_epi32(INDEX,ADDR,SCALE) (__m256i) __builtin_ia32_gatherdiv16si ((__v8si)_mm256_undefined_si256(), (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i64gather_epi32(V1OLD,MASK,INDEX,ADDR,SCALE) (__m256i) __builtin_ia32_gatherdiv16si ((__v8si)(__m256i)V1OLD, (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i64gather_epi64(INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gatherdiv8di ((__v8di)_mm512_undefined_epi32 (), (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)0xFF, (int)SCALE)
#define _mm512_mask_i64gather_epi64(V1OLD,MASK,INDEX,ADDR,SCALE) (__m512i) __builtin_ia32_gatherdiv8di ((__v8di)(__m512i)V1OLD, (void const *)ADDR, (__v8di)(__m512i)INDEX, (__mmask8)MASK, (int)SCALE)
#define _mm512_i32scatter_ps(ADDR,INDEX,V1,SCALE) __builtin_ia32_scattersiv16sf ((void *)ADDR, (__mmask16)0xFFFF, (__v16si)(__m512i)INDEX, (__v16sf)(__m512)V1, (int)SCALE)
#define _mm512_mask_i32scatter_ps(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scattersiv16sf ((void *)ADDR, (__mmask16)MASK, (__v16si)(__m512i)INDEX, (__v16sf)(__m512)V1, (int)SCALE)
#define _mm512_i32scatter_pd(ADDR,INDEX,V1,SCALE) __builtin_ia32_scattersiv8df ((void *)ADDR, (__mmask8)0xFF, (__v8si)(__m256i)INDEX, (__v8df)(__m512d)V1, (int)SCALE)
#define _mm512_mask_i32scatter_pd(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scattersiv8df ((void *)ADDR, (__mmask8)MASK, (__v8si)(__m256i)INDEX, (__v8df)(__m512d)V1, (int)SCALE)
#define _mm512_i64scatter_ps(ADDR,INDEX,V1,SCALE) __builtin_ia32_scatterdiv16sf ((void *)ADDR, (__mmask8)0xFF, (__v8di)(__m512i)INDEX, (__v8sf)(__m256)V1, (int)SCALE)
#define _mm512_mask_i64scatter_ps(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scatterdiv16sf ((void *)ADDR, (__mmask16)MASK, (__v8di)(__m512i)INDEX, (__v8sf)(__m256)V1, (int)SCALE)
#define _mm512_i64scatter_pd(ADDR,INDEX,V1,SCALE) __builtin_ia32_scatterdiv8df ((void *)ADDR, (__mmask8)0xFF, (__v8di)(__m512i)INDEX, (__v8df)(__m512d)V1, (int)SCALE)
#define _mm512_mask_i64scatter_pd(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scatterdiv8df ((void *)ADDR, (__mmask8)MASK, (__v8di)(__m512i)INDEX, (__v8df)(__m512d)V1, (int)SCALE)
#define _mm512_i32scatter_epi32(ADDR,INDEX,V1,SCALE) __builtin_ia32_scattersiv16si ((void *)ADDR, (__mmask16)0xFFFF, (__v16si)(__m512i)INDEX, (__v16si)(__m512i)V1, (int)SCALE)
#define _mm512_mask_i32scatter_epi32(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scattersiv16si ((void *)ADDR, (__mmask16)MASK, (__v16si)(__m512i)INDEX, (__v16si)(__m512i)V1, (int)SCALE)
#define _mm512_i32scatter_epi64(ADDR,INDEX,V1,SCALE) __builtin_ia32_scattersiv8di ((void *)ADDR, (__mmask8)0xFF, (__v8si)(__m256i)INDEX, (__v8di)(__m512i)V1, (int)SCALE)
#define _mm512_mask_i32scatter_epi64(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scattersiv8di ((void *)ADDR, (__mmask8)MASK, (__v8si)(__m256i)INDEX, (__v8di)(__m512i)V1, (int)SCALE)
#define _mm512_i64scatter_epi32(ADDR,INDEX,V1,SCALE) __builtin_ia32_scatterdiv16si ((void *)ADDR, (__mmask8)0xFF, (__v8di)(__m512i)INDEX, (__v8si)(__m256i)V1, (int)SCALE)
#define _mm512_mask_i64scatter_epi32(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scatterdiv16si ((void *)ADDR, (__mmask8)MASK, (__v8di)(__m512i)INDEX, (__v8si)(__m256i)V1, (int)SCALE)
#define _mm512_i64scatter_epi64(ADDR,INDEX,V1,SCALE) __builtin_ia32_scatterdiv8di ((void *)ADDR, (__mmask8)0xFF, (__v8di)(__m512i)INDEX, (__v8di)(__m512i)V1, (int)SCALE)
#define _mm512_mask_i64scatter_epi64(ADDR,MASK,INDEX,V1,SCALE) __builtin_ia32_scatterdiv8di ((void *)ADDR, (__mmask8)MASK, (__v8di)(__m512i)INDEX, (__v8di)(__m512i)V1, (int)SCALE)
#endif
#define _kand_mask16 _mm512_kand
#define _kandn_mask16 _mm512_kandn
#define _knot_mask16 _mm512_knot
#define _kor_mask16 _mm512_kor
#define _kxnor_mask16 _mm512_kxnor
#define _kxor_mask16 _mm512_kxor
#ifdef __OPTIMIZE__
#else
#define _mm512_maskz_insertf32x4(A,X,Y,C) ((__m512) __builtin_ia32_insertf32x4_mask ((__v16sf)(__m512) (X), (__v4sf)(__m128) (Y), (int) (C), (__v16sf)_mm512_setzero_ps(), (__mmask8)(A)))
#define _mm512_maskz_inserti32x4(A,X,Y,C) ((__m512i) __builtin_ia32_inserti32x4_mask ((__v16si)(__m512i) (X), (__v4si)(__m128i) (Y), (int) (C), (__v16si)_mm512_setzero_si512 (), (__mmask8)(A)))
#define _mm512_mask_insertf32x4(A,B,X,Y,C) ((__m512) __builtin_ia32_insertf32x4_mask ((__v16sf)(__m512) (X), (__v4sf)(__m128) (Y), (int) (C), (__v16sf)(__m512) (A), (__mmask8)(B)))
#define _mm512_mask_inserti32x4(A,B,X,Y,C) ((__m512i) __builtin_ia32_inserti32x4_mask ((__v16si)(__m512i) (X), (__v4si)(__m128i) (Y), (int) (C), (__v16si)(__m512i) (A), (__mmask8)(B)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_max_round_sd(A,B,C) (__m128d)__builtin_ia32_addsd_round(A, B, C)
#define _mm_max_round_ss(A,B,C) (__m128)__builtin_ia32_addss_round(A, B, C)
#define _mm_min_round_sd(A,B,C) (__m128d)__builtin_ia32_subsd_round(A, B, C)
#define _mm_min_round_ss(A,B,C) (__m128)__builtin_ia32_subss_round(A, B, C)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_fmadd_round_sd(A,B,C,R) (__m128d)__builtin_ia32_vfmaddsd3_round(A, B, C, R)
#define _mm_fmadd_round_ss(A,B,C,R) (__m128)__builtin_ia32_vfmaddss3_round(A, B, C, R)
#define _mm_fmsub_round_sd(A,B,C,R) (__m128d)__builtin_ia32_vfmaddsd3_round(A, B, -(C), R)
#define _mm_fmsub_round_ss(A,B,C,R) (__m128)__builtin_ia32_vfmaddss3_round(A, B, -(C), R)
#define _mm_fnmadd_round_sd(A,B,C,R) (__m128d)__builtin_ia32_vfmaddsd3_round(A, -(B), C, R)
#define _mm_fnmadd_round_ss(A,B,C,R) (__m128)__builtin_ia32_vfmaddss3_round(A, -(B), C, R)
#define _mm_fnmsub_round_sd(A,B,C,R) (__m128d)__builtin_ia32_vfmaddsd3_round(A, -(B), -(C), R)
#define _mm_fnmsub_round_ss(A,B,C,R) (__m128)__builtin_ia32_vfmaddss3_round(A, -(B), -(C), R)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_comi_round_ss(A,B,C,D) __builtin_ia32_vcomiss(A, B, C, D)
#define _mm_comi_round_sd(A,B,C,D) __builtin_ia32_vcomisd(A, B, C, D)
#endif
#ifdef __x86_64__
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_fixupimm_pd(X,Y,Z,C) ((__m512d)__builtin_ia32_fixupimmpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_fixupimm_pd(X,U,Y,Z,C) ((__m512d)__builtin_ia32_fixupimmpd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_fixupimm_pd(U,X,Y,Z,C) ((__m512d)__builtin_ia32_fixupimmpd512_maskz ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (__v8di)(__m512i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_fixupimm_ps(X,Y,Z,C) ((__m512)__builtin_ia32_fixupimmps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_fixupimm_ps(X,U,Y,Z,C) ((__m512)__builtin_ia32_fixupimmps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_fixupimm_ps(U,X,Y,Z,C) ((__m512)__builtin_ia32_fixupimmps512_maskz ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (__v16si)(__m512i)(Z), (int)(C), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm_fixupimm_sd(X,Y,Z,C) ((__m128d)__builtin_ia32_fixupimmsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm_mask_fixupimm_sd(X,U,Y,Z,C) ((__m128d)__builtin_ia32_fixupimmsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm_maskz_fixupimm_sd(U,X,Y,Z,C) ((__m128d)__builtin_ia32_fixupimmsd_maskz ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (__v2di)(__m128i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm_fixupimm_ss(X,Y,Z,C) ((__m128)__builtin_ia32_fixupimmss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm_mask_fixupimm_ss(X,U,Y,Z,C) ((__m128)__builtin_ia32_fixupimmss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm_maskz_fixupimm_ss(U,X,Y,Z,C) ((__m128)__builtin_ia32_fixupimmss_maskz ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (__v4si)(__m128i)(Z), (int)(C), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_getmant_pd(X,B,C) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)_mm512_undefined_pd(), (__mmask8)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_getmant_pd(W,U,X,B,C) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)(__m512d)(W), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_getmant_pd(U,X,B,C) ((__m512d)__builtin_ia32_getmantpd512_mask ((__v8df)(__m512d)(X), (int)(((C)<<2) | (B)), (__v8df)_mm512_setzero_pd(), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_getmant_ps(X,B,C) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)_mm512_undefined_ps(), (__mmask16)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_getmant_ps(W,U,X,B,C) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)(__m512)(W), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_getmant_ps(U,X,B,C) ((__m512)__builtin_ia32_getmantps512_mask ((__v16sf)(__m512)(X), (int)(((C)<<2) | (B)), (__v16sf)_mm512_setzero_ps(), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm_getmant_sd(X,Y,C,D) ((__m128d)__builtin_ia32_getmantsd_round ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(((D)<<2) | (C)), _MM_FROUND_CUR_DIRECTION))
#define _mm_getmant_ss(X,Y,C,D) ((__m128)__builtin_ia32_getmantss_round ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(((D)<<2) | (C)), _MM_FROUND_CUR_DIRECTION))
#define _mm_getexp_ss(A,B) ((__m128)__builtin_ia32_getexpss128_mask((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), _MM_FROUND_CUR_DIRECTION))
#define _mm_getexp_sd(A,B) ((__m128d)__builtin_ia32_getexpsd128_mask((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), _MM_FROUND_CUR_DIRECTION))
#define _mm512_getexp_ps(A) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)_mm512_undefined_ps(), (__mmask16)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_getexp_ps(W,U,A) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)(__m512)(W), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_getexp_ps(U,A) ((__m512)__builtin_ia32_getexpps512_mask((__v16sf)(__m512)(A), (__v16sf)_mm512_setzero_ps(), (__mmask16)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_getexp_pd(A) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)_mm512_undefined_pd(), (__mmask8)-1, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_getexp_pd(W,U,A) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)(__m512d)(W), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_getexp_pd(U,A) ((__m512d)__builtin_ia32_getexppd512_mask((__v8df)(__m512d)(A), (__v8df)_mm512_setzero_pd(), (__mmask8)(U), _MM_FROUND_CUR_DIRECTION))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_roundscale_ps(A,B) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(A), (int)(B), (__v16sf)_mm512_undefined_ps(), (__mmask16)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_roundscale_ps(A,B,C,D) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(C), (int)(D), (__v16sf)(__m512)(A), (__mmask16)(B), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_roundscale_ps(A,B,C) ((__m512) __builtin_ia32_rndscaleps_mask ((__v16sf)(__m512)(B), (int)(C), (__v16sf)_mm512_setzero_ps(), (__mmask16)(A), _MM_FROUND_CUR_DIRECTION))
#define _mm512_roundscale_pd(A,B) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(A), (int)(B), (__v8df)_mm512_undefined_pd(), (__mmask8)(-1), _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_roundscale_pd(A,B,C,D) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(C), (int)(D), (__v8df)(__m512d)(A), (__mmask8)(B), _MM_FROUND_CUR_DIRECTION))
#define _mm512_maskz_roundscale_pd(A,B,C) ((__m512d) __builtin_ia32_rndscalepd_mask ((__v8df)(__m512d)(B), (int)(C), (__v8df)_mm512_setzero_pd(), (__mmask8)(A), _MM_FROUND_CUR_DIRECTION))
#define _mm_roundscale_ss(A,B,C) ((__m128) __builtin_ia32_rndscaless_round ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(C), _MM_FROUND_CUR_DIRECTION))
#define _mm_roundscale_sd(A,B,C) ((__m128d) __builtin_ia32_rndscalesd_round ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(C), _MM_FROUND_CUR_DIRECTION))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_cmp_pd_mask(X,Y,P) ((__mmask8) __builtin_ia32_cmppd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(P), (__mmask8)-1,_MM_FROUND_CUR_DIRECTION))
#define _mm512_cmp_ps_mask(X,Y,P) ((__mmask16) __builtin_ia32_cmpps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(P), (__mmask16)-1,_MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_cmp_pd_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_cmppd512_mask ((__v8df)(__m512d)(X), (__v8df)(__m512d)(Y), (int)(P), (__mmask8)M, _MM_FROUND_CUR_DIRECTION))
#define _mm512_mask_cmp_ps_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_cmpps512_mask ((__v16sf)(__m512)(X), (__v16sf)(__m512)(Y), (int)(P), (__mmask16)M,_MM_FROUND_CUR_DIRECTION))
#define _mm_cmp_sd_mask(X,Y,P) ((__mmask8) __builtin_ia32_cmpsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P), (__mmask8)-1,_MM_FROUND_CUR_DIRECTION))
#define _mm_mask_cmp_sd_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_cmpsd_mask ((__v2df)(__m128d)(X), (__v2df)(__m128d)(Y), (int)(P), M,_MM_FROUND_CUR_DIRECTION))
#define _mm_cmp_ss_mask(X,Y,P) ((__mmask8) __builtin_ia32_cmpss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P), (__mmask8)-1,_MM_FROUND_CUR_DIRECTION))
#define _mm_mask_cmp_ss_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_cmpss_mask ((__v4sf)(__m128)(X), (__v4sf)(__m128)(Y), (int)(P), M,_MM_FROUND_CUR_DIRECTION))
#endif
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __v8si __T1 = (__v8si) _mm512_extracti64x4_epi64 (__A, 1); __v8si __T2 = (__v8si) _mm512_extracti64x4_epi64 (__A, 0); __m256i __T3 = (__m256i) (__T1 op __T2); __v4si __T4 = (__v4si) _mm256_extracti128_si256 (__T3, 1); __v4si __T5 = (__v4si) _mm256_extracti128_si256 (__T3, 0); __v4si __T6 = __T4 op __T5; __v4si __T7 = __builtin_shuffle (__T6, (__v4si) { 2, 3, 0, 1 }); __v4si __T8 = __T6 op __T7; return __T8[0] op __T8[1]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m256i __T1 = (__m256i) _mm512_extracti64x4_epi64 (__A, 1); __m256i __T2 = (__m256i) _mm512_extracti64x4_epi64 (__A, 0); __m256i __T3 = _mm256_ ##op (__T1, __T2); __m128i __T4 = (__m128i) _mm256_extracti128_si256 (__T3, 1); __m128i __T5 = (__m128i) _mm256_extracti128_si256 (__T3, 0); __m128i __T6 = _mm_ ##op (__T4, __T5); __m128i __T7 = (__m128i) __builtin_shuffle ((__v4si) __T6, (__v4si) { 2, 3, 0, 1 }); __m128i __T8 = _mm_ ##op (__T6, __T7); __m128i __T9 = (__m128i) __builtin_shuffle ((__v4si) __T8, (__v4si) { 1, 0, 1, 0 }); __v4si __T10 = (__v4si) _mm_ ##op (__T8, __T9); return __T10[0]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m256 __T1 = (__m256) _mm512_extractf64x4_pd ((__m512d) __A, 1); __m256 __T2 = (__m256) _mm512_extractf64x4_pd ((__m512d) __A, 0); __m256 __T3 = __T1 op __T2; __m128 __T4 = _mm256_extractf128_ps (__T3, 1); __m128 __T5 = _mm256_extractf128_ps (__T3, 0); __m128 __T6 = __T4 op __T5; __m128 __T7 = __builtin_shuffle (__T6, (__v4si) { 2, 3, 0, 1 }); __m128 __T8 = __T6 op __T7; return __T8[0] op __T8[1]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m256 __T1 = (__m256) _mm512_extractf64x4_pd ((__m512d) __A, 1); __m256 __T2 = (__m256) _mm512_extractf64x4_pd ((__m512d) __A, 0); __m256 __T3 = _mm256_ ##op (__T1, __T2); __m128 __T4 = _mm256_extractf128_ps (__T3, 1); __m128 __T5 = _mm256_extractf128_ps (__T3, 0); __m128 __T6 = _mm_ ##op (__T4, __T5); __m128 __T7 = __builtin_shuffle (__T6, (__v4si) { 2, 3, 0, 1 }); __m128 __T8 = _mm_ ##op (__T6, __T7); __m128 __T9 = __builtin_shuffle (__T8, (__v4si) { 1, 0, 1, 0 }); __m128 __T10 = _mm_ ##op (__T8, __T9); return __T10[0]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __v4di __T1 = (__v4di) _mm512_extracti64x4_epi64 (__A, 1); __v4di __T2 = (__v4di) _mm512_extracti64x4_epi64 (__A, 0); __m256i __T3 = (__m256i) (__T1 op __T2); __v2di __T4 = (__v2di) _mm256_extracti128_si256 (__T3, 1); __v2di __T5 = (__v2di) _mm256_extracti128_si256 (__T3, 0); __v2di __T6 = __T4 op __T5; return __T6[0] op __T6[1]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m512i __T1 = _mm512_shuffle_i64x2 (__A, __A, 0x4e); __m512i __T2 = _mm512_ ##op (__A, __T1); __m512i __T3 = (__m512i) __builtin_shuffle ((__v8di) __T2, (__v8di) { 2, 3, 0, 1, 6, 7, 4, 5 }); __m512i __T4 = _mm512_ ##op (__T2, __T3); __m512i __T5 = (__m512i) __builtin_shuffle ((__v8di) __T4, (__v8di) { 1, 0, 3, 2, 5, 4, 7, 6 }); __v8di __T6 = (__v8di) _mm512_ ##op (__T4, __T5); return __T6[0]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m256d __T1 = (__m256d) _mm512_extractf64x4_pd (__A, 1); __m256d __T2 = (__m256d) _mm512_extractf64x4_pd (__A, 0); __m256d __T3 = __T1 op __T2; __m128d __T4 = _mm256_extractf128_pd (__T3, 1); __m128d __T5 = _mm256_extractf128_pd (__T3, 0); __m128d __T6 = __T4 op __T5; return __T6[0] op __T6[1]
#undef __MM512_REDUCE_OP
#define __MM512_REDUCE_OP(op) __m256d __T1 = (__m256d) _mm512_extractf64x4_pd (__A, 1); __m256d __T2 = (__m256d) _mm512_extractf64x4_pd (__A, 0); __m256d __T3 = _mm256_ ##op (__T1, __T2); __m128d __T4 = _mm256_extractf128_pd (__T3, 1); __m128d __T5 = _mm256_extractf128_pd (__T3, 0); __m128d __T6 = _mm_ ##op (__T4, __T5); __m128d __T7 = (__m128d) __builtin_shuffle (__T6, (__v2di) { 1, 0 }); __m128d __T8 = _mm_ ##op (__T6, __T7); return __T8[0]
#undef __MM512_REDUCE_OP
#ifdef __DISABLE_AVX512F__
#undef __DISABLE_AVX512F__
#pragma GCC pop_options
#endif
#endif
