// GGHASH:VhbsyySw.pzUMvGHFwpSYFIhSRxrw.6R7xUYorrIP9EU00003b84
#ifndef INCLUDED_CILK_API_H
#define INCLUDED_CILK_API_H 
#ifndef CILK_STUB
#if ! defined(__cilk) && ! defined(USE_CILK_API)
# ifdef _WIN32
# error Cilk API is being used with non-Cilk compiler (or Cilk is disabled)
# else
# warning Cilk API is being used with non-Cilk compiler (or Cilk is disabled)
# endif
#endif
#include <cilk/common.h>
#ifdef __cplusplus
# include <cstddef>
#else
# include <stddef.h>
#endif
#ifdef _WIN32
# ifndef IN_CILK_RUNTIME
#pragma comment(lib, "cilkrts")
# endif
# ifndef __cplusplus
# include <wchar.h>
# endif
#endif
#ifdef _WIN32
#endif
#ifdef _WIN32
#endif
#if __CILKRTS_ABI_VERSION >= 1
#endif
#else
#ifdef _WIN32
#define __cilkrts_set_param_w(name,value) ((value), 0)
#define __cilkrts_set_seh_callback(pfn) (0)
#endif
#define __cilkrts_set_param(name,value) ((value), 0)
#define __cilkrts_end_cilk() ((void) 0)
#define __cilkrts_init() ((void) 0)
#define __cilkrts_get_nworkers() (1)
#define __cilkrts_get_total_workers() (1)
#define __cilkrts_get_worker_number() (0)
#define __cilkrts_get_force_reduce() (0)
#define __cilkrts_metacall(tool,code,data) ((tool), (code), (data), 0)
#if __CILKRTS_ABI_VERSION >= 1
#define __cilkrts_get_pedigree_info(context,sf_birthrank) (-1)
#define __cilkrts_get_worker_rank(rank) (*(rank) = 0)
#define __cilkrts_bump_worker_rank() (-1)
#define __cilkrts_bump_loop_rank() (-1)
#define __cilkrts_get_pedigree() __cilkrts_get_pedigree_stub()
#endif
#endif
#endif
