// GGHASH:VofXgMjEg.UlD9SZHugctjl.9ys8FA7ZOGvD7jp6q9AE000009ae
#ifndef _MATH_H
# error "Never use <bits/iscanonical.h> directly; include <math.h> instead."
#endif
#define __iscanonicalf(x) ((void) (__typeof (x)) (x), 1)
#define __iscanonical(x) ((void) (__typeof (x)) (x), 1)
#if __HAVE_DISTINCT_FLOAT128
#define __iscanonicalf128(x) ((void) (__typeof (x)) (x), 1)
#endif
#ifndef __cplusplus
#define iscanonical(x) __MATH_TG ((x), __iscanonical, (x))
#else
# if __HAVE_DISTINCT_FLOAT128
# endif
#endif
