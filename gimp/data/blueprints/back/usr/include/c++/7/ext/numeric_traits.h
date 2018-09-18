// GGHASH:Vk1hvema763Q6wYqZYSM75.5BkJUuwNu9QuU7yrqNa.M000011df
#ifndef _EXT_NUMERIC_TRAITS
#define _EXT_NUMERIC_TRAITS 1
#include <bits/cpp_type_traits.h>
#include <ext/type_traits.h>
#define __glibcxx_signed(_Tp) ((_Tp)(-1) < 0)
#define __glibcxx_digits(_Tp) (sizeof(_Tp) * __CHAR_BIT__ - __glibcxx_signed(_Tp))
#define __glibcxx_min(_Tp) (__glibcxx_signed(_Tp) ? (_Tp)1 << __glibcxx_digits(_Tp) : (_Tp)0)
#define __glibcxx_max(_Tp) (__glibcxx_signed(_Tp) ? (((((_Tp)1 << (__glibcxx_digits(_Tp) - 1)) - 1) << 1) + 1) : ~(_Tp)0)
#undef __glibcxx_signed
#undef __glibcxx_digits
#undef __glibcxx_min
#undef __glibcxx_max
#define __glibcxx_floating(_Tp,_Fval,_Dval,_LDval) (std::__are_same<_Tp, float>::__value ? _Fval : std::__are_same<_Tp, double>::__value ? _Dval : _LDval)
#define __glibcxx_max_digits10(_Tp) (2 + __glibcxx_floating(_Tp, __FLT_MANT_DIG__, __DBL_MANT_DIG__, __LDBL_MANT_DIG__) * 643L / 2136)
#define __glibcxx_digits10(_Tp) __glibcxx_floating(_Tp, __FLT_DIG__, __DBL_DIG__, __LDBL_DIG__)
#define __glibcxx_max_exponent10(_Tp) __glibcxx_floating(_Tp, __FLT_MAX_10_EXP__, __DBL_MAX_10_EXP__, __LDBL_MAX_10_EXP__)
#undef __glibcxx_floating
#undef __glibcxx_max_digits10
#undef __glibcxx_digits10
#undef __glibcxx_max_exponent10
#endif
