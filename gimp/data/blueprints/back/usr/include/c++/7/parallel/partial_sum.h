// GGHASH:Vd.pvtAVWaprJMUjHzfOEpkzymck.RPTzA3XKtGtikCM00001d32
#ifndef _GLIBCXX_PARALLEL_PARTIAL_SUM_H
#define _GLIBCXX_PARALLEL_PARTIAL_SUM_H 1
#include <omp.h>
#include <new>
#include <bits/stl_algobase.h>
#include <parallel/parallel.h>
#include <parallel/numericfwd.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp barrier
#pragma omp single
#pragma omp barrier
#endif
