// GGHASH:V6Ni2QLHU7OcNa02H8T8Dqv_zWxpP9XCNoEEui6d7i400000336a
#ifndef INCLUDED_CILK_COMMON
#define INCLUDED_CILK_COMMON 
#ifdef __cplusplus
#endif
#define CILK_LIBRARY_VERSION 102
#ifdef __cplusplus
# include <cassert>
#else
# include <assert.h>
#endif
#ifdef __cplusplus
#define __STDNS std::
#else
#define __STDNS 
#endif
#ifdef _WIN32
# ifdef IN_CILK_RUNTIME
#define CILK_EXPORT __declspec(dllexport)
#define CILK_EXPORT_DATA __declspec(dllexport)
# else
#define CILK_EXPORT __declspec(dllimport)
#define CILK_EXPORT_DATA __declspec(dllimport)
# endif
#elif defined(__CYGWIN__) || defined(__APPLE__) || defined(_DARWIN_C_SOURCE)
#define CILK_EXPORT 
#define CILK_EXPORT_DATA 
#else
# if defined(IN_CILK_RUNTIME) && defined(HAVE_ATTRIBUTE_VISIBILITY)
#define CILK_EXPORT __attribute__((visibility("protected")))
#define CILK_EXPORT_DATA __attribute__((visibility("protected")))
# else
#define CILK_EXPORT 
#define CILK_EXPORT_DATA 
# endif
#endif
#ifdef __cplusplus
#define __CILKRTS_BEGIN_EXTERN_C extern "C" {
#define __CILKRTS_END_EXTERN_C }
#define __CILKRTS_EXTERN_C extern "C"
#else
#define __CILKRTS_BEGIN_EXTERN_C 
#define __CILKRTS_END_EXTERN_C 
#define __CILKRTS_EXTERN_C 
#endif
#ifdef __cplusplus
# ifdef _WIN32
#define __CILKRTS_NOTHROW __declspec(nothrow)
# else
#define __CILKRTS_NOTHROW __attribute__((nothrow))
# endif
#else
#define __CILKRTS_NOTHROW 
#endif
#define __CILKRTS_CACHE_LINE__ 64
#ifdef _WIN32
#define CILK_ALIGNAS(n) __declspec(align(n))
#else
#define CILK_ALIGNAS(n) __attribute__((__aligned__(n)))
#endif
#define __CILKRTS_CACHE_ALIGN CILK_ALIGNAS(__CILKRTS_CACHE_LINE__)
#ifdef _WIN32
#define CILK_ALIGNAS_TYPE(t) __declspec(align(__alignof(t)))
#else
#define CILK_ALIGNAS_TYPE(t) __attribute__((__aligned__))
#endif
#ifdef _WIN32
#define CILK_API(RET_TYPE) CILK_EXPORT RET_TYPE __CILKRTS_NOTHROW __cdecl
#define CILK_ABI(RET_TYPE) CILK_EXPORT RET_TYPE __CILKRTS_NOTHROW __cdecl
#define CILK_ABI_THROWS(RET_TYPE) CILK_EXPORT RET_TYPE __cdecl
#else
#define CILK_API(RET_TYPE) CILK_EXPORT RET_TYPE __CILKRTS_NOTHROW
#define CILK_ABI(RET_TYPE) CILK_EXPORT RET_TYPE __CILKRTS_NOTHROW
#define CILK_ABI_THROWS(RET_TYPE) CILK_EXPORT RET_TYPE
#endif
#if defined(_WIN32) && defined(_DEBUG)
#define __CILKRTS_ASSERT(e) assert(e)
#elif (! defined(_WIN32)) && ! defined(__OPTIMIZE__)
#define __CILKRTS_ASSERT(e) assert(e)
#elif defined __cplusplus
#define __CILKRTS_ASSERT(e) static_cast<void>(0)
#else
#define __CILKRTS_ASSERT(e) ((void) 0)
#endif
#ifdef __cplusplus
#define __CILKRTS_INLINE inline
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __CILKRTS_INLINE static inline
#elif defined(_MSC_VER)
#define __CILKRTS_INLINE __inline
#else
#define __CILKRTS_INLINE extern __inline__
#endif
#ifdef COMPILING_CILK_API_FUNCTIONS
#define CILK_EXPORT_AND_INLINE CILK_EXPORT
#else
#define CILK_EXPORT_AND_INLINE __CILKRTS_INLINE
#endif
#if defined(__cplusplus) && !defined(__CILKRTS_RVALUE_REFERENCES)
# if __cplusplus >= 201103L
#define __CILKRTS_RVALUE_REFERENCES 1
# elif defined(__GXX_EXPERIMENTAL_CXX0X__)
#define __CILKRTS_RVALUE_REFERENCES 1
# elif __cplusplus >= 199711L && __cplusplus < 201103L
# elif __INTEL_COMPILER == 1200 && defined(__STDC_HOSTED__)
#define __CILKRTS_RVALUE_REFERENCES 1
# elif __INTEL_COMPILER > 1200 && defined(CHAR16T)
#define __CILKRTS_RVALUE_REFERENCES 1
# endif
#endif
#if ! defined(_MSC_VER) || (_MSC_VER >= 1600)
# include <stdint.h>
#else
# ifndef __MS_STDINT_TYPES_DEFINED__
#define __MS_STDINT_TYPES_DEFINED__ 
# endif
#endif
#ifndef __CILKRTS_ABI_VERSION
# ifdef IN_CILK_RUNTIME
#define __CILKRTS_ABI_VERSION 1
# elif defined(__INTEL_COMPILER) && (__INTEL_COMPILER <= 1200)
#define __CILKRTS_ABI_VERSION 0
# else
#define __CILKRTS_ABI_VERSION 1
# endif
#endif
#if __CILKRTS_ABI_VERSION >= 1
#endif
#endif
