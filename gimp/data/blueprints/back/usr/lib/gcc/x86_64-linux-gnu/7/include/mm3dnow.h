// GGHASH:VJ7_3Ri90tgbhwJTMDcV15d1buzv6drr1k5F.ddMQ2mU00001ba4
#ifndef _MM3DNOW_H_INCLUDED
#define _MM3DNOW_H_INCLUDED 
#include <mmintrin.h>
#include <prfchwintrin.h>
#if defined __x86_64__ && !defined __SSE__ || !defined __3dNOW__
#pragma GCC push_options
#ifdef __x86_64__
#pragma GCC target("sse,3dnow")
#else
#pragma GCC target("3dnow")
#endif
#define __DISABLE_3dNOW__ 
#endif
#ifdef __DISABLE_3dNOW__
#undef __DISABLE_3dNOW__
#pragma GCC pop_options
#endif
#if defined __x86_64__ && !defined __SSE__ || !defined __3dNOW_A__
#pragma GCC push_options
#ifdef __x86_64__
#pragma GCC target("sse,3dnowa")
#else
#pragma GCC target("3dnowa")
#endif
#define __DISABLE_3dNOW_A__ 
#endif
#ifdef __DISABLE_3dNOW_A__
#undef __DISABLE_3dNOW_A__
#pragma GCC pop_options
#endif
#endif
