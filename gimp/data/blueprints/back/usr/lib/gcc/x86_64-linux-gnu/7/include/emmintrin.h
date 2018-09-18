// GGHASH:VDx7VFmy.AGTExo9DDJtFbhNiMcg4Nhy9MEQPf_K6COk0000c715
#ifndef _EMMINTRIN_H_INCLUDED
#define _EMMINTRIN_H_INCLUDED 
#include <xmmintrin.h>
#ifndef __SSE2__
#pragma GCC push_options
#pragma GCC target("sse2")
#define __DISABLE_SSE2__ 
#endif
#define _MM_SHUFFLE2(fp1,fp0) (((fp1) << 1) | (fp0))
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_shuffle_pd(A,B,N) ((__m128d)__builtin_ia32_shufpd ((__v2df)(__m128d)(A), (__v2df)(__m128d)(B), (int)(N)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_bsrli_si128(A,N) ((__m128i)__builtin_ia32_psrldqi128 ((__m128i)(A), (int)(N) * 8))
#define _mm_bslli_si128(A,N) ((__m128i)__builtin_ia32_pslldqi128 ((__m128i)(A), (int)(N) * 8))
#define _mm_srli_si128(A,N) ((__m128i)__builtin_ia32_psrldqi128 ((__m128i)(A), (int)(N) * 8))
#define _mm_slli_si128(A,N) ((__m128i)__builtin_ia32_pslldqi128 ((__m128i)(A), (int)(N) * 8))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_extract_epi16(A,N) ((int) (unsigned short) __builtin_ia32_vec_ext_v8hi ((__v8hi)(__m128i)(A), (int)(N)))
#define _mm_insert_epi16(A,D,N) ((__m128i) __builtin_ia32_vec_set_v8hi ((__v8hi)(__m128i)(A), (int)(D), (int)(N)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_shufflehi_epi16(A,N) ((__m128i)__builtin_ia32_pshufhw ((__v8hi)(__m128i)(A), (int)(N)))
#define _mm_shufflelo_epi16(A,N) ((__m128i)__builtin_ia32_pshuflw ((__v8hi)(__m128i)(A), (int)(N)))
#define _mm_shuffle_epi32(A,N) ((__m128i)__builtin_ia32_pshufd ((__v4si)(__m128i)(A), (int)(N)))
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_SSE2__
#undef __DISABLE_SSE2__
#pragma GCC pop_options
#endif
#endif
