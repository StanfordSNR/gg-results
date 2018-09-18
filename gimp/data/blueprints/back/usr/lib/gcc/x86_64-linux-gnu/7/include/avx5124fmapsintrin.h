// GGHASH:VeJdPIajlQeK8mcKCCNIJINYqJWuAAAhvw6DqDgyknU800001987
#if !defined _IMMINTRIN_H_INCLUDED
# error "Never use <avx5124fmapsintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _AVX5124FMAPSINTRIN_H_INCLUDED
#define _AVX5124FMAPSINTRIN_H_INCLUDED 
#ifndef __AVX5124FMAPS__
#pragma GCC push_options
#pragma GCC target("avx5124fmaps")
#define __DISABLE_AVX5124FMAPS__ 
#endif
#ifdef __DISABLE_AVX5124FMAPS__
#undef __DISABLE_AVX5124FMAPS__
#pragma GCC pop_options
#endif
#endif
