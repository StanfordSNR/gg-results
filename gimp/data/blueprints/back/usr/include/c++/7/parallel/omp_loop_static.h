// GGHASH:VmtPB92dOPdYZbOVWUsrpdRgzkOKqrlE6LDwsy0dw1A800001008
#ifndef _GLIBCXX_PARALLEL_OMP_LOOP_STATIC_H
#define _GLIBCXX_PARALLEL_OMP_LOOP_STATIC_H 1
#include <omp.h>
#include <parallel/settings.h>
#include <parallel/basic_iterator.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp for schedule(static, _Settings::get().workstealing_chunk_size)
#endif
