// GGHASH:Ve2t0Y17WuiSMPyaTlT2qeQvw0pkhg3pCeda05h3SFYY00011387
#ifndef _GLIBCXX_PARALLEL_MULTIWAY_MERGE_H
#define _GLIBCXX_PARALLEL_MULTIWAY_MERGE_H 
#include <vector>
#include <bits/stl_algo.h>
#include <parallel/features.h>
#include <parallel/parallel.h>
#include <parallel/losertree.h>
#include <parallel/multiseq_selection.h>
#if _GLIBCXX_PARALLEL_ASSERTIONS
#include <parallel/checkers.h>
#endif
#define _GLIBCXX_PARALLEL_LENGTH(__s) ((__s).second - (__s).first)
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#define _GLIBCXX_PARALLEL_MERGE_3_CASE(__a,__b,__c,__c0,__c1) __s ## __a ## __b ## __c : *__target = *__seq ## __a; ++__target; --__length; ++__seq ## __a; if (__length == 0) goto __finish; if (__seq ## __a __c0 __seq ## __b) goto __s ## __a ## __b ## __c; if (__seq ## __a __c1 __seq ## __c) goto __s ## __b ## __a ## __c; goto __s ## __b ## __c ## __a;
#undef _GLIBCXX_PARALLEL_MERGE_3_CASE
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#define _GLIBCXX_PARALLEL_DECISION(__a,__b,__c,__d) { if (__seq ## __d < __seq ## __a) goto __s ## __d ## __a ## __b ## __c; if (__seq ## __d < __seq ## __b) goto __s ## __a ## __d ## __b ## __c; if (__seq ## __d < __seq ## __c) goto __s ## __a ## __b ## __d ## __c; goto __s ## __a ## __b ## __c ## __d; }
#define _GLIBCXX_PARALLEL_MERGE_4_CASE(__a,__b,__c,__d,__c0,__c1,__c2) __s ## __a ## __b ## __c ## __d: if (__length == 0) goto __finish; *__target = *__seq ## __a; ++__target; --__length; ++__seq ## __a; if (__seq ## __a __c0 __seq ## __b) goto __s ## __a ## __b ## __c ## __d; if (__seq ## __a __c1 __seq ## __c) goto __s ## __b ## __a ## __c ## __d; if (__seq ## __a __c2 __seq ## __d) goto __s ## __b ## __c ## __a ## __d; goto __s ## __b ## __c ## __d ## __a;
#undef _GLIBCXX_PARALLEL_MERGE_4_CASE
#undef _GLIBCXX_PARALLEL_DECISION
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#pragma omp parallel num_threads (__num_threads)
#pragma omp single
#if _GLIBCXX_PARALLEL_ASSERTIONS
#endif
#endif
