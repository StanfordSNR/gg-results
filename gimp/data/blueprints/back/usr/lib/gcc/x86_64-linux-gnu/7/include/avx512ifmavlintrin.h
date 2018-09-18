// GGHASH:VzdCGrDFxPV4YukV.vmqw5luAU5TwtYOuMfkofOHPwdE00001509
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512ifmavlintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512IFMAVLINTRIN_H_INCLUDED
#define _AVX512IFMAVLINTRIN_H_INCLUDED 
#if !defined(__AVX512VL__) || !defined(__AVX512IFMA__)
#pragma GCC push_options
#pragma GCC target("avx512ifma,avx512vl")
#define __DISABLE_AVX512IFMAVL__ 
#endif
#ifdef __DISABLE_AVX512IFMAVL__
#undef __DISABLE_AVX512IFMAVL__
#pragma GCC pop_options
#endif
#endif
