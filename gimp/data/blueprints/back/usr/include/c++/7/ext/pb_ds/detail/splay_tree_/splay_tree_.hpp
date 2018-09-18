// GGHASH:VnnD.AITcQrcynnPFEISYhN42KBGEnrUC9V1xwa8z5gk0000245b
#include <utility>
#include <vector>
#include <assert.h>
#include <debug/debug.h>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_S_TREE_NAME splay_tree_map
#define PB_DS_S_TREE_BASE_NAME bin_search_tree_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_S_TREE_NAME splay_tree_set
#define PB_DS_S_TREE_BASE_NAME bin_search_tree_set
#endif
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Cmp_Fn, typename Node_And_It_Traits, typename _Alloc>
#define PB_DS_CLASS_C_DEC PB_DS_S_TREE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#define PB_DS_S_TREE_BASE PB_DS_S_TREE_BASE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_ASSERT_BASE_NODE_CONSISTENT(_Node) _GLIBCXX_DEBUG_ONLY(base_type::assert_node_consistent(_Node, __FILE__, __LINE__);)
#include <ext/pb_ds/detail/splay_tree_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/splay_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/splay_tree_/split_join_fn_imps.hpp>
#undef PB_DS_ASSERT_BASE_NODE_CONSISTENT
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_S_TREE_NAME
#undef PB_DS_S_TREE_BASE_NAME
#undef PB_DS_S_TREE_BASE
