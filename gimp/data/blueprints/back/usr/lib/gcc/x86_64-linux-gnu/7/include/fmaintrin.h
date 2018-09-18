// GGHASH:VPDCNTI70PjUbg2VBCvFeWJtWhuSqKxmhzPDi4V.janU00002928
#ifndef _IMMINTRIN_H_INCLUDED
# error "Never use <fmaintrin.h> directly; include <immintrin.h> instead."
#endif
#ifndef _FMAINTRIN_H_INCLUDED
#define _FMAINTRIN_H_INCLUDED 
#ifndef __FMA__
#pragma GCC push_options
#pragma GCC target("fma")
#define __DISABLE_FMA__ 
#endif
#ifdef __DISABLE_FMA__
#undef __DISABLE_FMA__
#pragma GCC pop_options
#endif
#endif
