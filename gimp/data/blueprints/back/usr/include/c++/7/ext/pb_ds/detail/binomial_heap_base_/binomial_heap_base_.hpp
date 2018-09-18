// GGHASH:V4k6FceTqtv.FN_.srYmASRFwPU05UJ3RJPtwOcl6zlE0000183a
#ifndef PB_DS_BINOMIAL_HEAP_BASE_HPP
#define PB_DS_BINOMIAL_HEAP_BASE_HPP 
#include <debug/debug.h>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/left_child_next_sibling_heap_/left_child_next_sibling_heap_.hpp>
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC binomial_heap_base<Value_Type, Cmp_Fn, _Alloc>
#ifdef _GLIBCXX_DEBUG
#define PB_DS_B_HEAP_BASE left_child_next_sibling_heap<Value_Type, Cmp_Fn, typename _Alloc::size_type, _Alloc, false>
#else
#define PB_DS_B_HEAP_BASE left_child_next_sibling_heap<Value_Type, Cmp_Fn, typename _Alloc::size_type, _Alloc>
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_ASSERT_VALID_COND(X,_StrictlyBinomial) _GLIBCXX_DEBUG_ONLY(X.assert_valid(_StrictlyBinomial,__FILE__, __LINE__);)
#define PB_DS_ASSERT_BASE_NODE_CONSISTENT(_Node,_Bool) _GLIBCXX_DEBUG_ONLY(base_type::assert_node_consistent(_Node, _Bool, __FILE__, __LINE__);)
#include <ext/pb_ds/detail/binomial_heap_base_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/split_join_fn_imps.hpp>
#undef PB_DS_ASSERT_BASE_NODE_CONSISTENT
#undef PB_DS_ASSERT_VALID_COND
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_B_HEAP_BASE
#endif
