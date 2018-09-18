// GGHASH:VcORzjT.OQZkD4Macv7kgUYxiwXMpYP0WYuStt4FfGGE000189a8
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512bwintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512BWINTRIN_H_INCLUDED
#define _AVX512BWINTRIN_H_INCLUDED 
#ifndef __AVX512BW__
#pragma GCC push_options
#pragma GCC target("avx512bw")
#define __DISABLE_AVX512BW__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _kshiftli_mask32(X,Y) ((__mmask32) __builtin_ia32_kshiftlisi ((__mmask32)(X), (__mmask8)(Y)))
#define _kshiftli_mask64(X,Y) ((__mmask64) __builtin_ia32_kshiftlidi ((__mmask64)(X), (__mmask8)(Y)))
#define _kshiftri_mask32(X,Y) ((__mmask32) __builtin_ia32_kshiftrisi ((__mmask32)(X), (__mmask8)(Y)))
#define _kshiftri_mask64(X,Y) ((__mmask64) __builtin_ia32_kshiftridi ((__mmask64)(X), (__mmask8)(Y)))
#define _mm512_alignr_epi8(X,Y,N) ((__m512i) __builtin_ia32_palignr512 ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(N * 8)))
#define _mm512_mask_alignr_epi8(W,U,X,Y,N) ((__m512i) __builtin_ia32_palignr512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(N * 8), (__v8di)(__m512i)(W), (__mmask64)(U)))
#define _mm512_maskz_alignr_epi8(U,X,Y,N) ((__m512i) __builtin_ia32_palignr512_mask ((__v8di)(__m512i)(X), (__v8di)(__m512i)(Y), (int)(N * 8), (__v8di)(__m512i) _mm512_setzero_si512 (), (__mmask64)(U)))
#define _mm512_dbsad_epu8(X,Y,C) ((__m512i) __builtin_ia32_dbpsadbw512_mask ((__v64qi)(__m512i) (X), (__v64qi)(__m512i) (Y), (int) (C), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_dbsad_epu8(W,U,X,Y,C) ((__m512i) __builtin_ia32_dbpsadbw512_mask ((__v64qi)(__m512i) (X), (__v64qi)(__m512i) (Y), (int) (C), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_dbsad_epu8(U,X,Y,C) ((__m512i) __builtin_ia32_dbpsadbw512_mask ((__v64qi)(__m512i) (X), (__v64qi)(__m512i) (Y), (int) (C), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_srli_epi16(A,B) ((__m512i) __builtin_ia32_psrlwi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)_mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_srli_epi16(W,U,A,B) ((__m512i) __builtin_ia32_psrlwi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_srli_epi16(U,A,B) ((__m512i) __builtin_ia32_psrlwi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)_mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_slli_epi16(X,C) ((__m512i)__builtin_ia32_psllwi512_mask ((__v32hi)(__m512i)(X), (int)(C), (__v32hi)(__m512i)_mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_slli_epi16(W,U,X,C) ((__m512i)__builtin_ia32_psllwi512_mask ((__v32hi)(__m512i)(X), (int)(C), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_slli_epi16(U,X,C) ((__m512i)__builtin_ia32_psllwi512_mask ((__v32hi)(__m512i)(X), (int)(C), (__v32hi)(__m512i)_mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_shufflehi_epi16(A,B) ((__m512i) __builtin_ia32_pshufhw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_shufflehi_epi16(W,U,A,B) ((__m512i) __builtin_ia32_pshufhw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_shufflehi_epi16(U,A,B) ((__m512i) __builtin_ia32_pshufhw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_shufflelo_epi16(A,B) ((__m512i) __builtin_ia32_pshuflw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_shufflelo_epi16(W,U,A,B) ((__m512i) __builtin_ia32_pshuflw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_shufflelo_epi16(U,A,B) ((__m512i) __builtin_ia32_pshuflw512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i) _mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_srai_epi16(A,B) ((__m512i) __builtin_ia32_psrawi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)_mm512_setzero_si512 (), (__mmask32)-1))
#define _mm512_mask_srai_epi16(W,U,A,B) ((__m512i) __builtin_ia32_psrawi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)(__m512i)(W), (__mmask32)(U)))
#define _mm512_maskz_srai_epi16(U,A,B) ((__m512i) __builtin_ia32_psrawi512_mask ((__v32hi)(__m512i)(A), (int)(B), (__v32hi)_mm512_setzero_si512 (), (__mmask32)(U)))
#define _mm512_mask_blend_epi16(__U,__A,__W) ((__m512i) __builtin_ia32_blendmw_512_mask ((__v32hi) (__A), (__v32hi) (__W), (__mmask32) (__U)))
#define _mm512_mask_blend_epi8(__U,__A,__W) ((__m512i) __builtin_ia32_blendmb_512_mask ((__v64qi) (__A), (__v64qi) (__W), (__mmask64) (__U)))
#define _mm512_cmp_epi16_mask(X,Y,P) ((__mmask32) __builtin_ia32_cmpw512_mask ((__v32hi)(__m512i)(X), (__v32hi)(__m512i)(Y), (int)(P), (__mmask32)(-1)))
#define _mm512_cmp_epi8_mask(X,Y,P) ((__mmask64) __builtin_ia32_cmpb512_mask ((__v64qi)(__m512i)(X), (__v64qi)(__m512i)(Y), (int)(P), (__mmask64)(-1)))
#define _mm512_cmp_epu16_mask(X,Y,P) ((__mmask32) __builtin_ia32_ucmpw512_mask ((__v32hi)(__m512i)(X), (__v32hi)(__m512i)(Y), (int)(P), (__mmask32)(-1)))
#define _mm512_cmp_epu8_mask(X,Y,P) ((__mmask64) __builtin_ia32_ucmpb512_mask ((__v64qi)(__m512i)(X), (__v64qi)(__m512i)(Y), (int)(P), (__mmask64)(-1)))
#define _mm512_mask_cmp_epi16_mask(M,X,Y,P) ((__mmask32) __builtin_ia32_cmpw512_mask ((__v32hi)(__m512i)(X), (__v32hi)(__m512i)(Y), (int)(P), (__mmask32)(M)))
#define _mm512_mask_cmp_epi8_mask(M,X,Y,P) ((__mmask64) __builtin_ia32_cmpb512_mask ((__v64qi)(__m512i)(X), (__v64qi)(__m512i)(Y), (int)(P), (__mmask64)(M)))
#define _mm512_mask_cmp_epu16_mask(M,X,Y,P) ((__mmask32) __builtin_ia32_ucmpw512_mask ((__v32hi)(__m512i)(X), (__v32hi)(__m512i)(Y), (int)(P), (__mmask32)(M)))
#define _mm512_mask_cmp_epu8_mask(M,X,Y,P) ((__mmask64) __builtin_ia32_ucmpb512_mask ((__v64qi)(__m512i)(X), (__v64qi)(__m512i)(Y), (int)(P), (__mmask64)(M)))
#define _mm512_bslli_epi128(A,N) ((__m512i)__builtin_ia32_pslldq512 ((__m512i)(A), (int)(N) * 8))
#define _mm512_bsrli_epi128(A,N) ((__m512i)__builtin_ia32_psrldq512 ((__m512i)(A), (int)(N) * 8))
#endif
#ifdef __DISABLE_AVX512BW__
#undef __DISABLE_AVX512BW__
#pragma GCC pop_options
#endif
#endif
