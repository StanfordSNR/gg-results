// GGHASH:VJwc2YtILt20I3ljoySlaAW9tkZ.k9NHjBMYXzmHF2Bs00000ece
#ifndef _GLIBCXX_PARALLEL_COMPATIBILITY_H
#define _GLIBCXX_PARALLEL_COMPATIBILITY_H 1
#include <parallel/types.h>
#include <parallel/base.h>
#if !defined(_WIN32) || defined (__CYGWIN__)
#include <sched.h>
#endif
#ifdef __MINGW32__
#endif
#pragma omp critical
#pragma omp critical
#if defined (_WIN32) && !defined (__CYGWIN__)
#else
#endif
#endif
