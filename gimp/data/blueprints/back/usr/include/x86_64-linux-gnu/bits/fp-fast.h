// GGHASH:VIGpCFpf2WYdvi6aAYlMsZ7LyntOWNaGvMul6HXeZDrw000004bf
#ifndef _MATH_H
# error "Never use <bits/fp-fast.h> directly; include <math.h> instead."
#endif
#ifdef __USE_ISOC99
# ifdef __FP_FAST_FMA
#define FP_FAST_FMA 1
# endif
# ifdef __FP_FAST_FMAF
#define FP_FAST_FMAF 1
# endif
# ifdef __FP_FAST_FMAL
#define FP_FAST_FMAL 1
# endif
#endif
