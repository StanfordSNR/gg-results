// GGHASH:VClcb_BigRYcNTELpca4N4q1.TsmULSm9kjVnN36Vw9g00003a71
#ifndef _GLIBCXX_PARALLEL_PARTITION_H
#define _GLIBCXX_PARALLEL_PARTITION_H 1
#include <parallel/basic_iterator.h>
#include <parallel/sort.h>
#include <parallel/random_number.h>
#include <bits/stl_algo.h>
#include <parallel/parallel.h>
#define _GLIBCXX_VOLATILE volatile
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp single
#pragma omp atomic
#pragma omp atomic
#pragma omp barrier
#pragma omp barrier
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#pragma omp barrier
#pragma omp single
#endif
#pragma omp flush(__left, __right)
#undef _GLIBCXX_VOLATILE
#endif
