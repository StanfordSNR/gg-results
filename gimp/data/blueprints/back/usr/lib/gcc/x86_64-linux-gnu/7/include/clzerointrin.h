// GGHASH:VpwCQal8fDvV310mGXumuVBbh7VfkajNtrCVQkWuQ4IM000005d3
#ifndef _CLZEROINTRIN_H_INCLUDED
#define _CLZEROINTRIN_H_INCLUDED 
#ifndef __CLZERO__
#pragma GCC push_options
#pragma GCC target("clzero")
#define __DISABLE_CLZERO__ 
#endif
#ifdef __DISABLE_CLZERO__
#undef __DISABLE_CLZERO__
#pragma GCC pop_options
#endif
#endif
