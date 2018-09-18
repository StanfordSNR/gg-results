// GGHASH:VWSlBtiNOy9IlwCeS8rMTCS_QrdMxAca0IvB6U6BBt9s00005d22
#ifndef _GLIBCXX_ATOMIC_BASE_H
#define _GLIBCXX_ATOMIC_BASE_H 1
#include <bits/c++config.h>
#include <stdint.h>
#include <bits/atomic_lockfree_defines.h>
#ifndef _GLIBCXX_ALWAYS_INLINE
#define _GLIBCXX_ALWAYS_INLINE inline __attribute__((__always_inline__))
#endif
#define ATOMIC_VAR_INIT(_VI) { _VI }
#if __GCC_ATOMIC_TEST_AND_SET_TRUEVAL == 1
#else
#endif
#define ATOMIC_FLAG_INIT { 0 }
#endif
