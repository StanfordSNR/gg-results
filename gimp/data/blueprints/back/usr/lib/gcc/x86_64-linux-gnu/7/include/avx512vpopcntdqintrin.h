// GGHASH:ViNqdqVvvgM8Xx_sOOxDFJ1mk9764lqWZQOBSQcwveC400000c21
#if !defined _IMMINTRIN_H_INCLUDED
# error "Never use <avx512vpopcntdqintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _AVX512VPOPCNTDQINTRIN_H_INCLUDED
#define _AVX512VPOPCNTDQINTRIN_H_INCLUDED 
#ifndef __AVX512VPOPCNTDQ__
#pragma GCC push_options
#pragma GCC target("avx512vpopcntdq")
#define __DISABLE_AVX512VPOPCNTDQ__ 
#endif
#ifdef __DISABLE_AVX512VPOPCNTDQ__
#undef __DISABLE_AVX512VPOPCNTDQ__
#pragma GCC pop_options
#endif
#endif
