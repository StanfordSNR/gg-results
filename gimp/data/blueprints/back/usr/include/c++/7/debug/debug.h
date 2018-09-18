// GGHASH:V33BPR6Ab5wvxEaE1BDB4eplQP3.P5lZnxxlRHVpN2Uo00001465
#ifndef _GLIBCXX_DEBUG_MACRO_SWITCH_H
#define _GLIBCXX_DEBUG_MACRO_SWITCH_H 1
#include <debug/assertions.h>
#ifndef _GLIBCXX_DEBUG
#define __glibcxx_requires_cond(_Cond,_Msg) 
#define __glibcxx_requires_valid_range(_First,_Last) 
#define __glibcxx_requires_sorted(_First,_Last) 
#define __glibcxx_requires_sorted_pred(_First,_Last,_Pred) 
#define __glibcxx_requires_sorted_set(_First1,_Last1,_First2) 
#define __glibcxx_requires_sorted_set_pred(_First1,_Last1,_First2,_Pred) 
#define __glibcxx_requires_partitioned_lower(_First,_Last,_Value) 
#define __glibcxx_requires_partitioned_upper(_First,_Last,_Value) 
#define __glibcxx_requires_partitioned_lower_pred(_First,_Last,_Value,_Pred) 
#define __glibcxx_requires_partitioned_upper_pred(_First,_Last,_Value,_Pred) 
#define __glibcxx_requires_heap(_First,_Last) 
#define __glibcxx_requires_heap_pred(_First,_Last,_Pred) 
#define __glibcxx_requires_string(_String) 
#define __glibcxx_requires_string_len(_String,_Len) 
#define __glibcxx_requires_irreflexive(_First,_Last) 
#define __glibcxx_requires_irreflexive2(_First,_Last) 
#define __glibcxx_requires_irreflexive_pred(_First,_Last,_Pred) 
#define __glibcxx_requires_irreflexive_pred2(_First,_Last,_Pred) 
#else
# include <debug/macros.h>
#define __glibcxx_requires_cond(_Cond,_Msg) _GLIBCXX_DEBUG_VERIFY(_Cond,_Msg)
#define __glibcxx_requires_valid_range(_First,_Last) __glibcxx_check_valid_range(_First,_Last)
#define __glibcxx_requires_sorted(_First,_Last) __glibcxx_check_sorted(_First,_Last)
#define __glibcxx_requires_sorted_pred(_First,_Last,_Pred) __glibcxx_check_sorted_pred(_First,_Last,_Pred)
#define __glibcxx_requires_sorted_set(_First1,_Last1,_First2) __glibcxx_check_sorted_set(_First1,_Last1,_First2)
#define __glibcxx_requires_sorted_set_pred(_First1,_Last1,_First2,_Pred) __glibcxx_check_sorted_set_pred(_First1,_Last1,_First2,_Pred)
#define __glibcxx_requires_partitioned_lower(_First,_Last,_Value) __glibcxx_check_partitioned_lower(_First,_Last,_Value)
#define __glibcxx_requires_partitioned_upper(_First,_Last,_Value) __glibcxx_check_partitioned_upper(_First,_Last,_Value)
#define __glibcxx_requires_partitioned_lower_pred(_First,_Last,_Value,_Pred) __glibcxx_check_partitioned_lower_pred(_First,_Last,_Value,_Pred)
#define __glibcxx_requires_partitioned_upper_pred(_First,_Last,_Value,_Pred) __glibcxx_check_partitioned_upper_pred(_First,_Last,_Value,_Pred)
#define __glibcxx_requires_heap(_First,_Last) __glibcxx_check_heap(_First,_Last)
#define __glibcxx_requires_heap_pred(_First,_Last,_Pred) __glibcxx_check_heap_pred(_First,_Last,_Pred)
#define __glibcxx_requires_string(_String) __glibcxx_check_string(_String)
#define __glibcxx_requires_string_len(_String,_Len) __glibcxx_check_string_len(_String,_Len)
#define __glibcxx_requires_irreflexive(_First,_Last) __glibcxx_check_irreflexive(_First,_Last)
#define __glibcxx_requires_irreflexive2(_First,_Last) __glibcxx_check_irreflexive2(_First,_Last)
#define __glibcxx_requires_irreflexive_pred(_First,_Last,_Pred) __glibcxx_check_irreflexive_pred(_First,_Last,_Pred)
#define __glibcxx_requires_irreflexive_pred2(_First,_Last,_Pred) __glibcxx_check_irreflexive_pred2(_First,_Last,_Pred)
# include <debug/functions.h>
#endif
#endif
