// GGHASH:ViOfUIzp47VvNahuT1Wyyy_fRVih09OyVEw1L1E6dwe80000147a
#ifndef _X86INTRIN_H_INCLUDED
# error "Never use <tbmintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _TBMINTRIN_H_INCLUDED
#define _TBMINTRIN_H_INCLUDED 
#ifndef __TBM__
#pragma GCC push_options
#pragma GCC target("tbm")
#define __DISABLE_TBM__ 
#endif
#ifdef __OPTIMIZE__
#else
#define __bextri_u32(X,I) ((unsigned int)__builtin_ia32_bextri_u32 ((unsigned int)(X), (unsigned int)(I)))
#endif
#ifdef __x86_64__
#ifdef __OPTIMIZE__
#else
#define __bextri_u64(X,I) ((unsigned long long)__builtin_ia32_bextri_u64 ((unsigned long long)(X), (unsigned long long)(I)))
#endif
#endif
#ifdef __DISABLE_TBM__
#undef __DISABLE_TBM__
#pragma GCC pop_options
#endif
#endif
