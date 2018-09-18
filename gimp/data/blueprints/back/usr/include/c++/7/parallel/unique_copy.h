// GGHASH:V36UzGmYYeCMvBKCJxviF0ZVSsIDP8WRhaoZrLtaXl2E00001815
#ifndef _GLIBCXX_PARALLEL_UNIQUE_COPY_H
#define _GLIBCXX_PARALLEL_UNIQUE_COPY_H 1
#include <parallel/parallel.h>
#include <parallel/multiseq_selection.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp barrier
#endif
