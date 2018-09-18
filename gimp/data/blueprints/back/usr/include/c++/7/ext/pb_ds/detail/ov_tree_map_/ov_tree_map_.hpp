// GGHASH:VosFfwI0nt0aU4EQzRrP.ho3mTSesYi_n5S8P6vhnUKE00003c06
#include <map>
#include <set>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/eq_fn/eq_by_less.hpp>
#include <ext/pb_ds/detail/types_traits.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/tree_trace_base.hpp>
#ifdef _GLIBCXX_DEBUG
#include <ext/pb_ds/detail/debug_map_base.hpp>
#endif
#include <utility>
#include <functional>
#include <algorithm>
#include <vector>
#include <assert.h>
#include <debug/debug.h>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_OV_TREE_NAME ov_tree_map
#define PB_DS_CONST_NODE_ITERATOR_NAME ov_tree_node_const_iterator_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_OV_TREE_NAME ov_tree_set
#define PB_DS_CONST_NODE_ITERATOR_NAME ov_tree_node_const_iterator_set
#endif
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Cmp_Fn, typename Node_And_It_Traits, typename _Alloc>
#define PB_DS_CLASS_C_DEC PB_DS_OV_TREE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#define PB_DS_OV_TREE_TRAITS_BASE types_traits<Key, Mapped, _Alloc, false>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_DEBUG_MAP_BASE_C_DEC debug_map_base<Key, eq_by_less<Key, Cmp_Fn>, typename _Alloc::template rebind<Key>::other::const_reference>
#endif
#ifdef PB_DS_TREE_TRACE
#define PB_DS_TREE_TRACE_BASE_C_DEC tree_trace_base<typename Node_And_It_Traits::node_const_iterator, typename Node_And_It_Traits::node_iterator, Cmp_Fn, false, _Alloc>
#endif
#ifndef PB_DS_CHECK_KEY_EXISTS
# error Missing definition
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_TREE_TRACE
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_TREE_TRACE
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef PB_DS_REGRESSION
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#include <ext/pb_ds/detail/ov_tree_map_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/info_fn_imps.hpp>
#include <ext/pb_ds/detail/ov_tree_map_/split_join_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/policy_access_fn_imps.hpp>
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_OV_TREE_NAME
#undef PB_DS_OV_TREE_TRAITS_BASE
#undef PB_DS_DEBUG_MAP_BASE_C_DEC
#ifdef PB_DS_TREE_TRACE
#undef PB_DS_TREE_TRACE_BASE_C_DEC
#endif
#undef PB_DS_CONST_NODE_ITERATOR_NAME
