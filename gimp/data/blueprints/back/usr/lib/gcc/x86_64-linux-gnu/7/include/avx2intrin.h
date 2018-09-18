// GGHASH:VzsuzcI_rJGPXW2Nj5kB8KFElP_2LFUvHt5CX66rprf00000e2ae
#ifndef _IMMINTRIN_H_INCLUDED
# error "Never use <avx2intrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX2INTRIN_H_INCLUDED
#define _AVX2INTRIN_H_INCLUDED 
#ifndef __AVX2__
#pragma GCC push_options
#pragma GCC target("avx2")
#define __DISABLE_AVX2__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_mpsadbw_epu8(X,Y,M) ((__m256i) __builtin_ia32_mpsadbw256 ((__v32qi)(__m256i)(X), (__v32qi)(__m256i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_alignr_epi8(A,B,N) ((__m256i) __builtin_ia32_palignr256 ((__v4di)(__m256i)(A), (__v4di)(__m256i)(B), (int)(N) * 8))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_blend_epi16(X,Y,M) ((__m256i) __builtin_ia32_pblendw256 ((__v16hi)(__m256i)(X), (__v16hi)(__m256i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_shuffle_epi32(A,N) ((__m256i)__builtin_ia32_pshufd256 ((__v8si)(__m256i)(A), (int)(N)))
#define _mm256_shufflehi_epi16(A,N) ((__m256i)__builtin_ia32_pshufhw256 ((__v16hi)(__m256i)(A), (int)(N)))
#define _mm256_shufflelo_epi16(A,N) ((__m256i)__builtin_ia32_pshuflw256 ((__v16hi)(__m256i)(A), (int)(N)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_bslli_epi128(A,N) ((__m256i)__builtin_ia32_pslldqi256 ((__m256i)(A), (int)(N) * 8))
#define _mm256_slli_si256(A,N) ((__m256i)__builtin_ia32_pslldqi256 ((__m256i)(A), (int)(N) * 8))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_bsrli_epi128(A,N) ((__m256i)__builtin_ia32_psrldqi256 ((__m256i)(A), (int)(N) * 8))
#define _mm256_srli_si256(A,N) ((__m256i)__builtin_ia32_psrldqi256 ((__m256i)(A), (int)(N) * 8))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_blend_epi32(X,Y,M) ((__m128i) __builtin_ia32_pblendd128 ((__v4si)(__m128i)(X), (__v4si)(__m128i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_blend_epi32(X,Y,M) ((__m256i) __builtin_ia32_pblendd256 ((__v8si)(__m256i)(X), (__v8si)(__m256i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_permute4x64_pd(X,M) ((__m256d) __builtin_ia32_permdf256 ((__v4df)(__m256d)(X), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_permute4x64_epi64(X,M) ((__m256i) __builtin_ia32_permdi256 ((__v4di)(__m256i)(X), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_permute2x128_si256(X,Y,M) ((__m256i) __builtin_ia32_permti256 ((__v4di)(__m256i)(X), (__v4di)(__m256i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_extracti128_si256(X,M) ((__m128i) __builtin_ia32_extract128i256 ((__v4di)(__m256i)(X), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm256_inserti128_si256(X,Y,M) ((__m256i) __builtin_ia32_insert128i256 ((__v4di)(__m256i)(X), (__v2di)(__m128i)(Y), (int)(M)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_i32gather_pd(BASE,INDEX,SCALE) (__m128d) __builtin_ia32_gathersiv2df ((__v2df) _mm_setzero_pd (), (double const *)BASE, (__v4si)(__m128i)INDEX, (__v2df)_mm_set1_pd( (double)(long long int) -1), (int)SCALE)
#define _mm_mask_i32gather_pd(SRC,BASE,INDEX,MASK,SCALE) (__m128d) __builtin_ia32_gathersiv2df ((__v2df)(__m128d)SRC, (double const *)BASE, (__v4si)(__m128i)INDEX, (__v2df)(__m128d)MASK, (int)SCALE)
#define _mm256_i32gather_pd(BASE,INDEX,SCALE) (__m256d) __builtin_ia32_gathersiv4df ((__v4df) _mm256_setzero_pd (), (double const *)BASE, (__v4si)(__m128i)INDEX, (__v4df)_mm256_set1_pd( (double)(long long int) -1), (int)SCALE)
#define _mm256_mask_i32gather_pd(SRC,BASE,INDEX,MASK,SCALE) (__m256d) __builtin_ia32_gathersiv4df ((__v4df)(__m256d)SRC, (double const *)BASE, (__v4si)(__m128i)INDEX, (__v4df)(__m256d)MASK, (int)SCALE)
#define _mm_i64gather_pd(BASE,INDEX,SCALE) (__m128d) __builtin_ia32_gatherdiv2df ((__v2df) _mm_setzero_pd (), (double const *)BASE, (__v2di)(__m128i)INDEX, (__v2df)_mm_set1_pd( (double)(long long int) -1), (int)SCALE)
#define _mm_mask_i64gather_pd(SRC,BASE,INDEX,MASK,SCALE) (__m128d) __builtin_ia32_gatherdiv2df ((__v2df)(__m128d)SRC, (double const *)BASE, (__v2di)(__m128i)INDEX, (__v2df)(__m128d)MASK, (int)SCALE)
#define _mm256_i64gather_pd(BASE,INDEX,SCALE) (__m256d) __builtin_ia32_gatherdiv4df ((__v4df) _mm256_setzero_pd (), (double const *)BASE, (__v4di)(__m256i)INDEX, (__v4df)_mm256_set1_pd( (double)(long long int) -1), (int)SCALE)
#define _mm256_mask_i64gather_pd(SRC,BASE,INDEX,MASK,SCALE) (__m256d) __builtin_ia32_gatherdiv4df ((__v4df)(__m256d)SRC, (double const *)BASE, (__v4di)(__m256i)INDEX, (__v4df)(__m256d)MASK, (int)SCALE)
#define _mm_i32gather_ps(BASE,INDEX,SCALE) (__m128) __builtin_ia32_gathersiv4sf ((__v4sf) _mm_setzero_ps (), (float const *)BASE, (__v4si)(__m128i)INDEX, _mm_set1_ps ((float)(int) -1), (int)SCALE)
#define _mm_mask_i32gather_ps(SRC,BASE,INDEX,MASK,SCALE) (__m128) __builtin_ia32_gathersiv4sf ((__v4sf)(__m128d)SRC, (float const *)BASE, (__v4si)(__m128i)INDEX, (__v4sf)(__m128d)MASK, (int)SCALE)
#define _mm256_i32gather_ps(BASE,INDEX,SCALE) (__m256) __builtin_ia32_gathersiv8sf ((__v8sf) _mm256_setzero_ps (), (float const *)BASE, (__v8si)(__m256i)INDEX, (__v8sf)_mm256_set1_ps ( (float)(int) -1), (int)SCALE)
#define _mm256_mask_i32gather_ps(SRC,BASE,INDEX,MASK,SCALE) (__m256) __builtin_ia32_gathersiv8sf ((__v8sf)(__m256)SRC, (float const *)BASE, (__v8si)(__m256i)INDEX, (__v8sf)(__m256d)MASK, (int)SCALE)
#define _mm_i64gather_ps(BASE,INDEX,SCALE) (__m128) __builtin_ia32_gatherdiv4sf ((__v4sf) _mm_setzero_pd (), (float const *)BASE, (__v2di)(__m128i)INDEX, (__v4sf)_mm_set1_ps ( (float)(int) -1), (int)SCALE)
#define _mm_mask_i64gather_ps(SRC,BASE,INDEX,MASK,SCALE) (__m128) __builtin_ia32_gatherdiv4sf ((__v4sf)(__m128)SRC, (float const *)BASE, (__v2di)(__m128i)INDEX, (__v4sf)(__m128d)MASK, (int)SCALE)
#define _mm256_i64gather_ps(BASE,INDEX,SCALE) (__m128) __builtin_ia32_gatherdiv4sf256 ((__v4sf) _mm_setzero_ps (), (float const *)BASE, (__v4di)(__m256i)INDEX, (__v4sf)_mm_set1_ps( (float)(int) -1), (int)SCALE)
#define _mm256_mask_i64gather_ps(SRC,BASE,INDEX,MASK,SCALE) (__m128) __builtin_ia32_gatherdiv4sf256 ((__v4sf)(__m128)SRC, (float const *)BASE, (__v4di)(__m256i)INDEX, (__v4sf)(__m128)MASK, (int)SCALE)
#define _mm_i32gather_epi64(BASE,INDEX,SCALE) (__m128i) __builtin_ia32_gathersiv2di ((__v2di) _mm_setzero_si128 (), (long long const *)BASE, (__v4si)(__m128i)INDEX, (__v2di)_mm_set1_epi64x (-1), (int)SCALE)
#define _mm_mask_i32gather_epi64(SRC,BASE,INDEX,MASK,SCALE) (__m128i) __builtin_ia32_gathersiv2di ((__v2di)(__m128i)SRC, (long long const *)BASE, (__v4si)(__m128i)INDEX, (__v2di)(__m128i)MASK, (int)SCALE)
#define _mm256_i32gather_epi64(BASE,INDEX,SCALE) (__m256i) __builtin_ia32_gathersiv4di ((__v4di) _mm256_setzero_si256 (), (long long const *)BASE, (__v4si)(__m128i)INDEX, (__v4di)_mm256_set1_epi64x (-1), (int)SCALE)
#define _mm256_mask_i32gather_epi64(SRC,BASE,INDEX,MASK,SCALE) (__m256i) __builtin_ia32_gathersiv4di ((__v4di)(__m256i)SRC, (long long const *)BASE, (__v4si)(__m128i)INDEX, (__v4di)(__m256i)MASK, (int)SCALE)
#define _mm_i64gather_epi64(BASE,INDEX,SCALE) (__m128i) __builtin_ia32_gatherdiv2di ((__v2di) _mm_setzero_si128 (), (long long const *)BASE, (__v2di)(__m128i)INDEX, (__v2di)_mm_set1_epi64x (-1), (int)SCALE)
#define _mm_mask_i64gather_epi64(SRC,BASE,INDEX,MASK,SCALE) (__m128i) __builtin_ia32_gatherdiv2di ((__v2di)(__m128i)SRC, (long long const *)BASE, (__v2di)(__m128i)INDEX, (__v2di)(__m128i)MASK, (int)SCALE)
#define _mm256_i64gather_epi64(BASE,INDEX,SCALE) (__m256i) __builtin_ia32_gatherdiv4di ((__v4di) _mm256_setzero_si256 (), (long long const *)BASE, (__v4di)(__m256i)INDEX, (__v4di)_mm256_set1_epi64x (-1), (int)SCALE)
#define _mm256_mask_i64gather_epi64(SRC,BASE,INDEX,MASK,SCALE) (__m256i) __builtin_ia32_gatherdiv4di ((__v4di)(__m256i)SRC, (long long const *)BASE, (__v4di)(__m256i)INDEX, (__v4di)(__m256i)MASK, (int)SCALE)
#define _mm_i32gather_epi32(BASE,INDEX,SCALE) (__m128i) __builtin_ia32_gathersiv4si ((__v4si) _mm_setzero_si128 (), (int const *)BASE, (__v4si)(__m128i)INDEX, (__v4si)_mm_set1_epi32 (-1), (int)SCALE)
#define _mm_mask_i32gather_epi32(SRC,BASE,INDEX,MASK,SCALE) (__m128i) __builtin_ia32_gathersiv4si ((__v4si)(__m128i)SRC, (int const *)BASE, (__v4si)(__m128i)INDEX, (__v4si)(__m128i)MASK, (int)SCALE)
#define _mm256_i32gather_epi32(BASE,INDEX,SCALE) (__m256i) __builtin_ia32_gathersiv8si ((__v8si) _mm256_setzero_si256 (), (int const *)BASE, (__v8si)(__m256i)INDEX, (__v8si)_mm256_set1_epi32 (-1), (int)SCALE)
#define _mm256_mask_i32gather_epi32(SRC,BASE,INDEX,MASK,SCALE) (__m256i) __builtin_ia32_gathersiv8si ((__v8si)(__m256i)SRC, (int const *)BASE, (__v8si)(__m256i)INDEX, (__v8si)(__m256i)MASK, (int)SCALE)
#define _mm_i64gather_epi32(BASE,INDEX,SCALE) (__m128i) __builtin_ia32_gatherdiv4si ((__v4si) _mm_setzero_si128 (), (int const *)BASE, (__v2di)(__m128i)INDEX, (__v4si)_mm_set1_epi32 (-1), (int)SCALE)
#define _mm_mask_i64gather_epi32(SRC,BASE,INDEX,MASK,SCALE) (__m128i) __builtin_ia32_gatherdiv4si ((__v4si)(__m128i)SRC, (int const *)BASE, (__v2di)(__m128i)INDEX, (__v4si)(__m128i)MASK, (int)SCALE)
#define _mm256_i64gather_epi32(BASE,INDEX,SCALE) (__m128i) __builtin_ia32_gatherdiv4si256 ((__v4si) _mm_setzero_si128 (), (int const *)BASE, (__v4di)(__m256i)INDEX, (__v4si)_mm_set1_epi32(-1), (int)SCALE)
#define _mm256_mask_i64gather_epi32(SRC,BASE,INDEX,MASK,SCALE) (__m128i) __builtin_ia32_gatherdiv4si256 ((__v4si)(__m128i)SRC, (int const *)BASE, (__v4di)(__m256i)INDEX, (__v4si)(__m128i)MASK, (int)SCALE)
#endif
#ifdef __DISABLE_AVX2__
#undef __DISABLE_AVX2__
#pragma GCC pop_options
#endif
#endif
