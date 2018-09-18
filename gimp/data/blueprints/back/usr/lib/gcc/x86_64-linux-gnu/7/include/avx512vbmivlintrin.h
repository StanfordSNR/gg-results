// GGHASH:Vb_YgBBqzJU4b6hDSseMyjH7l8JgdVnNIGZfBshlGGIs000020ac
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512vbmivlintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512VBMIVLINTRIN_H_INCLUDED
#define _AVX512VBMIVLINTRIN_H_INCLUDED 
#if !defined(__AVX512VL__) || !defined(__AVX512VBMI__)
#pragma GCC push_options
#pragma GCC target("avx512vbmi,avx512vl")
#define __DISABLE_AVX512VBMIVL__ 
#endif
#ifdef __DISABLE_AVX512VBMIVL__
#undef __DISABLE_AVX512VBMIVL__
#pragma GCC pop_options
#endif
#endif
