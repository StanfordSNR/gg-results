// GGHASH:VciXUz3awhXksbhV6QtmcE5fazHnKcS062iuIBOTnojo000017ee
#ifndef _GLIBCXX_PARALLEL_QUICKSORT_H
#define _GLIBCXX_PARALLEL_QUICKSORT_H 1
#include <parallel/parallel.h>
#include <parallel/partition.h>
#pragma omp parallel sections num_threads(2)
#pragma omp section
#pragma omp section
#endif
