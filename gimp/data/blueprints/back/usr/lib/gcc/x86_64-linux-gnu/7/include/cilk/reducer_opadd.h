// GGHASH:VRcXX6mjl2kO1guCAagBhvhDfaUR8s5m12nrlozFmbAQ00006667
#ifndef REDUCER_OPADD_H_INCLUDED
#define REDUCER_OPADD_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#endif
#define CILK_C_REDUCER_OPADD_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_opadd_,tn)
#define CILK_C_REDUCER_OPADD(obj,tn,v) CILK_C_REDUCER_OPADD_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_opadd_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_opadd_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_OPADD_DECLARATION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPADD_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opadd,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opadd,tn);
#define CILK_C_REDUCER_OPADD_DEFINITION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPADD_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opadd,tn,l,r) { *(t*)l += *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opadd,tn) { *(t*)v = 0; }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_OPADD_INSTANCE(t,tn) CILK_C_REDUCER_OPADD_DEFINITION(t,tn)
#else
#define CILK_C_REDUCER_OPADD_INSTANCE(t,tn) CILK_C_REDUCER_OPADD_DECLARATION(t,tn)
#endif
#endif
