// GGHASH:V3TPJ9K0D7rcdfbAXTtsn_YE6Mi8pHnRSmUrKIGfjhdQ00000b37
#include <cstdio>
#define _GLIBCXX_VERBOSE_LEVEL 0
#if (_GLIBCXX_VERBOSE_LEVEL == 0)
#define _GLIBCXX_CALL(__n) 
#endif
#if (_GLIBCXX_VERBOSE_LEVEL == 1)
#define _GLIBCXX_CALL(__n) printf("   %__s:\niam = %d, __n = %ld, __num_threads = %d\n", __PRETTY_FUNCTION__, omp_get_thread_num(), (__n), __get_max_threads());
#endif
#ifndef _GLIBCXX_SCALE_DOWN_FPU
#define _GLIBCXX_SCALE_DOWN_FPU 0
#endif
#ifndef _GLIBCXX_PARALLEL_ASSERTIONS
#define _GLIBCXX_PARALLEL_ASSERTIONS (_GLIBCXX_ASSERTIONS+0)
#endif
#ifndef _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1
#define _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_L1 0
#endif
#ifndef _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB
#define _GLIBCXX_RANDOM_SHUFFLE_CONSIDER_TLB 0
#endif
