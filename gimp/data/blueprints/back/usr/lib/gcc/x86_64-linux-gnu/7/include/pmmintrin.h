// GGHASH:VSNOg8PZBspgqCSp7O9NW32EJXNmZjcaJzDh3Fu.JMZk00001110
#ifndef _PMMINTRIN_H_INCLUDED
#define _PMMINTRIN_H_INCLUDED 
#include <emmintrin.h>
#ifndef __SSE3__
#pragma GCC push_options
#pragma GCC target("sse3")
#define __DISABLE_SSE3__ 
#endif
#define _MM_DENORMALS_ZERO_MASK 0x0040
#define _MM_DENORMALS_ZERO_ON 0x0040
#define _MM_DENORMALS_ZERO_OFF 0x0000
#define _MM_SET_DENORMALS_ZERO_MODE(mode) _mm_setcsr ((_mm_getcsr () & ~_MM_DENORMALS_ZERO_MASK) | (mode))
#define _MM_GET_DENORMALS_ZERO_MODE() (_mm_getcsr() & _MM_DENORMALS_ZERO_MASK)
#ifdef __DISABLE_SSE3__
#undef __DISABLE_SSE3__
#pragma GCC pop_options
#endif
#endif
