// GGHASH:V5oePwRPMWSoA7s4YPT9U4HlcMb7QE0Dq9QQ_xn4E4NE000006d6
#ifndef _POPCNTINTRIN_H_INCLUDED
#define _POPCNTINTRIN_H_INCLUDED 
#ifndef __POPCNT__
#pragma GCC push_options
#pragma GCC target("popcnt")
#define __DISABLE_POPCNT__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_POPCNT__
#undef __DISABLE_POPCNT__
#pragma GCC pop_options
#endif
#endif
