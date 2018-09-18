// GGHASH:VOQ5yz1bTzJLg3edxhEQWDArnM5.chLMDX8QG_QhVXYM00000d66
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512ifmaintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512IFMAINTRIN_H_INCLUDED
#define _AVX512IFMAINTRIN_H_INCLUDED 
#ifndef __AVX512IFMA__
#pragma GCC push_options
#pragma GCC target("avx512ifma")
#define __DISABLE_AVX512IFMA__ 
#endif
#ifdef __DISABLE_AVX512IFMA__
#undef __DISABLE_AVX512IFMA__
#pragma GCC pop_options
#endif
#endif
