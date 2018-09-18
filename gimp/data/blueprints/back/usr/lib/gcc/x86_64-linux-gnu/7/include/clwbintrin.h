// GGHASH:VWRa6ApJb1wqAjxeMA9B0wwsFYKXoR1_mUGsFfjQYyZI00000631
#if !defined _X86INTRIN_H_INCLUDED
# error "Never use <clwbintrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef _CLWBINTRIN_H_INCLUDED
#define _CLWBINTRIN_H_INCLUDED 
#ifndef __CLWB__
#pragma GCC push_options
#pragma GCC target("clwb")
#define __DISABLE_CLWB__ 
#endif
#ifdef __DISABLE_CLWB__
#undef __DISABLE_CLWB__
#pragma GCC pop_options
#endif
#endif
