// GGHASH:VYxqSJQqcm7114rYTeg0Y0SZqlwFfQ0VrbsXS5EBHQMA00003664
#ifndef _GLIBCXX_PROFILE_PROFILER_H
#define _GLIBCXX_PROFILE_PROFILER_H 1
#include <bits/c++config.h>
#define _GLIBCXX_PROFILE_DEFINE_UNINIT_DATA(__type,__name) inline __type& __get_ ##__name() { static __type __name; return __name; }
#define _GLIBCXX_PROFILE_DEFINE_DATA(__type,__name,__initial_value...) inline __type& __get_ ##__name() { static __type __name(__initial_value); return __name; }
#define _GLIBCXX_PROFILE_DATA(__name) __get_ ##__name()
#ifdef _GLIBCXX_PROFILE
#ifndef _GLIBCXX_PROFILE_NO_HASHTABLE_TOO_SMALL
#define _GLIBCXX_PROFILE_HASHTABLE_TOO_SMALL 
#endif
#ifndef _GLIBCXX_PROFILE_NO_HASHTABLE_TOO_LARGE
#define _GLIBCXX_PROFILE_HASHTABLE_TOO_LARGE 
#endif
#ifndef _GLIBCXX_PROFILE_NO_VECTOR_TOO_SMALL
#define _GLIBCXX_PROFILE_VECTOR_TOO_SMALL 
#endif
#ifndef _GLIBCXX_PROFILE_NO_VECTOR_TOO_LARGE
#define _GLIBCXX_PROFILE_VECTOR_TOO_LARGE 
#endif
#ifndef _GLIBCXX_PROFILE_NO_INEFFICIENT_HASH
#define _GLIBCXX_PROFILE_INEFFICIENT_HASH 
#endif
#ifndef _GLIBCXX_PROFILE_NO_VECTOR_TO_LIST
#define _GLIBCXX_PROFILE_VECTOR_TO_LIST 
#endif
#ifndef _GLIBCXX_PROFILE_NO_LIST_TO_SLIST
#define _GLIBCXX_PROFILE_LIST_TO_SLIST 
#endif
#ifndef _GLIBCXX_PROFILE_NO_LIST_TO_VECTOR
#define _GLIBCXX_PROFILE_LIST_TO_VECTOR 
#endif
#ifndef _GLIBCXX_PROFILE_NO_MAP_TO_UNORDERED_MAP
#define _GLIBCXX_PROFILE_MAP_TO_UNORDERED_MAP 
#endif
#endif
#ifdef _GLIBCXX_PROFILE
#define __profcxx_report() __gnu_profile::__report()
#define __profcxx_turn_on() __gnu_profile::__turn_on()
#define __profcxx_turn_off() __gnu_profile::__turn_off()
#define __profcxx_is_invalid() __gnu_profile::__is_invalid()
#define __profcxx_is_on() __gnu_profile::__is_on()
#define __profcxx_is_off() __gnu_profile::__is_off()
#else
#define __profcxx_report() 
#define __profcxx_turn_on() 
#define __profcxx_turn_off() 
#define __profcxx_is_invalid() 
#define __profcxx_is_on() 
#define __profcxx_is_off() 
#endif
#if (defined(_GLIBCXX_PROFILE_HASHTABLE_TOO_SMALL) || defined(_GLIBCXX_PROFILE_HASHTABLE_TOO_LARGE))
#define __profcxx_hashtable_size_construct(__x...) __gnu_profile::__trace_hashtable_size_construct(__x)
#define __profcxx_hashtable_size_resize(__x...) __gnu_profile::__trace_hashtable_size_resize(__x)
#define __profcxx_hashtable_size_destruct(__x...) __gnu_profile::__trace_hashtable_size_destruct(__x)
#else
#define __profcxx_hashtable_size_construct(__x...) 0
#define __profcxx_hashtable_size_resize(__x...) 
#define __profcxx_hashtable_size_destruct(__x...) 
#endif
#if (defined(_GLIBCXX_PROFILE_VECTOR_TOO_SMALL) || defined(_GLIBCXX_PROFILE_VECTOR_TOO_LARGE))
#define __profcxx_vector_size_construct(__x...) __gnu_profile::__trace_vector_size_construct(__x)
#define __profcxx_vector_size_resize(__x...) __gnu_profile::__trace_vector_size_resize(__x)
#define __profcxx_vector_size_destruct(__x...) __gnu_profile::__trace_vector_size_destruct(__x)
#else
#define __profcxx_vector_size_construct(__x...) 0
#define __profcxx_vector_size_resize(__x...) 
#define __profcxx_vector_size_destruct(__x...) 
#endif
#if defined(_GLIBCXX_PROFILE_INEFFICIENT_HASH)
#define __profcxx_hash_func_construct(__x...) __gnu_profile::__trace_hash_func_construct(__x)
#define __profcxx_hash_func_destruct(__x...) __gnu_profile::__trace_hash_func_destruct(__x)
#else
#define __profcxx_hash_func_construct(__x...) 0
#define __profcxx_hash_func_destruct(__x...) 
#endif
#if defined(_GLIBCXX_PROFILE_VECTOR_TO_LIST)
#define __profcxx_vector2list_construct(__x...) __gnu_profile::__trace_vector_to_list_construct(__x)
#define __profcxx_vector2list_insert(__x...) __gnu_profile::__trace_vector_to_list_insert(__x)
#define __profcxx_vector2list_iterate(__x...) __gnu_profile::__trace_vector_to_list_iterate(__x)
#define __profcxx_vector2list_invalid_operator(__x...) __gnu_profile::__trace_vector_to_list_invalid_operator(__x)
#define __profcxx_vector2list_resize(__x...) __gnu_profile::__trace_vector_to_list_resize(__x)
#define __profcxx_vector2list_destruct(__x...) __gnu_profile::__trace_vector_to_list_destruct(__x)
#else
#define __profcxx_vector2list_construct(__x...) 0
#define __profcxx_vector2list_insert(__x...) 
#define __profcxx_vector2list_iterate(__x...) 
#define __profcxx_vector2list_invalid_operator(__x...) 
#define __profcxx_vector2list_resize(__x...) 
#define __profcxx_vector2list_destruct(__x...) 
#endif
#if defined(_GLIBCXX_PROFILE_LIST_TO_VECTOR)
#define __profcxx_list2vector_construct(__x...) __gnu_profile::__trace_list_to_vector_construct(__x)
#define __profcxx_list2vector_insert(__x...) __gnu_profile::__trace_list_to_vector_insert(__x)
#define __profcxx_list2vector_iterate(__x...) __gnu_profile::__trace_list_to_vector_iterate(__x)
#define __profcxx_list2vector_invalid_operator(__x...) __gnu_profile::__trace_list_to_vector_invalid_operator(__x)
#define __profcxx_list2vector_destruct(__x...) __gnu_profile::__trace_list_to_vector_destruct(__x)
#else
#define __profcxx_list2vector_construct(__x...) 0
#define __profcxx_list2vector_insert(__x...) 
#define __profcxx_list2vector_iterate(__x...) 
#define __profcxx_list2vector_invalid_operator(__x...) 
#define __profcxx_list2vector_destruct(__x...) 
#endif
#if defined(_GLIBCXX_PROFILE_LIST_TO_SLIST)
#define __profcxx_list2slist_construct(__x...) __gnu_profile::__trace_list_to_slist_construct(__x)
#define __profcxx_list2slist_rewind(__x...) __gnu_profile::__trace_list_to_slist_rewind(__x)
#define __profcxx_list2slist_operation(__x...) __gnu_profile::__trace_list_to_slist_operation(__x)
#define __profcxx_list2slist_destruct(__x...) __gnu_profile::__trace_list_to_slist_destruct(__x)
#else
#define __profcxx_list2slist_construct(__x...) 0
#define __profcxx_list2slist_rewind(__x...) 
#define __profcxx_list2slist_operation(__x...) 
#define __profcxx_list2slist_destruct(__x...) 
#endif
#if defined(_GLIBCXX_PROFILE_MAP_TO_UNORDERED_MAP)
#define __profcxx_map2umap_construct(__x...) __gnu_profile::__trace_map_to_unordered_map_construct(__x)
#define __profcxx_map2umap_insert(__x...) __gnu_profile::__trace_map_to_unordered_map_insert(__x)
#define __profcxx_map2umap_erase(__x...) __gnu_profile::__trace_map_to_unordered_map_erase(__x)
#define __profcxx_map2umap_iterate(__x...) __gnu_profile::__trace_map_to_unordered_map_iterate(__x)
#define __profcxx_map2umap_invalidate(__x...) __gnu_profile::__trace_map_to_unordered_map_invalidate(__x)
#define __profcxx_map2umap_find(__x...) __gnu_profile::__trace_map_to_unordered_map_find(__x)
#define __profcxx_map2umap_destruct(__x...) __gnu_profile::__trace_map_to_unordered_map_destruct(__x)
#else
#define __profcxx_map2umap_construct(__x...) 0
#define __profcxx_map2umap_insert(__x...) 
#define __profcxx_map2umap_erase(__x...) 
#define __profcxx_map2umap_iterate(__x...) 
#define __profcxx_map2umap_invalidate(__x...) 
#define __profcxx_map2umap_find(__x...) 
#define __profcxx_map2umap_destruct(__x...) 
#endif
#ifndef _GLIBCXX_PROFILE_TRACE_PATH_ROOT
#define _GLIBCXX_PROFILE_TRACE_PATH_ROOT "libstdcxx-profile"
#endif
#ifndef _GLIBCXX_PROFILE_TRACE_ENV_VAR
#define _GLIBCXX_PROFILE_TRACE_ENV_VAR "_GLIBCXX_PROFILE_TRACE_PATH_ROOT"
#endif
#ifndef _GLIBCXX_PROFILE_MAX_WARN_COUNT_ENV_VAR
#define _GLIBCXX_PROFILE_MAX_WARN_COUNT_ENV_VAR "_GLIBCXX_PROFILE_MAX_WARN_COUNT"
#endif
#ifndef _GLIBCXX_PROFILE_MAX_WARN_COUNT
#define _GLIBCXX_PROFILE_MAX_WARN_COUNT 10
#endif
#ifndef _GLIBCXX_PROFILE_MAX_STACK_DEPTH
#define _GLIBCXX_PROFILE_MAX_STACK_DEPTH 32
#endif
#ifndef _GLIBCXX_PROFILE_MAX_STACK_DEPTH_ENV_VAR
#define _GLIBCXX_PROFILE_MAX_STACK_DEPTH_ENV_VAR "_GLIBCXX_PROFILE_MAX_STACK_DEPTH"
#endif
#ifndef _GLIBCXX_PROFILE_MEM_PER_DIAGNOSTIC
#define _GLIBCXX_PROFILE_MEM_PER_DIAGNOSTIC (1 << 28)
#endif
#ifndef _GLIBCXX_PROFILE_MEM_PER_DIAGNOSTIC_ENV_VAR
#define _GLIBCXX_PROFILE_MEM_PER_DIAGNOSTIC_ENV_VAR "_GLIBCXX_PROFILE_MEM_PER_DIAGNOSTIC"
#endif
#include "profile/impl/profiler_hash_func.h"
#include "profile/impl/profiler_hashtable_size.h"
#include "profile/impl/profiler_map_to_unordered_map.h"
#include "profile/impl/profiler_vector_size.h"
#include "profile/impl/profiler_vector_to_list.h"
#include "profile/impl/profiler_list_to_slist.h"
#include "profile/impl/profiler_list_to_vector.h"
#endif
