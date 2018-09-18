// GGHASH:VvfhE4fBxoYEIOpxerK5lTPEeu.ASNW35BNvhJv52.xw00001fef
#ifndef PB_DS_LEFT_CHILD_NEXT_SIBLING_HEAP_HPP
#define PB_DS_LEFT_CHILD_NEXT_SIBLING_HEAP_HPP 
#include <iterator>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/node.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/point_const_iterator.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/const_iterator.hpp>
#ifdef PB_DS_LC_NS_HEAP_TRACE_
#include <iostream>
#endif
#include <debug/debug.h>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename Node_Metadata, typename _Alloc, bool Single_Link_Roots>
#define PB_DS_CLASS_C_DEC left_child_next_sibling_heap<Value_Type, Cmp_Fn, Node_Metadata, _Alloc, Single_Link_Roots>
#else
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename Node_Metadata, typename _Alloc>
#define PB_DS_CLASS_C_DEC left_child_next_sibling_heap<Value_Type, Cmp_Fn, Node_Metadata, _Alloc>
#endif
#ifdef _GLIBCXX_DEBUG
#else
#endif
#ifdef PB_DS_LC_NS_HEAP_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_LC_NS_HEAP_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_LC_NS_HEAP_TRACE_
#endif
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/trace_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/info_fn_imps.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/policy_access_fn_imps.hpp>
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#endif
