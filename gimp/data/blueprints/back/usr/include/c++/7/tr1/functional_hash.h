// GGHASH:V7_j5O91McGrFllZuEiTV16JcBgF0PI6TUnwIBUZWYiA0000179b
#ifndef _GLIBCXX_TR1_FUNCTIONAL_HASH_H
#define _GLIBCXX_TR1_FUNCTIONAL_HASH_H 1
#define _TR1_hashtable_define_trivial_hash(_Tp) template<> inline size_t hash<_Tp>::operator()(_Tp __val) const { return static_cast<size_t>(__val); }
#undef _TR1_hashtable_define_trivial_hash
#ifdef _GLIBCXX_USE_WCHAR_T
#endif
#endif
