// GGHASH:VGhreu2iYvCz8yVkrQDW3LbEs1rxV9PJK1LNWFen9OSQ00000d3c
#if !defined _X86INTRIN_H_INCLUDED && !defined _IMMINTRIN_H_INCLUDED
# error "Never use <bmi2intrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _BMI2INTRIN_H_INCLUDED
#define _BMI2INTRIN_H_INCLUDED 
#ifndef __BMI2__
#pragma GCC push_options
#pragma GCC target("bmi2")
#define __DISABLE_BMI2__ 
#endif
#ifdef __x86_64__
#else
#endif
#ifdef __DISABLE_BMI2__
#undef __DISABLE_BMI2__
#pragma GCC pop_options
#endif
#endif
