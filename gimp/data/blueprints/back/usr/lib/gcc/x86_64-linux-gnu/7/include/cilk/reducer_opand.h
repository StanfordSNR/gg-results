// GGHASH:Vn.dVFzSnVNAXo_Mrrx6RF7XZU0zazFRNlBAz86BRlaw000058c6
#ifndef REDUCER_OPAND_H_INCLUDED
#define REDUCER_OPAND_H_INCLUDED 
#include <cilk/reducer.h>
#ifdef __cplusplus
#endif
#define CILK_C_REDUCER_OPAND_TYPE(tn) __CILKRTS_MKIDENT(cilk_c_reducer_opand_,tn)
#define CILK_C_REDUCER_OPAND(obj,tn,v) CILK_C_REDUCER_OPAND_TYPE(tn) obj = CILK_C_INIT_REDUCER(_Typeof(obj.value), __CILKRTS_MKIDENT(cilk_c_reducer_opand_reduce_,tn), __CILKRTS_MKIDENT(cilk_c_reducer_opand_identity_,tn), __cilkrts_hyperobject_noop_destroy, v)
#define CILK_C_REDUCER_OPAND_DECLARATION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPAND_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opand,tn,l,r); __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opand,tn);
#define CILK_C_REDUCER_OPAND_DEFINITION(t,tn) typedef CILK_C_DECLARE_REDUCER(t) CILK_C_REDUCER_OPAND_TYPE(tn); __CILKRTS_DECLARE_REDUCER_REDUCE(cilk_c_reducer_opand,tn,l,r) { *(t*)l &= *(t*)r; } __CILKRTS_DECLARE_REDUCER_IDENTITY(cilk_c_reducer_opand,tn) { *(t*)v = ~((t)0); }
#ifdef CILK_C_DEFINE_REDUCERS
#define CILK_C_REDUCER_OPAND_INSTANCE(t,tn) CILK_C_REDUCER_OPAND_DEFINITION(t,tn)
#else
#define CILK_C_REDUCER_OPAND_INSTANCE(t,tn) CILK_C_REDUCER_OPAND_DECLARATION(t,tn)
#endif
#endif
