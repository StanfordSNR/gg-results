// GGHASH:VQ2TWSQNeGl41nysASb4MJi1Csx3V095Z689WE1Pg9oI00002002
#ifndef _FUNCTIONAL_HASH_H
#define _FUNCTIONAL_HASH_H 1
#include <bits/hash_bytes.h>
#define _Cxx_hashtable_define_trivial_hash(_Tp) template<> struct hash<_Tp> : public __hash_base<size_t, _Tp> { size_t operator()(_Tp __val) const noexcept { return static_cast<size_t>(__val); } };
#ifdef __GLIBCXX_TYPE_INT_N_0
#endif
#ifdef __GLIBCXX_TYPE_INT_N_1
#endif
#ifdef __GLIBCXX_TYPE_INT_N_2
#endif
#ifdef __GLIBCXX_TYPE_INT_N_3
#endif
#undef _Cxx_hashtable_define_trivial_hash
#endif
