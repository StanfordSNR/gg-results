// GGHASH:VJTU_xFsj0aj7v4C3skmQyBxIUsZ1rY9de1cwKQdhtTw000020d4
#ifndef PB_DS_THIN_HEAP_HPP
#define PB_DS_THIN_HEAP_HPP 
#include <algorithm>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/left_child_next_sibling_heap_.hpp>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC thin_heap<Value_Type, Cmp_Fn, _Alloc>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_BASE_T_P <Value_Type, Cmp_Fn, typename _Alloc::size_type, _Alloc, true>
#else
#define PB_DS_BASE_T_P <Value_Type, Cmp_Fn, typename _Alloc::size_type, _Alloc>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_THIN_HEAP_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#if __SIZE_MAX__ > 0xfffful
#if __SIZE_MAX__ > 0xffffful
#if __SIZE_MAX__ > 0xfffffful
#endif
#endif
#endif
#define PB_DS_ASSERT_NODE_CONSISTENT(_Node,_Bool) _GLIBCXX_DEBUG_ONLY(assert_node_consistent(_Node, _Bool, __FILE__, __LINE__);)
#define PB_DS_ASSERT_AUX_NULL(X) _GLIBCXX_DEBUG_ONLY(X.assert_aux_null(__FILE__, __LINE__);)
#include <ext/pb_ds/detail/thin_heap_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/trace_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/thin_heap_/split_join_fn_imps.hpp>
#undef PB_DS_ASSERT_AUX_NULL
#undef PB_DS_ASSERT_NODE_CONSISTENT
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_BASE_T_P
#endif
