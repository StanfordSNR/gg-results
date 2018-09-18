// GGHASH:VxKscp0CinsbZfmPpGX.9qcwvp175Ib24gEgrsMt.OHU00003340
#ifndef PB_DS_ASSOC_CNTNR_BASE_DS_DISPATCHER_HPP
#define PB_DS_ASSOC_CNTNR_BASE_DS_DISPATCHER_HPP 
#include <ext/typelist.h>
#define PB_DS_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.assert_valid(__FILE__, __LINE__);)
#define PB_DS_DEBUG_VERIFY(_Cond) _GLIBCXX_DEBUG_VERIFY_AT(_Cond, _M_message(#_Cond" assertion from %1;:%2;") ._M_string(__FILE__)._M_integer(__LINE__) ,__file,__line)
#define PB_DS_CHECK_KEY_EXISTS(_Key) _GLIBCXX_DEBUG_ONLY(debug_base::check_key_exists(_Key, __FILE__, __LINE__);)
#define PB_DS_CHECK_KEY_DOES_NOT_EXIST(_Key) _GLIBCXX_DEBUG_ONLY(debug_base::check_key_does_not_exist(_Key, __FILE__, __LINE__);)
#define PB_DS_DATA_TRUE_INDICATOR 
#define PB_DS_V2F(X) (X).first
#define PB_DS_V2S(X) (X).second
#define PB_DS_EP2VP(X) & ((X)->m_value)
#include <ext/pb_ds/detail/list_update_map_/lu_map_.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/bin_search_tree_.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/rb_tree_.hpp>
#include <ext/pb_ds/detail/splay_tree_/splay_tree_.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/ov_tree_map_.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/cc_ht_map_.hpp>
#include <ext/pb_ds/detail/gp_hash_table_map_/gp_ht_map_.hpp>
#include <ext/pb_ds/detail/pat_trie_/pat_trie_.hpp>
#undef PB_DS_DATA_TRUE_INDICATOR
#undef PB_DS_V2F
#undef PB_DS_V2S
#undef PB_DS_EP2VP
#define PB_DS_DATA_FALSE_INDICATOR 
#define PB_DS_V2F(X) (X)
#define PB_DS_V2S(X) Mapped_Data()
#define PB_DS_EP2VP(X) & ((X)->m_value.first)
#include <ext/pb_ds/detail/list_update_map_/lu_map_.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/bin_search_tree_.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/rb_tree_.hpp>
#include <ext/pb_ds/detail/splay_tree_/splay_tree_.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/ov_tree_map_.hpp>
#include <ext/pb_ds/detail/cc_hash_table_map_/cc_ht_map_.hpp>
#include <ext/pb_ds/detail/gp_hash_table_map_/gp_ht_map_.hpp>
#include <ext/pb_ds/detail/pat_trie_/pat_trie_.hpp>
#undef PB_DS_DATA_FALSE_INDICATOR
#undef PB_DS_V2F
#undef PB_DS_V2S
#undef PB_DS_EP2VP
#undef PB_DS_CHECK_KEY_DOES_NOT_EXIST
#undef PB_DS_CHECK_KEY_EXISTS
#undef PB_DS_DEBUG_VERIFY
#undef PB_DS_ASSERT_VALID
#endif
