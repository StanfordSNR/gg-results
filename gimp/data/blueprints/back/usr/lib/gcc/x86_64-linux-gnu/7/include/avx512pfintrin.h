// GGHASH:Vu1OSfeeNVGvp.2W0BACVeRPR7zyysadsedeo9kpqBGc00002736
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512pfintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512PFINTRIN_H_INCLUDED
#define _AVX512PFINTRIN_H_INCLUDED 
#ifndef __AVX512PF__
#pragma GCC push_options
#pragma GCC target("avx512pf")
#define __DISABLE_AVX512PF__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm512_prefetch_i32gather_pd(INDEX,ADDR,SCALE,HINT) __builtin_ia32_gatherpfdpd ((__mmask8)0xFF, (__v8si)(__m256i)INDEX, (void const *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i32gather_ps(INDEX,ADDR,SCALE,HINT) __builtin_ia32_gatherpfdps ((__mmask16)0xFFFF, (__v16si)(__m512i)INDEX, (void const *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i32gather_pd(INDEX,MASK,ADDR,SCALE,HINT) __builtin_ia32_gatherpfdpd ((__mmask8)MASK, (__v8si)(__m256i)INDEX, (void const *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i32gather_ps(INDEX,MASK,ADDR,SCALE,HINT) __builtin_ia32_gatherpfdps ((__mmask16)MASK, (__v16si)(__m512i)INDEX, (void const *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i64gather_pd(INDEX,ADDR,SCALE,HINT) __builtin_ia32_gatherpfqpd ((__mmask8)0xFF, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i64gather_ps(INDEX,ADDR,SCALE,HINT) __builtin_ia32_gatherpfqps ((__mmask8)0xFF, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i64gather_pd(INDEX,MASK,ADDR,SCALE,HINT) __builtin_ia32_gatherpfqpd ((__mmask8)MASK, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i64gather_ps(INDEX,MASK,ADDR,SCALE,HINT) __builtin_ia32_gatherpfqps ((__mmask8)MASK, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i32scatter_pd(ADDR,INDEX,SCALE,HINT) __builtin_ia32_scatterpfdpd ((__mmask8)0xFF, (__v8si)(__m256i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i32scatter_ps(ADDR,INDEX,SCALE,HINT) __builtin_ia32_scatterpfdps ((__mmask16)0xFFFF, (__v16si)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i32scatter_pd(ADDR,MASK,INDEX,SCALE,HINT) __builtin_ia32_scatterpfdpd ((__mmask8)MASK, (__v8si)(__m256i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i32scatter_ps(ADDR,MASK,INDEX,SCALE,HINT) __builtin_ia32_scatterpfdps ((__mmask16)MASK, (__v16si)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i64scatter_pd(ADDR,INDEX,SCALE,HINT) __builtin_ia32_scatterpfqpd ((__mmask8)0xFF, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_prefetch_i64scatter_ps(ADDR,INDEX,SCALE,HINT) __builtin_ia32_scatterpfqps ((__mmask8)0xFF, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i64scatter_pd(ADDR,MASK,INDEX,SCALE,HINT) __builtin_ia32_scatterpfqpd ((__mmask8)MASK, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#define _mm512_mask_prefetch_i64scatter_ps(ADDR,MASK,INDEX,SCALE,HINT) __builtin_ia32_scatterpfqps ((__mmask8)MASK, (__v8di)(__m512i)INDEX, (void *)ADDR, (int)SCALE, (int)HINT)
#endif
#ifdef __DISABLE_AVX512PF__
#undef __DISABLE_AVX512PF__
#pragma GCC pop_options
#endif
#endif
