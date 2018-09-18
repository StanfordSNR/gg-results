// GGHASH:VQtwwQoK0VVBrLQDUa9pUQuiDtXuFENlu.b7Z5pBPBqw000015fc
#if !defined _X86INTRIN_H_INCLUDED && !defined _IMMINTRIN_H_INCLUDED
# error "Never use <bmiintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _BMIINTRIN_H_INCLUDED
#define _BMIINTRIN_H_INCLUDED 
#ifndef __BMI__
#pragma GCC push_options
#pragma GCC target("bmi")
#define __DISABLE_BMI__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_BMI__
#undef __DISABLE_BMI__
#pragma GCC pop_options
#endif
#endif
