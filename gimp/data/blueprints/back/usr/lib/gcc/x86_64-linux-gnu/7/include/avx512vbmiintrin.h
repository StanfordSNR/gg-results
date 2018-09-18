// GGHASH:VC0yiLCDHtU6dTZxPuZvyTUyxXUsbQXYvztWVSrUX.k800001339
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512vbmiintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512VBMIINTRIN_H_INCLUDED
#define _AVX512VBMIINTRIN_H_INCLUDED 
#ifndef __AVX512VBMI__
#pragma GCC push_options
#pragma GCC target("avx512vbmi")
#define __DISABLE_AVX512VBMI__ 
#endif
#ifdef __DISABLE_AVX512VBMI__
#undef __DISABLE_AVX512VBMI__
#pragma GCC pop_options
#endif
#endif
