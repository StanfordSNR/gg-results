// GGHASH:VOQUMqLbSC9w9jPADNGUFeflDI3fvablG4NLILd7SD6Q00003083
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/eq_fn/eq_by_less.hpp>
#include <ext/pb_ds/detail/types_traits.hpp>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/tree_trace_base.hpp>
#ifdef _GLIBCXX_DEBUG
#include <ext/pb_ds/detail/debug_map_base.hpp>
#endif
#include <utility>
#include <functional>
#include <debug/debug.h>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_BIN_TREE_NAME bin_search_tree_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_BIN_TREE_NAME bin_search_tree_set
#endif
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Cmp_Fn, typename Node_And_It_Traits, typename _Alloc>
#define PB_DS_CLASS_C_DEC PB_DS_BIN_TREE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#define PB_DS_BIN_TREE_TRAITS_BASE types_traits<Key, Mapped, _Alloc, false>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_DEBUG_MAP_BASE_C_DEC debug_map_base<Key, eq_by_less<Key, Cmp_Fn>, typename _Alloc::template rebind<Key>::other::const_reference>
#endif
#ifdef PB_DS_TREE_TRACE
#define PB_DS_TREE_TRACE_BASE_C_DEC tree_trace_base<typename Node_And_It_Traits::node_const_iterator, typename Node_And_It_Traits::node_iterator, Cmp_Fn, true, _Alloc>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_TREE_TRACE
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_STRUCT_ONLY_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.structure_only_assert_valid(__FILE__, __LINE__);)
#define PB_DS_ASSERT_NODE_CONSISTENT(_Node) _GLIBCXX_DEBUG_ONLY(assert_node_consistent(_Node, __FILE__, __LINE__);)
#include <ext/pb_ds/detail/bin_search_tree_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/info_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/split_join_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/rotate_fn_imps.hpp>
#include <ext/pb_ds/detail/bin_search_tree_/policy_access_fn_imps.hpp>
#undef PB_DS_ASSERT_NODE_CONSISTENT
#undef PB_DS_STRUCT_ONLY_ASSERT_VALID
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_BIN_TREE_NAME
#undef PB_DS_BIN_TREE_TRAITS_BASE
#undef PB_DS_DEBUG_MAP_BASE_C_DEC
#ifdef PB_DS_TREE_TRACE
#undef PB_DS_TREE_TRACE_BASE_C_DEC
#endif
