// GGHASH:VmqLSTBkECF.myXMmmtekQVAP.7mkd6LfASdiPobCi4M0000150f
#ifndef _GLIBCXX_PARALLEL_SEARCH_H
#define _GLIBCXX_PARALLEL_SEARCH_H 1
#include <bits/stl_algobase.h>
#include <parallel/parallel.h>
#include <parallel/equally_split.h>
#pragma omp parallel num_threads(__num_threads)
#pragma omp single
#pragma omp flush(__result)
#endif
