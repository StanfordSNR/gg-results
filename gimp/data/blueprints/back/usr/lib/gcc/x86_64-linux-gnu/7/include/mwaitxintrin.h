// GGHASH:VjSwfeykGS7j8IOJz2v0MRsglyJ1s4m0M5Pg0FElnGWA000006d3
#ifndef _MWAITXINTRIN_H_INCLUDED
#define _MWAITXINTRIN_H_INCLUDED 
#ifndef __MWAITX__
#pragma GCC push_options
#pragma GCC target("mwaitx")
#define __DISABLE_MWAITX__ 
#endif
#ifdef __DISABLE_MWAITX__
#undef __DISABLE_MWAITX__
#pragma GCC pop_options
#endif
#endif
