// GGHASH:Vk4Zxpn.5R7de5vi4uvrGUGre2sq5r8A6eJZEYQXUWAE00004df1
#include <utility>
#include <iterator>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/detail/hash_fn/ranged_hash_fn.hpp>
#include <ext/pb_ds/detail/types_traits.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/detail/eq_fn/hash_eq_fn.hpp>
#ifdef _GLIBCXX_DEBUG
#include <ext/pb_ds/detail/debug_map_base.hpp>
#endif
#ifdef PB_DS_HT_MAP_TRACE_
#include <iostream>
#endif
#include <debug/debug.h>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_CC_HASH_NAME cc_ht_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_CC_HASH_NAME cc_ht_set
#endif
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Hash_Fn, typename Eq_Fn, typename _Alloc, bool Store_Hash, typename Comb_Hash_Fn, typename Resize_Policy>
#define PB_DS_CLASS_C_DEC PB_DS_CC_HASH_NAME<Key, Mapped, Hash_Fn, Eq_Fn, _Alloc, Store_Hash, Comb_Hash_Fn, Resize_Policy>
#define PB_DS_HASH_EQ_FN_C_DEC hash_eq_fn<Key, Eq_Fn, _Alloc, Store_Hash>
#define PB_DS_RANGED_HASH_FN_C_DEC ranged_hash_fn<Key, Hash_Fn, _Alloc, Comb_Hash_Fn, Store_Hash>
#define PB_DS_CC_HASH_TRAITS_BASE types_traits<Key, Mapped, _Alloc, Store_Hash>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_DEBUG_MAP_BASE_C_DEC debug_map_base<Key, Eq_Fn, typename _Alloc::template rebind<Key>::other::const_reference>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_GEN_POS std::pair<entry_pointer, typename _Alloc::size_type>
#include <ext/pb_ds/detail/unordered_iterator/point_const_iterator.hpp>
#include <ext/pb_ds/detail/unordered_iterator/point_iterator.hpp>
#include <ext/pb_ds/detail/unordered_iterator/const_iterator.hpp>
#include <ext/pb_ds/detail/unordered_iterator/iterator.hpp>
#undef PB_DS_GEN_POS
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_HT_MAP_TRACE_
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_HT_MAP_TRACE_
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#include <ext/pb_ds/detail/cc_hash_table_map_/constructor_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/entry_list_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/resize_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/size_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/policy_access_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/trace_fn_imps.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_HASH_EQ_FN_C_DEC
#undef PB_DS_RANGED_HASH_FN_C_DEC
#undef PB_DS_CC_HASH_TRAITS_BASE
#undef PB_DS_DEBUG_MAP_BASE_C_DEC
#undef PB_DS_CC_HASH_NAME
