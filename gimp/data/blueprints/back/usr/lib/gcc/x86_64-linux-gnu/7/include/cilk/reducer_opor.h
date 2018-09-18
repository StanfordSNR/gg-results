// GGHASH:VRLqA0nKkq3Na73kpH.FGEgQR1cXXCW3gKrg3pNkdS_Y000057b4
#ifndef REDUCER_OPOR_H_INCLUDED
#define REDUCER_OPOR_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#endif
#define CILK_C_REDUCER_OPOR_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_opor_,tn)
#define CILK_C_REDUCER_OPOR(obj,tn,v) CILK_C_REDUCER_OPOR_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_opor_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_opor_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_OPOR_DECLARATION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPOR_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opor,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opor,tn);
#define CILK_C_REDUCER_OPOR_DEFINITION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPOR_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opor,tn,l,r) { *(t*)l |= *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opor,tn) { *(t*)v = 0; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_OPOR_INSTANCE(t,tn) CILK_C_REDUCER_OPOR_DEFINITION(t,tn)
#else
#define CILK_C_REDUCER_OPOR_INSTANCE(t,tn) CILK_C_REDUCER_OPOR_DECLARATION(t,tn)
#endif
#endif
