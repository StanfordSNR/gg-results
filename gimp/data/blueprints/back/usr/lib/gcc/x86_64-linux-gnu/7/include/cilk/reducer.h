// GGHASH:VP9WMZ0jnFq.GcvMb0.HffXw7RQleKEtn3qOsdeda3Vk000129ca
#ifndef REDUCER_H_INCLUDED
#define REDUCER_H_INCLUDED 
#include "cilk/hyperobject_base.h"
#include "cilk/metaprogramming.h"
#ifdef __cplusplus
#include <new>
#ifndef CILK_IGNORE_REDUCER_ALIGNMENT
#endif
#ifdef CILK_STUB
#endif
#ifdef CILK_STUB
#endif
#endif
#define __CILKRTS_MKIDENT(a,b) __CILKRTS_MKIDENT_IMP(a,b,)
#define __CILKRTS_MKIDENT3(a,b,c) __CILKRTS_MKIDENT_IMP(a,b,c)
#define __CILKRTS_MKIDENT_IMP(a,b,c) a ## b ## c
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
#define _Typeof __typeof__
#endif
#define __CILKRTS_DECLARE_REDUCER_IDENTITY(name,tn) CILK_EXPORT void __CILKRTS_MKIDENT3(name,_identity_,tn)(void* key, void* v)
#define __CILKRTS_DECLARE_REDUCER_REDUCE(name,tn,l,r) CILK_EXPORT void __CILKRTS_MKIDENT3(name,_reduce_,tn)(void* key, void* l, void* r)
#define __CILKRTS_DECLARE_REDUCER_DESTROY(name,tn,p) CILK_EXPORT void __CILKRTS_MKIDENT3(name,_destroy_,tn)(void* key, void* p)
#define CILK_C_DECLARE_REDUCER(Type) struct { __cilkrts_hyperobject_base __cilkrts_hyperbase; __CILKRTS_CACHE_ALIGN Type value; }
#define CILK_C_INIT_REDUCER(Type,Reduce,Identity,Destroy,...) { { { Reduce , Identity , Destroy , __cilkrts_hyperobject_alloc , __cilkrts_hyperobject_dealloc } , 0 , __CILKRTS_CACHE_LINE__ , sizeof(Type) } , __VA_ARGS__ }
#define CILK_C_REGISTER_REDUCER(Expr) __cilkrts_hyper_create(&(Expr).__cilkrts_hyperbase)
#define CILK_C_UNREGISTER_REDUCER(Expr) __cilkrts_hyper_destroy(&(Expr).__cilkrts_hyperbase)
#define REDUCER_VIEW(Expr) (*(_Typeof((Expr).value)*) __cilkrts_hyper_lookup(&(Expr).__cilkrts_hyperbase))
#endif
