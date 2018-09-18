// GGHASH:VYnCwomaSEquk9GQ9MHZne1WTA.yXVQpHZlokYCW0oI40000297b
#ifndef PB_DS_RANGED_HASH_FN_HPP
#define PB_DS_RANGED_HASH_FN_HPP 
#include <utility>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Key, typename Hash_Fn, typename _Alloc, typename Comb_Hash_Fn>
#define PB_DS_CLASS_C_DEC ranged_hash_fn<Key, Hash_Fn, _Alloc, Comb_Hash_Fn, false>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Key, typename Hash_Fn, typename _Alloc, typename Comb_Hash_Fn>
#define PB_DS_CLASS_C_DEC ranged_hash_fn<Key,Hash_Fn, _Alloc, Comb_Hash_Fn, true>
#ifdef _GLIBCXX_DEBUG
#else
#endif
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Key, typename _Alloc, typename Comb_Hash_Fn>
#define PB_DS_CLASS_C_DEC ranged_hash_fn<Key, null_type, _Alloc, Comb_Hash_Fn, false>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Key, typename _Alloc, typename Comb_Hash_Fn>
#define PB_DS_CLASS_C_DEC ranged_hash_fn<Key, null_type, _Alloc, Comb_Hash_Fn, true>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#endif
