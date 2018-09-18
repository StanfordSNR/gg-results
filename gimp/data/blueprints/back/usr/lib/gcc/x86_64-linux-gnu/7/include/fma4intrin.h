// GGHASH:VH33fhDdt_wVSszUsSyOqv6KhPZtmgEXznuSyKVQR_ME000023ac
#ifndef _X86INTRIN_H_INCLUDED
# error "Never use <fma4intrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _FMA4INTRIN_H_INCLUDED
#define _FMA4INTRIN_H_INCLUDED 
#include <ammintrin.h>
#ifndef __FMA4__
#pragma GCC push_options
#pragma GCC target("fma4")
#define __DISABLE_FMA4__ 
#endif
#ifdef __DISABLE_FMA4__
#undef __DISABLE_FMA4__
#pragma GCC pop_options
#endif
#endif
