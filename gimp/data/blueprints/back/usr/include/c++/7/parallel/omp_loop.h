// GGHASH:VE_WK_.JYrKrG2ALZCN6ddKZ2PbIcV.X577Gsadrc62U00000fbf
#ifndef _GLIBCXX_PARALLEL_OMP_LOOP_H
#define _GLIBCXX_PARALLEL_OMP_LOOP_H 1
#include <omp.h>
#include <parallel/settings.h>
#include <parallel/basic_iterator.h>
#include <parallel/base.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp for schedule(dynamic, _Settings::get().workstealing_chunk_size)
#endif
