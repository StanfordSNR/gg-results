// GGHASH:V.HXWvV80mnghQiNT8IoK4hv6NTXDa77LsMz.Z.mIKG400022be4
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512vlbwintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512VLBWINTRIN_H_INCLUDED
#define _AVX512VLBWINTRIN_H_INCLUDED 
#if !defined(__AVX512VL__) || !defined(__AVX512BW__)
#pragma GCC push_options
#pragma GCC target("avx512vl,avx512bw")
#define __DISABLE_AVX512VLBW__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_mask_alignr_epi8(W,U,X,Y,N) ((__m256i) __builtin_ia32_palignr256_mask ((__v4di)(__m256i)(X), (__v4di)(__m256i)(Y), (int)(N * 8), (__v4di)(__m256i)(X), (__mmask32)(U)))
#define _mm256_mask_srli_epi16(W,U,A,B) ((__m256i) __builtin_ia32_psrlwi256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_srli_epi16(U,A,B) ((__m256i) __builtin_ia32_psrlwi256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)_mm256_setzero_si256 (), (__mmask16)(U)))
#define _mm_mask_srli_epi16(W,U,A,B) ((__m128i) __builtin_ia32_psrlwi128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_srli_epi16(U,A,B) ((__m128i) __builtin_ia32_psrlwi128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)_mm_setzero_si128(), (__mmask8)(U)))
#define _mm256_mask_srai_epi16(W,U,A,B) ((__m256i) __builtin_ia32_psrawi256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_srai_epi16(U,A,B) ((__m256i) __builtin_ia32_psrawi256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)_mm256_setzero_si256 (), (__mmask16)(U)))
#define _mm_mask_srai_epi16(W,U,A,B) ((__m128i) __builtin_ia32_psrawi128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_srai_epi16(U,A,B) ((__m128i) __builtin_ia32_psrawi128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)_mm_setzero_si128(), (__mmask8)(U)))
#define _mm256_mask_shufflehi_epi16(W,U,A,B) ((__m256i) __builtin_ia32_pshufhw256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_shufflehi_epi16(U,A,B) ((__m256i) __builtin_ia32_pshufhw256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)_mm256_setzero_si256 (), (__mmask16)(U)))
#define _mm_mask_shufflehi_epi16(W,U,A,B) ((__m128i) __builtin_ia32_pshufhw128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_shufflehi_epi16(U,A,B) ((__m128i) __builtin_ia32_pshufhw128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)_mm_setzero_si128 (), (__mmask8)(U)))
#define _mm256_mask_shufflelo_epi16(W,U,A,B) ((__m256i) __builtin_ia32_pshuflw256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_shufflelo_epi16(U,A,B) ((__m256i) __builtin_ia32_pshuflw256_mask ((__v16hi)(__m256i)(A), (int)(B), (__v16hi)(__m256i)_mm256_setzero_si256 (), (__mmask16)(U)))
#define _mm_mask_shufflelo_epi16(W,U,A,B) ((__m128i) __builtin_ia32_pshuflw128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_shufflelo_epi16(U,A,B) ((__m128i) __builtin_ia32_pshuflw128_mask ((__v8hi)(__m128i)(A), (int)(B), (__v8hi)(__m128i)_mm_setzero_si128 (), (__mmask8)(U)))
#define _mm256_maskz_alignr_epi8(U,X,Y,N) ((__m256i) __builtin_ia32_palignr256_mask ((__v4di)(__m256i)(X), (__v4di)(__m256i)(Y), (int)(N * 8), (__v4di)(__m256i)_mm256_setzero_si256 (), (__mmask32)(U)))
#define _mm_mask_alignr_epi8(W,U,X,Y,N) ((__m128i) __builtin_ia32_palignr128_mask ((__v2di)(__m128i)(X), (__v2di)(__m128i)(Y), (int)(N * 8), (__v2di)(__m128i)(X), (__mmask16)(U)))
#define _mm_maskz_alignr_epi8(U,X,Y,N) ((__m128i) __builtin_ia32_palignr128_mask ((__v2di)(__m128i)(X), (__v2di)(__m128i)(Y), (int)(N * 8), (__v2di)(__m128i)_mm_setzero_si128 (), (__mmask16)(U)))
#define _mm_mask_slli_epi16(W,U,X,C) ((__m128i)__builtin_ia32_psllwi128_mask ((__v8hi)(__m128i)(X), (int)(C), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_slli_epi16(U,X,C) ((__m128i)__builtin_ia32_psllwi128_mask ((__v8hi)(__m128i)(X), (int)(C), (__v8hi)(__m128i)_mm_setzero_si128 (), (__mmask8)(U)))
#define _mm256_dbsad_epu8(X,Y,C) ((__m256i) __builtin_ia32_dbpsadbw256_mask ((__v32qi)(__m256i) (X), (__v32qi)(__m256i) (Y), (int) (C), (__v16hi)(__m256i)_mm256_setzero_si256(), (__mmask16)-1))
#define _mm256_mask_slli_epi16(W,U,X,C) ((__m256i)__builtin_ia32_psllwi256_mask ((__v16hi)(__m256i)(X), (int)(C), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_slli_epi16(U,X,C) ((__m256i)__builtin_ia32_psllwi256_mask ((__v16hi)(__m256i)(X), (int)(C), (__v16hi)(__m256i)_mm256_setzero_si256 (), (__mmask16)(U)))
#define _mm256_mask_dbsad_epu8(W,U,X,Y,C) ((__m256i) __builtin_ia32_dbpsadbw256_mask ((__v32qi)(__m256i) (X), (__v32qi)(__m256i) (Y), (int) (C), (__v16hi)(__m256i)(W), (__mmask16)(U)))
#define _mm256_maskz_dbsad_epu8(U,X,Y,C) ((__m256i) __builtin_ia32_dbpsadbw256_mask ((__v32qi)(__m256i) (X), (__v32qi)(__m256i) (Y), (int) (C), (__v16hi)(__m256i)_mm256_setzero_si256(), (__mmask16)(U)))
#define _mm_dbsad_epu8(X,Y,C) ((__m128i) __builtin_ia32_dbpsadbw128_mask ((__v16qi)(__m128i) (X), (__v16qi)(__m128i) (Y), (int) (C), (__v8hi)(__m128i)_mm_setzero_si128(), (__mmask8)-1))
#define _mm_mask_dbsad_epu8(W,U,X,Y,C) ((__m128i) __builtin_ia32_dbpsadbw128_mask ((__v16qi)(__m128i) (X), (__v16qi)(__m128i) (Y), (int) (C), (__v8hi)(__m128i)(W), (__mmask8)(U)))
#define _mm_maskz_dbsad_epu8(U,X,Y,C) ((__m128i) __builtin_ia32_dbpsadbw128_mask ((__v16qi)(__m128i) (X), (__v16qi)(__m128i) (Y), (int) (C), (__v8hi)(__m128i)_mm_setzero_si128(), (__mmask8)(U)))
#define _mm_mask_blend_epi16(__U,__A,__W) ((__m128i) __builtin_ia32_blendmw_128_mask ((__v8hi) (__A), (__v8hi) (__W), (__mmask8) (__U)))
#define _mm_mask_blend_epi8(__U,__A,__W) ((__m128i) __builtin_ia32_blendmb_128_mask ((__v16qi) (__A), (__v16qi) (__W), (__mmask16) (__U)))
#define _mm256_mask_blend_epi16(__U,__A,__W) ((__m256i) __builtin_ia32_blendmw_256_mask ((__v16hi) (__A), (__v16hi) (__W), (__mmask16) (__U)))
#define _mm256_mask_blend_epi8(__U,__A,__W) ((__m256i) __builtin_ia32_blendmb_256_mask ((__v32qi) (__A), (__v32qi) (__W), (__mmask32) (__U)))
#define _mm_cmp_epi16_mask(X,Y,P) ((__mmask8) __builtin_ia32_cmpw128_mask ((__v8hi)(__m128i)(X), (__v8hi)(__m128i)(Y), (int)(P), (__mmask8)(-1)))
#define _mm_cmp_epi8_mask(X,Y,P) ((__mmask16) __builtin_ia32_cmpb128_mask ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(P), (__mmask16)(-1)))
#define _mm256_cmp_epi16_mask(X,Y,P) ((__mmask16) __builtin_ia32_cmpw256_mask ((__v16hi)(__m256i)(X), (__v16hi)(__m256i)(Y), (int)(P), (__mmask16)(-1)))
#define _mm256_cmp_epi8_mask(X,Y,P) ((__mmask32) __builtin_ia32_cmpb256_mask ((__v32qi)(__m256i)(X), (__v32qi)(__m256i)(Y), (int)(P), (__mmask32)(-1)))
#define _mm_cmp_epu16_mask(X,Y,P) ((__mmask8) __builtin_ia32_ucmpw128_mask ((__v8hi)(__m128i)(X), (__v8hi)(__m128i)(Y), (int)(P), (__mmask8)(-1)))
#define _mm_cmp_epu8_mask(X,Y,P) ((__mmask16) __builtin_ia32_ucmpb128_mask ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(P), (__mmask16)(-1)))
#define _mm256_cmp_epu16_mask(X,Y,P) ((__mmask16) __builtin_ia32_ucmpw256_mask ((__v16hi)(__m256i)(X), (__v16hi)(__m256i)(Y), (int)(P), (__mmask16)(-1)))
#define _mm256_cmp_epu8_mask(X,Y,P) ((__mmask32) __builtin_ia32_ucmpb256_mask ((__v32qi)(__m256i)(X), (__v32qi)(__m256i)(Y), (int)(P), (__mmask32)-1))
#define _mm_mask_cmp_epi16_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_cmpw128_mask ((__v8hi)(__m128i)(X), (__v8hi)(__m128i)(Y), (int)(P), (__mmask16)(M)))
#define _mm_mask_cmp_epi8_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_cmpb128_mask ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(P), (__mmask16)(M)))
#define _mm256_mask_cmp_epi16_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_cmpw256_mask ((__v16hi)(__m256i)(X), (__v16hi)(__m256i)(Y), (int)(P), (__mmask16)(M)))
#define _mm256_mask_cmp_epi8_mask(M,X,Y,P) ((__mmask32) __builtin_ia32_cmpb256_mask ((__v32qi)(__m256i)(X), (__v32qi)(__m256i)(Y), (int)(P), (__mmask32)(M)))
#define _mm_mask_cmp_epu16_mask(M,X,Y,P) ((__mmask8) __builtin_ia32_ucmpw128_mask ((__v8hi)(__m128i)(X), (__v8hi)(__m128i)(Y), (int)(P), (__mmask8)(M)))
#define _mm_mask_cmp_epu8_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_ucmpb128_mask ((__v16qi)(__m128i)(X), (__v16qi)(__m128i)(Y), (int)(P), (__mmask16)(M)))
#define _mm256_mask_cmp_epu16_mask(M,X,Y,P) ((__mmask16) __builtin_ia32_ucmpw256_mask ((__v16hi)(__m256i)(X), (__v16hi)(__m256i)(Y), (int)(P), (__mmask16)(M)))
#define _mm256_mask_cmp_epu8_mask(M,X,Y,P) ((__mmask32) __builtin_ia32_ucmpb256_mask ((__v32qi)(__m256i)(X), (__v32qi)(__m256i)(Y), (int)(P), (__mmask32)M))
#endif
#ifdef __DISABLE_AVX512VLBW__
#undef __DISABLE_AVX512VLBW__
#pragma GCC pop_options
#endif
#endif
