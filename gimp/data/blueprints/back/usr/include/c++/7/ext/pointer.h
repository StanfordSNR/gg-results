// GGHASH:VQuMnRLUJM78kVjQqeIv_jGXxPNiSJDoI6ddgveUYV8E00004ce1
#ifndef _POINTER_H
#define _POINTER_H 1
#include <iosfwd>
#include <bits/stl_iterator_base_types.h>
#include <ext/cast.h>
#include <ext/type_traits.h>
#if __cplusplus >= 201103L
# include <bits/move.h>
# include <bits/ptr_traits.h>
#endif
#ifdef _GLIBCXX_USE_LONG_LONG
#else
#endif
#ifdef _GLIBCXX_USE_LONG_LONG
#else
#endif
#define _CXX_POINTER_ARITH_OPERATOR_SET(INT_TYPE) inline friend _Pointer_adapter operator+(const _Pointer_adapter& __lhs, INT_TYPE __offset) { return _Pointer_adapter(__lhs.get() + __offset); } inline friend _Pointer_adapter operator+(INT_TYPE __offset, const _Pointer_adapter& __rhs) { return _Pointer_adapter(__rhs.get() + __offset); } inline friend _Pointer_adapter operator-(const _Pointer_adapter& __lhs, INT_TYPE __offset) { return _Pointer_adapter(__lhs.get() - __offset); } inline _Pointer_adapter& operator+=(INT_TYPE __offset) { _Storage_policy::set(_Storage_policy::get() + __offset); return *this; } inline _Pointer_adapter& operator-=(INT_TYPE __offset) { _Storage_policy::set(_Storage_policy::get() - __offset); return *this; }
#define _GCC_CXX_POINTER_COMPARISON_OPERATION_SET(OPERATOR) template<typename _Tp1, typename _Tp2> inline bool operator OPERATOR(const _Pointer_adapter<_Tp1>& __lhs, _Tp2 __rhs) { return __lhs.get() OPERATOR __rhs; } template<typename _Tp1, typename _Tp2> inline bool operator OPERATOR(_Tp1 __lhs, const _Pointer_adapter<_Tp2>& __rhs) { return __lhs OPERATOR __rhs.get(); } template<typename _Tp1, typename _Tp2> inline bool operator OPERATOR(const _Pointer_adapter<_Tp1>& __lhs, const _Pointer_adapter<_Tp2>& __rhs) { return __lhs.get() OPERATOR __rhs.get(); }
#if __cplusplus >= 201103L
#endif
#endif
