// GGHASH:V3dwnqn8BlRe2ptyP5gzIZ.UK4Vu3_0zVtDOQahgIgzE0000122f
#ifndef _OPENACC_H
#define _OPENACC_H 1
#include <stddef.h>
#ifdef __cplusplus
#endif
#if __cplusplus >= 201103
#define __GOACC_NOTHROW noexcept
#elif __cplusplus
#define __GOACC_NOTHROW throw ()
#else
#define __GOACC_NOTHROW __attribute__ ((__nothrow__))
#endif
#ifdef __cplusplus
#else
#endif
#define acc_pcreate acc_present_or_create
#define acc_pcopyin acc_present_or_copyin
#ifdef __cplusplus
#pragma acc routine seq
#endif
#endif
