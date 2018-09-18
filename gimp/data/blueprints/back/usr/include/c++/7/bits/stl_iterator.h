// GGHASH:VaeUtBpUl19MU0q247JVdy_3N.n..CLTe5mdqzq0a2p40000a247
#ifndef _STL_ITERATOR_H
#define _STL_ITERATOR_H 1
#include <bits/cpp_type_traits.h>
#include <ext/type_traits.h>
#include <bits/move.h>
#include <bits/ptr_traits.h>
#if __cplusplus > 201402L
#define __cpp_lib_array_constexpr 201603
#endif
#if __cplusplus < 201103L
#else
#endif
#if __cplusplus >= 201103L
# if __cplusplus > 201103L
#define __cpp_lib_make_reverse_iterator 201402
# endif
#endif
#if __cplusplus >= 201103L
#endif
#if __cplusplus < 201103L
#else
#endif
#if __cplusplus < 201103L
#else
#endif
#if __cplusplus < 201103L
#else
#endif
#if __cplusplus >= 201103L
#else
#endif
#if __cplusplus >= 201103L
#define _GLIBCXX_MAKE_MOVE_ITERATOR(_Iter) std::make_move_iterator(_Iter)
#define _GLIBCXX_MAKE_MOVE_IF_NOEXCEPT_ITERATOR(_Iter) std::__make_move_if_noexcept_iterator(_Iter)
#else
#define _GLIBCXX_MAKE_MOVE_ITERATOR(_Iter) (_Iter)
#define _GLIBCXX_MAKE_MOVE_IF_NOEXCEPT_ITERATOR(_Iter) (_Iter)
#endif
#ifdef _GLIBCXX_DEBUG
# include <debug/stl_iterator.h>
#endif
#endif
