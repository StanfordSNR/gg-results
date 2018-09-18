// GGHASH:V2FeRGlYGxdaTqFCNG0RbUFZSs0O4ZQPK78dP5t4qr8M00000d48
#ifndef _X86INTRIN_H_INCLUDED
# error "Never use <lwpintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _LWPINTRIN_H_INCLUDED
#define _LWPINTRIN_H_INCLUDED 
#ifndef __LWP__
#pragma GCC push_options
#pragma GCC target("lwp")
#define __DISABLE_LWP__ 
#endif
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define __lwpval32(D2,D1,F) (__builtin_ia32_lwpval32 ((unsigned int) (D2), (unsigned int) (D1), (unsigned int) (F)))
#ifdef __x86_64__
#define __lwpval64(D2,D1,F) (__builtin_ia32_lwpval64 ((unsigned long long) (D2), (unsigned int) (D1), (unsigned int) (F)))
#endif
#endif
#ifdef __OPTIMIZE__
#ifdef __x86_64__
#endif
#else
#define __lwpins32(D2,D1,F) (__builtin_ia32_lwpins32 ((unsigned int) (D2), (unsigned int) (D1), (unsigned int) (F)))
#ifdef __x86_64__
#define __lwpins64(D2,D1,F) (__builtin_ia32_lwpins64 ((unsigned long long) (D2), (unsigned int) (D1), (unsigned int) (F)))
#endif
#endif
#ifdef __DISABLE_LWP__
#undef __DISABLE_LWP__
#pragma GCC pop_options
#endif
#endif
