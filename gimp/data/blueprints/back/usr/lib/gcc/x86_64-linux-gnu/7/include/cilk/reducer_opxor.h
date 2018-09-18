// GGHASH:VeDLMQEMzAyi1IaVgKwkx6wRbGEcEjbYHBSfC6J4_8LE00005821
#ifndef REDUCER_OPXOR_H_INCLUDED
#define REDUCER_OPXOR_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#endif
#define CILK_C_REDUCER_OPXOR_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_opxor_,tn)
#define CILK_C_REDUCER_OPXOR(obj,tn,v) CILK_C_REDUCER_OPXOR_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_opxor_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_opxor_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_OPXOR_DECLARATION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPXOR_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opxor,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opxor,tn);
#define CILK_C_REDUCER_OPXOR_DEFINITION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPXOR_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opxor,tn,l,r) { *(t*)l ^= *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opxor,tn) { *(t*)v = 0; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_OPXOR_INSTANCE(t,tn) CILK_C_REDUCER_OPXOR_DEFINITION(t,tn)
#else
#define CILK_C_REDUCER_OPXOR_INSTANCE(t,tn) CILK_C_REDUCER_OPXOR_DECLARATION(t,tn)
#endif
#endif
