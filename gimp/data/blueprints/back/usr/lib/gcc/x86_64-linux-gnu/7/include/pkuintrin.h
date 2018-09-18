// GGHASH:V8LZEfG1s6iAf9YB4skepZi7iZg8kPbqDTCNp.aAMmzE000006cd
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <pkuintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _PKUINTRIN_H_INCLUDED
#define _PKUINTRIN_H_INCLUDED 
#ifndef __PKU__
#pragma GCC push_options
#pragma GCC target("pku")
#define __DISABLE_PKU__ 
#endif
#ifdef __DISABLE_PKU__
#undef __DISABLE_PKU__
#pragma GCC pop_options
#endif
#endif
