// GGHASH:Vghp49Dx8Ssex3YPWbK7HCoI6smThERsiYh6WqqHNrLE0000158d
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/left_child_next_sibling_heap_.hpp>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC pairing_heap<Value_Type, Cmp_Fn, _Alloc>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_P_HEAP_BASE left_child_next_sibling_heap<Value_Type, Cmp_Fn, null_type, _Alloc, false>
#else
#define PB_DS_P_HEAP_BASE left_child_next_sibling_heap<Value_Type, Cmp_Fn, null_type, _Alloc>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_ASSERT_NODE_CONSISTENT(_Node,_Bool) _GLIBCXX_DEBUG_ONLY(base_type::assert_node_consistent(_Node, _Bool, __FILE__, __LINE__);)
#include <ext/pb_ds/detail/pairing_heap_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/pairing_heap_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/pairing_heap_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/pairing_heap_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/pairing_heap_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/pairing_heap_/split_join_fn_imps.hpp>
#undef PB_DS_ASSERT_NODE_CONSISTENT
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_P_HEAP_BASE
