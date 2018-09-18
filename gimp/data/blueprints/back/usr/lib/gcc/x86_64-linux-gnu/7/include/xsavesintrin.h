// GGHASH:VQ1CTjkKHgUA8IPADcfxDMBYsFoNZU7X8LOqM9jy.BvI0000086d
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <xsavesintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _XSAVESINTRIN_H_INCLUDED
#define _XSAVESINTRIN_H_INCLUDED 
#ifndef __XSAVES__
#pragma GCC push_options
#pragma GCC target("xsaves")
#define __DISABLE_XSAVES__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_XSAVES__
#undef __DISABLE_XSAVES__
#pragma GCC pop_options
#endif
#endif
