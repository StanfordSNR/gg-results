// GGHASH:VVpJtTSd2dqnG4pu3ANTi46zKTxhCOQzPf2RsheRuiao00004241
#ifndef REDUCER_OPMUL_H_INCLUDED
#define REDUCER_OPMUL_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#endif
#define CILK_C_REDUCER_OPMUL_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_opmul_,tn)
#define CILK_C_REDUCER_OPMUL(obj,tn,v) CILK_C_REDUCER_OPMUL_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_opmul_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_opmul_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_OPMUL_DECLARATION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPMUL_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opmul,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opmul,tn);
#define CILK_C_REDUCER_OPMUL_DEFINITION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPMUL_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opmul,tn,l,r) { *(t*)l *= *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opmul,tn) { *(t*)v = 1; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_OPMUL_INSTANCE(t,tn) CILK_C_REDUCER_OPMUL_DEFINITION(t,tn)
#else
#define CILK_C_REDUCER_OPMUL_INSTANCE(t,tn) CILK_C_REDUCER_OPMUL_DECLARATION(t,tn)
#endif
#endif
