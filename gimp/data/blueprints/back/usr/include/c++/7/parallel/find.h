// GGHASH:VzRCjf96NlbSAt_IDgTuQCvIm.yQ3rl.5dDMbxlYp2sw00003517
#ifndef _GLIBCXX_PARALLEL_FIND_H
#define _GLIBCXX_PARALLEL_FIND_H 1
#include <bits/stl_algobase.h>
#include <parallel/features.h>
#include <parallel/parallel.h>
#include <parallel/compatibility.h>
#include <parallel/equally_split.h>
#if _GLIBCXX_FIND_EQUAL_SPLIT
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp flush(__result)
#endif
#if _GLIBCXX_FIND_GROWING_BLOCKS
#pragma omp parallel shared(__result) num_threads(__num_threads)
#pragma omp single
#pragma omp flush(__result)
#endif
#if _GLIBCXX_FIND_CONSTANT_SIZE_BLOCKS
#pragma omp parallel shared(__result) num_threads(__num_threads)
#pragma omp single
#pragma omp flush(__result)
#endif
#endif
