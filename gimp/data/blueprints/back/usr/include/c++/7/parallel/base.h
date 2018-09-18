// GGHASH:VV_Z3yKIgEnlgiJvzvXSaUweFYT8rK8XZKptORzeAJcQ00003055
#ifndef _GLIBCXX_PARALLEL_BASE_H
#define _GLIBCXX_PARALLEL_BASE_H 1
#include <bits/c++config.h>
#include <bits/stl_function.h>
#include <omp.h>
#include <parallel/features.h>
#include <parallel/basic_iterator.h>
#include <parallel/parallel.h>
#ifdef _GLIBCXX_PARALLEL
#else
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS && defined(__glibcxx_assert_impl)
#define _GLIBCXX_PARALLEL_ASSERT(_Condition) __glibcxx_assert_impl(_Condition)
#else
#define _GLIBCXX_PARALLEL_ASSERT(_Condition) 
#endif
#endif
