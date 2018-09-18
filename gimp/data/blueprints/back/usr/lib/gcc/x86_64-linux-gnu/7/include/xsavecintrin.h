// GGHASH:VyJ25t6IPTIz4sx3en.JYPQjE5TVHiimxLCEBnAFv5Vw0000071d
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <xsavecintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _XSAVECINTRIN_H_INCLUDED
#define _XSAVECINTRIN_H_INCLUDED 
#ifndef __XSAVEC__
#pragma GCC push_options
#pragma GCC target("xsavec")
#define __DISABLE_XSAVEC__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_XSAVEC__
#undef __DISABLE_XSAVEC__
#pragma GCC pop_options
#endif
#endif
