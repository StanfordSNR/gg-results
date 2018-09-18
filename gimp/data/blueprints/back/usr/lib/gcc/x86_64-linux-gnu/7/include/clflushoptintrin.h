// GGHASH:V4fWe8YhDLMidE9zzBwQxCp4_1XOH3_H.u8VoKOnsobU0000067f
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <clflushoptintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _CLFLUSHOPTINTRIN_H_INCLUDED
#define _CLFLUSHOPTINTRIN_H_INCLUDED 
#ifndef __CLFLUSHOPT__
#pragma GCC push_options
#pragma GCC target("clflushopt")
#define __DISABLE_CLFLUSHOPT__ 
#endif
#ifdef __DISABLE_CLFLUSHOPT__
#undef __DISABLE_CLFLUSHOPT__
#pragma GCC pop_options
#endif
#endif
