// GGHASH:V8PcSOv0y_TzICo9H6SOvc0EihbLPmquzcBYPMXUGD6A000007e1
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <rdseedintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _RDSEEDINTRIN_H_INCLUDED
#define _RDSEEDINTRIN_H_INCLUDED 
#ifndef __RDSEED__
#pragma GCC push_options
#pragma GCC target("rdseed")
#define __DISABLE_RDSEED__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_RDSEED__
#undef __DISABLE_RDSEED__
#pragma GCC pop_options
#endif
#endif
