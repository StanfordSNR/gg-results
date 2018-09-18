// GGHASH:VTJel_faHn3swN2ls7oZC_BLGL.qSq6c_7YeiHVKtVQI000038fe
#ifndef _GLIBCXX_PARALLEL_SET_OPERATIONS_H
#define _GLIBCXX_PARALLEL_SET_OPERATIONS_H 1
#include <omp.h>
#include <parallel/settings.h>
#include <parallel/multiseq_selection.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp barrier
#pragma omp barrier
#endif
