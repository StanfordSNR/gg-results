// GGHASH:VODUx6m9viwUAwlSUOZs_7ePsz9.dgsLQRl6N175RROE00001378
#ifndef _IMMINTRIN_H_INCLUDED
#define _IMMINTRIN_H_INCLUDED 
#include <mmintrin.h>
#include <xmmintrin.h>
#include <emmintrin.h>
#include <pmmintrin.h>
#include <tmmintrin.h>
#include <smmintrin.h>
#include <wmmintrin.h>
#include <avxintrin.h>
#include <avx2intrin.h>
#include <avx512fintrin.h>
#include <avx512erintrin.h>
#include <avx512pfintrin.h>
#include <avx512cdintrin.h>
#include <avx512vlintrin.h>
#include <avx512bwintrin.h>
#include <avx512dqintrin.h>
#include <avx512vlbwintrin.h>
#include <avx512vldqintrin.h>
#include <avx512ifmaintrin.h>
#include <avx512ifmavlintrin.h>
#include <avx512vbmiintrin.h>
#include <avx512vbmivlintrin.h>
#include <avx5124fmapsintrin.h>
#include <avx5124vnniwintrin.h>
#include <avx512vpopcntdqintrin.h>
#include <shaintrin.h>
#include <lzcntintrin.h>
#include <bmiintrin.h>
#include <bmi2intrin.h>
#include <fmaintrin.h>
#include <f16cintrin.h>
#include <rtmintrin.h>
#include <xtestintrin.h>
#ifndef __RDRND__
#pragma GCC push_options
#pragma GCC target("rdrnd")
#define __DISABLE_RDRND__ 
#endif
#ifdef __DISABLE_RDRND__
#undef __DISABLE_RDRND__
#pragma GCC pop_options
#endif
#ifndef __RDPID__
#pragma GCC push_options
#pragma GCC target("rdpid")
#define __DISABLE_RDPID__ 
#endif
#ifdef __DISABLE_RDPID__
#undef __DISABLE_RDPID__
#pragma GCC pop_options
#endif
#ifdef __x86_64__
#ifndef __FSGSBASE__
#pragma GCC push_options
#pragma GCC target("fsgsbase")
#define __DISABLE_FSGSBASE__ 
#endif
#ifdef __DISABLE_FSGSBASE__
#undef __DISABLE_FSGSBASE__
#pragma GCC pop_options
#endif
#ifndef __RDRND__
#pragma GCC push_options
#pragma GCC target("rdrnd")
#define __DISABLE_RDRND__ 
#endif
#ifdef __DISABLE_RDRND__
#undef __DISABLE_RDRND__
#pragma GCC pop_options
#endif
#endif
#endif
