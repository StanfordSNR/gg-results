// GGHASH:Vop5Vhlh7ex0uQoB6KpCwHFGJJG93GLa5fBRahVa.5os00000697
#ifndef _IMMINTRIN_H_INCLUDED
# error "Never use <xtestintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _XTESTINTRIN_H_INCLUDED
#define _XTESTINTRIN_H_INCLUDED 
#ifndef __RTM__
#pragma GCC push_options
#pragma GCC target("rtm")
#define __DISABLE_RTM__ 
#endif
#ifdef __DISABLE_RTM__
#undef __DISABLE_RTM__
#pragma GCC pop_options
#endif
#endif
