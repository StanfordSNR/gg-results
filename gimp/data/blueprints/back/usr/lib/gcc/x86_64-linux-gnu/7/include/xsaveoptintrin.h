// GGHASH:VMj7T16K8wiYGuNc3DP6fWyI6lxF5.UkITo9m75j7AWw0000076f
#ifndef _XSAVEOPTINTRIN_H_INCLUDED
#define _XSAVEOPTINTRIN_H_INCLUDED 
#ifndef __XSAVEOPT__
#pragma GCC push_options
#pragma GCC target("xsaveopt")
#define __DISABLE_XSAVEOPT__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_XSAVEOPT__
#undef __DISABLE_XSAVEOPT__
#pragma GCC pop_options
#endif
#endif
