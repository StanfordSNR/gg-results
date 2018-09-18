// GGHASH:VVb.YVIj382taQyLu6rdsT29ZISuwMgPFxwrpu.dV.gU000246a7
#ifndef REDUCER_MIN_MAX_H_INCLUDED
#define REDUCER_MIN_MAX_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#include <algorithm>
#include <limits>
#ifndef CILK_LIBRARY_0_9_REDUCER_MINMAX
#endif
#ifndef CILK_LIBRARY_0_9_REDUCER_MINMAX
#endif
#ifndef CILK_LIBRARY_0_9_REDUCER_MINMAX
#endif
#endif
#ifdef CILK_C_DEFINE_REDUCERS
#include <limits.h>
#if defined(_MSC_VER) || defined(__ANDROID__)
# include <wchar.h>
#else
# include <stdint.h>
#endif
#include <math.h>
#ifndef HUGE_VALF
#define HUGE_VALF (*((const float *)__huge_valf))
#endif
#ifndef HUGE_VALL
#define HUGE_VALL (*((const long double *)__huge_vall))
#endif
#endif
#define CILK_C_REDUCER_MAX_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_max_,tn)
#define CILK_C_REDUCER_MAX(obj,tn,v) CILK_C_REDUCER_MAX_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_max_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_max_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_MAX_CALC(reducer,v) do { _Typeof((reducer).value)* view = &(REDUCER_VIEW(reducer)); _Typeof(v) __value = (v); if (*view < __value) { *view = __value; } } while (0)
#define CILK_C_REDUCER_MAX_DECLARATION(t,tn,id) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_MAX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_max,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_max,tn);
#define CILK_C_REDUCER_MAX_DEFINITION(t,tn,id) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_MAX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_max,tn,l,r) { if (*(t*)l < *(t*)r) *(t*)l = *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_max,tn) { *(t*)v = id; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_MAX_INSTANCE(t,tn,id) CILK_C_REDUCER_MAX_DEFINITION(t,tn,id)
#else
#define CILK_C_REDUCER_MAX_INSTANCE(t,tn,id) CILK_C_REDUCER_MAX_DECLARATION(t,tn,id)
#endif
#define CILK_C_REDUCER_MAX_INDEX_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_max_index_,tn)
#define CILK_C_REDUCER_MAX_INDEX(obj,tn,v) CILK_C_REDUCER_MAX_INDEX_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_max_index_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_max_index_identity_,tn), __cilkrts_hyperobject_noop_destroy, {0, v})
#define CILK_C_REDUCER_MAX_INDEX_CALC(reducer,i,v) do { _Typeof((reducer).value)* view = &(REDUCER_VIEW(reducer)); _Typeof(v) __value = (v); if (view->value < __value) { view->index = (i); view->value = __value; } } while (0)
#define CILK_C_REDUCER_MAX_INDEX_VIEW(t,tn) typedef struct { __STDNS ptrdiff_t index; t value; } __CILKRTS_MKIDENT(cilk_c_reducer_max_index_view_,tn)
#define CILK_C_REDUCER_MAX_INDEX_DECLARATION(t,tn,id) CILK_C_REDUCER_MAX_INDEX_VIEW(t,tn); typedef CILK_C_DECLARE_REDUCER( __CILKRTS_MKIDENT(cilk_c_reducer_max_index_view_,tn)) CILK_C_REDUCER_MAX_INDEX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_max_index,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_max_index,tn);
#define CILK_C_REDUCER_MAX_INDEX_DEFINITION(t,tn,id) CILK_C_REDUCER_MAX_INDEX_VIEW(t,tn); typedef CILK_C_DECLARE_REDUCER( __CILKRTS_MKIDENT(cilk_c_reducer_max_index_view_,tn)) CILK_C_REDUCER_MAX_INDEX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_max_index,tn,l,r) { typedef __CILKRTS_MKIDENT(cilk_c_reducer_max_index_view_,tn) view_t; if (((view_t*)l)->value < ((view_t*)r)->value) *(view_t*)l = *(view_t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_max_index,tn) { typedef __CILKRTS_MKIDENT(cilk_c_reducer_max_index_view_,tn) view_t; ((view_t*)v)->index = 0; ((view_t*)v)->value = id; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_MAX_INDEX_INSTANCE(t,tn,id) CILK_C_REDUCER_MAX_INDEX_DEFINITION(t,tn,id)
#else
#define CILK_C_REDUCER_MAX_INDEX_INSTANCE(t,tn,id) CILK_C_REDUCER_MAX_INDEX_DECLARATION(t,tn,id)
#endif
#define CILK_C_REDUCER_MIN_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_min_,tn)
#define CILK_C_REDUCER_MIN(obj,tn,v) CILK_C_REDUCER_MIN_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_min_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_min_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_MIN_CALC(reducer,v) do { _Typeof((reducer).value)* view = &(REDUCER_VIEW(reducer)); _Typeof(v) __value = (v); if (*view > __value) { *view = __value; } } while (0)
#define CILK_C_REDUCER_MIN_DECLARATION(t,tn,id) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_MIN_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_min,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_min,tn);
#define CILK_C_REDUCER_MIN_DEFINITION(t,tn,id) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_MIN_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_min,tn,l,r) { if (*(t*)l > *(t*)r) *(t*)l = *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_min,tn) { *(t*)v = id; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_MIN_INSTANCE(t,tn,id) CILK_C_REDUCER_MIN_DEFINITION(t,tn,id)
#else
#define CILK_C_REDUCER_MIN_INSTANCE(t,tn,id) CILK_C_REDUCER_MIN_DECLARATION(t,tn,id)
#endif
#define CILK_C_REDUCER_MIN_INDEX_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_min_index_,tn)
#define CILK_C_REDUCER_MIN_INDEX(obj,tn,v) CILK_C_REDUCER_MIN_INDEX_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_min_index_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_min_index_identity_,tn), __cilkrts_hyperobject_noop_destroy, {0, v})
#define CILK_C_REDUCER_MIN_INDEX_CALC(reducer,i,v) do { _Typeof((reducer).value)* view = &(REDUCER_VIEW(reducer)); _Typeof(v) __value = (v); if (view->value > __value) { view->index = (i); view->value = __value; } } while (0)
#define CILK_C_REDUCER_MIN_INDEX_VIEW(t,tn) typedef struct { __STDNS ptrdiff_t index; t value; } __CILKRTS_MKIDENT(cilk_c_reducer_min_index_view_,tn)
#define CILK_C_REDUCER_MIN_INDEX_DECLARATION(t,tn,id) CILK_C_REDUCER_MIN_INDEX_VIEW(t,tn); typedef CILK_C_DECLARE_REDUCER( __CILKRTS_MKIDENT(cilk_c_reducer_min_index_view_,tn)) CILK_C_REDUCER_MIN_INDEX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_min_index,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_min_index,tn);
#define CILK_C_REDUCER_MIN_INDEX_DEFINITION(t,tn,id) CILK_C_REDUCER_MIN_INDEX_VIEW(t,tn); typedef CILK_C_DECLARE_REDUCER( __CILKRTS_MKIDENT(cilk_c_reducer_min_index_view_,tn)) CILK_C_REDUCER_MIN_INDEX_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_min_index,tn,l,r) { typedef __CILKRTS_MKIDENT(cilk_c_reducer_min_index_view_,tn) view_t; if (((view_t*)l)->value > ((view_t*)r)->value) *(view_t*)l = *(view_t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_min_index,tn) { typedef __CILKRTS_MKIDENT(cilk_c_reducer_min_index_view_,tn) view_t; ((view_t*)v)->index = 0; ((view_t*)v)->value = id; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_MIN_INDEX_INSTANCE(t,tn,id) CILK_C_REDUCER_MIN_INDEX_DEFINITION(t,tn,id)
#else
#define CILK_C_REDUCER_MIN_INDEX_INSTANCE(t,tn,id) CILK_C_REDUCER_MIN_INDEX_DECLARATION(t,tn,id)
#endif
#endif
