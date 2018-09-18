// GGHASH:VOsaxFXtsvRUbVozen6N6PdW.47NWG7f_RqchT6lvUQQ00003ba7
#ifndef _GLIBCXX_PARALLEL_MULTIWAY_MERGESORT_H
#define _GLIBCXX_PARALLEL_MULTIWAY_MERGESORT_H 1
#include <vector>
#include <parallel/basic_iterator.h>
#include <bits/stl_algo.h>
#include <parallel/parallel.h>
#include <parallel/multiway_merge.h>
#pragma omp barrier
#pragma omp barrier
#pragma omp barrier
#pragma omp single
#pragma omp barrier
#pragma omp barrier
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#endif
