// GGHASH:VkPzy8jeOY0QThg_HKhgwyaqwlfVDWTzL9flJ57XJTb00000c4e3
#ifndef _STL_ALGOBASE_H
#define _STL_ALGOBASE_H 1
#include <bits/c++config.h>
#include <bits/functexcept.h>
#include <bits/cpp_type_traits.h>
#include <ext/type_traits.h>
#include <ext/numeric_traits.h>
#include <bits/stl_pair.h>
#include <bits/stl_iterator_base_types.h>
#include <bits/stl_iterator_base_funcs.h>
#include <bits/stl_iterator.h>
#include <bits/concept_check.h>
#include <debug/debug.h>
#include <bits/move.h>
#include <bits/predefined_ops.h>
#if __cplusplus < 201103L
#endif
#if __cplusplus < 201103L
#else
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#define _GLIBCXX_MOVE3(_Tp,_Up,_Vp) std::move(_Tp, _Up, _Vp)
#else
#define _GLIBCXX_MOVE3(_Tp,_Up,_Vp) std::copy(_Tp, _Up, _Vp)
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#define _GLIBCXX_MOVE_BACKWARD3(_Tp,_Up,_Vp) std::move_backward(_Tp, _Up, _Vp)
#else
#define _GLIBCXX_MOVE_BACKWARD3(_Tp,_Up,_Vp) std::copy_backward(_Tp, _Up, _Vp)
#endif
#if __cplusplus > 201103L
#define __cpp_lib_robust_nonmodifying_seq_ops 201304
#endif
#ifdef _GLIBCXX_CONCEPT_CHECKS
#endif
#if __cplusplus > 201103L
#endif
#ifdef _GLIBCXX_PARALLEL
# include <parallel/algobase.h>
#endif
#endif
