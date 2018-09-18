// GGHASH:ViPd8XHAoDOFkpuaM_YsGHWL9MGn13_7j4Wboj3XHtnc00000d4e
#if !defined _X86INTRIN_H_INCLUDED && !defined _IMMINTRIN_H_INCLUDED
# error "Never use <f16intrin.h> directly; include <x86intrin.h> or <immintrin.h> instead."
#endif
#ifndef _F16CINTRIN_H_INCLUDED
#define _F16CINTRIN_H_INCLUDED 
#ifndef __F16C__
#pragma GCC push_options
#pragma GCC target("f16c")
#define __DISABLE_F16C__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _cvtss_sh(__F,__I) (__extension__ ({ __v4sf __A = __extension__ (__v4sf){ __F, 0, 0, 0 }; __v8hi __H = __builtin_ia32_vcvtps2ph (__A, __I); (unsigned short) __builtin_ia32_vec_ext_v8hi (__H, 0); }))
#define _mm_cvtps_ph(A,I) ((__m128i) __builtin_ia32_vcvtps2ph ((__v4sf)(__m128) A, (int) (I)))
#define _mm256_cvtps_ph(A,I) ((__m128i) __builtin_ia32_vcvtps2ph256 ((__v8sf)(__m256) A, (int) (I)))
#endif
#ifdef __DISABLE_F16C__
#undef __DISABLE_F16C__
#pragma GCC pop_options
#endif
#endif
