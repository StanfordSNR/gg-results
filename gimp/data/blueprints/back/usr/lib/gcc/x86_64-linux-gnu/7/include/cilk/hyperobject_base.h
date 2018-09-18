// GGHASH:VJfeFrRjVRkifMEDsWwD83BvRfmcsk1QvqUrXRN9CIh800001bc3
#ifndef INCLUDED_CILK_HYPEROBJECT_BASE
#define INCLUDED_CILK_HYPEROBJECT_BASE 
#ifdef __cplusplus
# include <cstdlib>
# include <cstddef>
#else
# include <stdlib.h>
# include <stddef.h>
#endif
#include <cilk/common.h>
#if defined _WIN32 || defined _WIN64
# if !defined CILK_STUB && !defined IN_CILK_RUNTIME
#pragma comment(lib, "cilkrts")
# endif
#endif
#if 0 && defined __cilk && (defined __GNUC__ && !defined _WIN32) && defined __cilkartsrev
#define __CILKRTS_STRAND_PURE(func) func __attribute__((__cilk_hyper__("lookup")))
#define __CILKRTS_STRAND_STALE(func) func __attribute__((__cilk_hyper__("flush")))
#else
#define __CILKRTS_STRAND_PURE(func) func
#define __CILKRTS_STRAND_STALE(func) func
#endif
#ifndef CILK_STUB
#else
#define __cilkrts_hyperobject_create __cilkrts_hyperobject_create__stub
#define __cilkrts_hyperobject_destroy __cilkrts_hyperobject_destroy__stub
#define __cilkrts_hyperobject_lookup __cilkrts_hyperobject_lookup__stub
#define __cilkrts_hyperobject_alloc __cilkrts_hyperobject_alloc__stub
#define __cilkrts_hyperobject_dealloc __cilkrts_hyperobject_dealloc__stub
#define __cilkrts_hyperobject_noop_destroy __cilkrts_hyperobject_noop_destroy__stub
#endif
#endif
