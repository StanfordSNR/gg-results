// GGHASH:VMq52jiJ.nyaxsf5OuXMv4tN8kj0NkJj7pZVst621u0I0000095e
#if !defined _X86INTRIN_H_INCLUDED && !defined _IMMINTRIN_H_INCLUDED
# error "Never use <lzcntintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _LZCNTINTRIN_H_INCLUDED
#define _LZCNTINTRIN_H_INCLUDED 
#ifndef __LZCNT__
#pragma GCC push_options
#pragma GCC target("lzcnt")
#define __DISABLE_LZCNT__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_LZCNT__
#undef __DISABLE_LZCNT__
#pragma GCC pop_options
#endif
#endif
