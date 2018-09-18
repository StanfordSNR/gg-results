// GGHASH:Vgj0AzCvm0EpvteNIqIW.Q0kJJ9YIEX8l0MIxNa_F.Vo0000257a
#ifndef _CPP_TYPE_TRAITS_H
#define _CPP_TYPE_TRAITS_H 1
#include <bits/c++config.h>
# ifdef _GLIBCXX_USE_WCHAR_T
# endif
#if __cplusplus >= 201103L
#endif
#define __INT_N(TYPE) template<> struct __is_integer<TYPE> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned TYPE> { enum { __value = 1 }; typedef __true_type __type; };
#ifdef __GLIBCXX_TYPE_INT_N_0
#endif
#ifdef __GLIBCXX_TYPE_INT_N_1
#endif
#ifdef __GLIBCXX_TYPE_INT_N_2
#endif
#ifdef __GLIBCXX_TYPE_INT_N_3
#endif
#undef __INT_N
#ifdef _GLIBCXX_USE_WCHAR_T
#endif
#endif
