// GGHASH:VOEh.yQqBHr472msd8.xbSL4oGhkYk0fOHZoRCTl6r_c000041e5
#include <iterator>
#include <utility>
#include <algorithm>
#include <functional>
#include <assert.h>
#include <list>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/types_traits.hpp>
#include <ext/pb_ds/detail/eq_fn/eq_by_less.hpp>
#include <ext/pb_ds/detail/pat_trie_/synth_access_traits.hpp>
#include <ext/pb_ds/detail/pat_trie_/pat_trie_base.hpp>
#ifdef _GLIBCXX_DEBUG
#include <ext/pb_ds/detail/debug_map_base.hpp>
#endif
#include <debug/debug.h>
#ifdef PB_DS_DATA_TRUE_INDICATOR
#define PB_DS_PAT_TRIE_NAME pat_trie_map
#endif
#ifdef PB_DS_DATA_FALSE_INDICATOR
#define PB_DS_PAT_TRIE_NAME pat_trie_set
#endif
#define PB_DS_CLASS_T_DEC template<typename Key, typename Mapped, typename Node_And_It_Traits, typename _Alloc>
#define PB_DS_CLASS_C_DEC PB_DS_PAT_TRIE_NAME<Key, Mapped, Node_And_It_Traits, _Alloc>
#define PB_DS_PAT_TRIE_TRAITS_BASE types_traits<Key, Mapped, _Alloc, false>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_DEBUG_MAP_BASE_C_DEC debug_map_base<Key, eq_by_less<Key, std::less<Key> >, typename _Alloc::template rebind<Key>::other::const_reference>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#else
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#else
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef PB_DS_DATA_TRUE_INDICATOR
#endif
#ifdef PB_DS_PAT_TRIE_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_PAT_TRIE_TRACE_
#endif
#define PB_DS_ASSERT_NODE_VALID(X) _GLIBCXX_DEBUG_ONLY(X->assert_valid(this, __FILE__, __LINE__);)
#define PB_DS_RECURSIVE_COUNT_LEAFS(X) recursive_count_leafs(X, __FILE__, __LINE__)
#include <ext/pb_ds/detail/pat_trie_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/insert_join_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/info_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/policy_access_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/split_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/trace_fn_imps.hpp>
#include <ext/pb_ds/detail/pat_trie_/update_fn_imps.hpp>
#undef PB_DS_RECURSIVE_COUNT_LEAFS
#undef PB_DS_ASSERT_NODE_VALID
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_PAT_TRIE_NAME
#undef PB_DS_PAT_TRIE_TRAITS_BASE
#undef PB_DS_DEBUG_MAP_BASE_C_DEC
