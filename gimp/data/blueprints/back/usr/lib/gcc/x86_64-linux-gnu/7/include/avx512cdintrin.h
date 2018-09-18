// GGHASH:VAGYnI.p.JqeUlviA3A39js8dt9q2g0jZXZvMlQpMQtI000016be
#ifndef _IMMINTRIN_H_INCLUDED
#error "Never use <avx512cdintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _AVX512CDINTRIN_H_INCLUDED
#define _AVX512CDINTRIN_H_INCLUDED 
#ifndef __AVX512CD__
#pragma GCC push_options
#pragma GCC target("avx512cd")
#define __DISABLE_AVX512CD__ 
#endif
#ifdef __DISABLE_AVX512CD__
#undef __DISABLE_AVX512CD__
#pragma GCC pop_options
#endif
#endif
