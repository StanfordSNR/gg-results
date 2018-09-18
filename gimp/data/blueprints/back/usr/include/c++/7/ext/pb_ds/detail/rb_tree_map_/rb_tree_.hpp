// GGHASH:ViQJxTFbTgnWpO7TINABHrb3iwoeSV04lrrUtm66e12A00001f1a
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <utility>
#include <vector>
#include <assert.h>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Cmp_Fn, typename Node_And_It_Traits, typename _Alloc>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_RB_TREE_NAME rb_tree_map
#define PB_DS_RB_TREE_BASE_NAME bin_search_tree_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_RB_TREE_NAME rb_tree_set
#define PB_DS_RB_TREE_BASE_NAME bin_search_tree_set
#endif
#define PB_DS_CLASS_C_DEC PB_DS_RB_TREE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#define PB_DS_RB_TREE_BASE PB_DS_RB_TREE_BASE_NAME<Key, Mapped, Cmp_Fn, Node_And_It_Traits, _Alloc>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_STRUCT_ONLY_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.structure_only_assert_valid(__FILE__, __LINE__);)
#include <ext/pb_ds/detail/rb_tree_map_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/split_join_fn_imps.hpp>
#include <ext/pb_ds/detail/rb_tree_map_/info_fn_imps.hpp>
#undef PB_DS_STRUCT_ONLY_ASSERT_VALID
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_RB_TREE_NAME
#undef PB_DS_RB_TREE_BASE_NAME
#undef PB_DS_RB_TREE_BASE
