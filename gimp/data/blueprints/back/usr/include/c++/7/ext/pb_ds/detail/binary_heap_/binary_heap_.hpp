// GGHASH:Vpk6pkecSG6d1azbFuVzb9cjUEBdt3wsJUhYQvcGVDk400002332
#ifndef PB_DS_BINARY_HEAP_HPP
#define PB_DS_BINARY_HEAP_HPP 
#include <queue>
#include <algorithm>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/binary_heap_/entry_cmp.hpp>
#include <ext/pb_ds/detail/binary_heap_/entry_pred.hpp>
#include <ext/pb_ds/detail/binary_heap_/resize_policy.hpp>
#include <ext/pb_ds/detail/binary_heap_/point_const_iterator.hpp>
#include <ext/pb_ds/detail/binary_heap_/const_iterator.hpp>
#ifdef PB_DS_BINARY_HEAP_TRACE_
#include <iostream>
#endif
#include <ext/pb_ds/detail/type_utils.hpp>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC binary_heap<Value_Type, Cmp_Fn, _Alloc>
#define PB_DS_ENTRY_CMP_DEC entry_cmp<Value_Type, Cmp_Fn, _Alloc, is_simple<Value_Type>::value>::type
#define PB_DS_RESIZE_POLICY_DEC __gnu_pbds::detail::resize_policy<typename _Alloc::size_type>
#ifdef PB_DS_BINARY_HEAP_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_BINARY_HEAP_TRACE_
#endif
#define PB_DS_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.assert_valid(__FILE__, __LINE__);)
#define PB_DS_DEBUG_VERIFY(_Cond) _GLIBCXX_DEBUG_VERIFY_AT(_Cond, _M_message(#_Cond" assertion from %1;:%2;") ._M_string(__FILE__)._M_integer(__LINE__) ,__file,__line)
#include <ext/pb_ds/detail/binary_heap_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/iterators_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/trace_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/info_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/find_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/split_join_fn_imps.hpp>
#include <ext/pb_ds/detail/binary_heap_/policy_access_fn_imps.hpp>
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_ENTRY_CMP_DEC
#undef PB_DS_RESIZE_POLICY_DEC
#endif
