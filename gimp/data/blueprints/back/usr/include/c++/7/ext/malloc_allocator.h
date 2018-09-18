// GGHASH:Vc_ukR8L81O8kSMP6mzFqqplQaVpXNdXKRm4qjWQ5bIo000013de
#ifndef _MALLOC_ALLOCATOR_H
#define _MALLOC_ALLOCATOR_H 1
#include <cstdlib>
#include <cstddef>
#include <new>
#include <bits/functexcept.h>
#include <bits/move.h>
#if __cplusplus >= 201103L
#include <type_traits>
#endif
#if __cplusplus >= 201103L
#endif
#if __cpp_aligned_new
#if __cplusplus > 201402L && _GLIBCXX_HAVE_ALIGNED_ALLOC
#else
#define _GLIBCXX_CHECK_MALLOC_RESULT 
#endif
#endif
#ifdef _GLIBCXX_CHECK_MALLOC_RESULT
#undef _GLIBCXX_CHECK_MALLOC_RESULT
#endif
#if __cplusplus >= 201103L
#else
#endif
#endif
