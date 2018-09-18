// GGHASH:VDaKy9ArZ_5n1belavtsy8Ucue6m_GyFDiJdM3Qfr6r000005529
#ifndef METAPROGRAMMING_H_INCLUDED
#define METAPROGRAMMING_H_INCLUDED 
#ifdef __cplusplus
#include <functional>
#include <new>
#include <cstdlib>
#ifdef _WIN32
#include <malloc.h>
#endif
#include <algorithm>
#if defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__)
#define __CILKRTS_STATIC_ASSERT(Cond,Msg) static_assert(Cond, Msg)
#else
#define __CILKRTS_STATIC_ASSERT(Cond,Msg) typedef int __CILKRTS_STATIC_ASSERT_DUMMY_TYPE [::cilk::internal::static_assert_failure<(Cond)>::Success]
#define __CILKRTS_STATIC_ASSERT_DUMMY_TYPE __CILKRTS_STATIC_ASSERT_DUMMY_TYPE1(__cilkrts_static_assert_, __LINE__)
#define __CILKRTS_STATIC_ASSERT_DUMMY_TYPE1(a,b) __CILKRTS_STATIC_ASSERT_DUMMY_TYPE2(a, b)
#define __CILKRTS_STATIC_ASSERT_DUMMY_TYPE2(a,b) a ## b
#endif
#ifdef _WIN32
#else
#if defined(__ANDROID__) || defined(__VXWORKS__)
#else
#endif
#endif
#ifdef _WIN32
#else
#endif
#endif
#endif
