// GGHASH:VAfnQ3yUhUbR9gA0gZEG9Q_zyaYiU4pO7CmDjG5D3v0c0000a4e2
#ifndef _XMMINTRIN_H_INCLUDED
#define _XMMINTRIN_H_INCLUDED 
#include <mmintrin.h>
#include <mm_malloc.h>
#ifdef __OPTIMIZE__
#else
#define _mm_prefetch(P,I) __builtin_prefetch ((P), ((I & 0x4) >> 2), (I & 0x3))
#endif
#ifndef __SSE__
#pragma GCC push_options
#pragma GCC target("sse")
#define __DISABLE_SSE__ 
#endif
#define _MM_SHUFFLE(fp3,fp2,fp1,fp0) (((fp3) << 6) | ((fp2) << 4) | ((fp1) << 2) | (fp0))
#define _MM_EXCEPT_MASK 0x003f
#define _MM_EXCEPT_INVALID 0x0001
#define _MM_EXCEPT_DENORM 0x0002
#define _MM_EXCEPT_DIV_ZERO 0x0004
#define _MM_EXCEPT_OVERFLOW 0x0008
#define _MM_EXCEPT_UNDERFLOW 0x0010
#define _MM_EXCEPT_INEXACT 0x0020
#define _MM_MASK_MASK 0x1f80
#define _MM_MASK_INVALID 0x0080
#define _MM_MASK_DENORM 0x0100
#define _MM_MASK_DIV_ZERO 0x0200
#define _MM_MASK_OVERFLOW 0x0400
#define _MM_MASK_UNDERFLOW 0x0800
#define _MM_MASK_INEXACT 0x1000
#define _MM_ROUND_MASK 0x6000
#define _MM_ROUND_NEAREST 0x0000
#define _MM_ROUND_DOWN 0x2000
#define _MM_ROUND_UP 0x4000
#define _MM_ROUND_TOWARD_ZERO 0x6000
#define _MM_FLUSH_ZERO_MASK 0x8000
#define _MM_FLUSH_ZERO_ON 0x8000
#define _MM_FLUSH_ZERO_OFF 0x0000
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_shuffle_ps(A,B,MASK) ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(A), (__v4sf)(__m128)(B), (int)(MASK)))
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_extract_pi16(A,N) ((int) __builtin_ia32_vec_ext_v4hi ((__v4hi)(__m64)(A), (int)(N)))
#define _m_pextrw(A,N) _mm_extract_pi16(A, N)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_insert_pi16(A,D,N) ((__m64) __builtin_ia32_vec_set_v4hi ((__v4hi)(__m64)(A), (int)(D), (int)(N)))
#define _m_pinsrw(A,D,N) _mm_insert_pi16(A, D, N)
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_shuffle_pi16(A,N) ((__m64) __builtin_ia32_pshufw ((__v4hi)(__m64)(A), (int)(N)))
#define _m_pshufw(A,N) _mm_shuffle_pi16 (A, N)
#endif
#define _MM_TRANSPOSE4_PS(row0,row1,row2,row3) do { __v4sf __r0 = (row0), __r1 = (row1), __r2 = (row2), __r3 = (row3); __v4sf __t0 = __builtin_ia32_unpcklps (__r0, __r1); __v4sf __t1 = __builtin_ia32_unpcklps (__r2, __r3); __v4sf __t2 = __builtin_ia32_unpckhps (__r0, __r1); __v4sf __t3 = __builtin_ia32_unpckhps (__r2, __r3); (row0) = __builtin_ia32_movlhps (__t0, __t1); (row1) = __builtin_ia32_movhlps (__t1, __t0); (row2) = __builtin_ia32_movlhps (__t2, __t3); (row3) = __builtin_ia32_movhlps (__t3, __t2); } while (0)
# include <emmintrin.h>
#ifdef __DISABLE_SSE__
#undef __DISABLE_SSE__
#pragma GCC pop_options
#endif
#endif
