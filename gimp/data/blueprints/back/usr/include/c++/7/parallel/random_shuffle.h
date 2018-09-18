// GGHASH:VspAMO1tI8PNZGFzbKVkYyrlMAKbRsrASwPuPXXzSEes000048f3
#ifndef _GLIBCXX_PARALLEL_RANDOM_SHUFFLE_H
#define _GLIBCXX_PARALLEL_RANDOM_SHUFFLE_H 1
#include <limits>
#include <bits/stl_numeric.h>
#include <parallel/parallel.h>
#include <parallel/random_number.h>
#pragma omp barrier
#pragma omp single
#pragma omp barrier
#pragma omp barrier
#pragma omp barrier
#pragma omp barrier
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB
#endif
#endif
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB
#endif
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1
#endif
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB
#endif
#endif
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB
#endif
#if _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1
#endif
#endif
