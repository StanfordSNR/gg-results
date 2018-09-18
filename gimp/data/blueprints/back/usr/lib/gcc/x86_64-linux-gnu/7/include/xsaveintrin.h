// GGHASH:VHRJvT1IqJEzKZxH.K9B_WgD9u2unrTcqp6qwY.o.lPo0000088e
#ifndef _XSAVEINTRIN_H_INCLUDED
#define _XSAVEINTRIN_H_INCLUDED 
#ifndef __XSAVE__
#pragma GCC push_options
#pragma GCC target("xsave")
#define __DISABLE_XSAVE__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_XSAVE__
#undef __DISABLE_XSAVE__
#pragma GCC pop_options
#endif
#endif
