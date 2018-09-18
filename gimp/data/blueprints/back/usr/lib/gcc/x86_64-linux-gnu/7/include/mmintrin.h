// GGHASH:VRiJUQENn.XAGrQ6gar0P6fyVZAgEh5BQWllSYktDuRY00007a7a
#ifndef _MMINTRIN_H_INCLUDED
#define _MMINTRIN_H_INCLUDED 
#if defined __x86_64__ && !defined __SSE__ || !defined __MMX__
#pragma GCC push_options
#ifdef __x86_64__
#pragma GCC target("sse,mmx")
#else
#pragma GCC target("mmx")
#endif
#define __DISABLE_MMX__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __x86_64__
#endif
#ifndef __SSE2__
#pragma GCC push_options
#pragma GCC target("sse2,mmx")
#define __DISABLE_SSE2__ 
#endif
#ifdef __DISABLE_SSE2__
#undef __DISABLE_SSE2__
#pragma GCC pop_options
#endif
#ifndef __SSE2__
#pragma GCC push_options
#pragma GCC target("sse2,mmx")
#define __DISABLE_SSE2__ 
#endif
#ifdef __DISABLE_SSE2__
#undef __DISABLE_SSE2__
#pragma GCC pop_options
#endif
#ifdef __DISABLE_MMX__
#undef __DISABLE_MMX__
#pragma GCC pop_options
#endif
#endif
