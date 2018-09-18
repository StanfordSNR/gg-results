// GGHASH:VW1rX2i2ZxzKmVd1o9vR0R1RxpXB2YQcZOTWuXz8NJPE0000258c
#ifndef _GLIBCXX_PARALLEL_WORKSTEALING_H
#define _GLIBCXX_PARALLEL_WORKSTEALING_H 1
#include <parallel/parallel.h>
#include <parallel/random_number.h>
#include <parallel/compatibility.h>
#define _GLIBCXX_JOB_VOLATILE volatile
#pragma omp parallel shared(__busy) num_threads(__num_threads)
#pragma omp single
#pragma omp atomic
#pragma omp barrier
#pragma omp flush(__busy)
#pragma omp flush(__busy)
#pragma omp atomic
#pragma omp flush(__busy)
#pragma omp atomic
#pragma omp flush(__busy)
#pragma omp flush(__busy)
#endif
