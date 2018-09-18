// GGHASH:Vq4Ra4vVtJOIBSGrq_13sjDSaU.EgI2Jj9pKOJcAxHL000002097
#ifndef _TMMINTRIN_H_INCLUDED
#define _TMMINTRIN_H_INCLUDED 
#include <pmmintrin.h>
#ifndef __SSSE3__
#pragma GCC push_options
#pragma GCC target("ssse3")
#define __DISABLE_SSSE3__ 
#endif
#ifdef __OPTIMIZE__
#else
#define _mm_alignr_epi8(X,Y,N) ((__m128i) __builtin_ia32_palignr128 ((__v2di)(__m128i)(X), (__v2di)(__m128i)(Y), (int)(N) * 8))
#define _mm_alignr_pi8(X,Y,N) ((__m64) __builtin_ia32_palignr ((__v1di)(__m64)(X), (__v1di)(__m64)(Y), (int)(N) * 8))
#endif
#ifdef __DISABLE_SSSE3__
#undef __DISABLE_SSSE3__
#pragma GCC pop_options
#endif
#endif
