// GGHASH:VQvnv523aUs3gMlz5Ptwlhp6Tb9MghA_Ffg7Es6WYNQ4000017cc
#ifndef _OMP_H
#define _OMP_H 1
#ifndef _LIBGOMP_OMP_LOCK_DEFINED
#define _LIBGOMP_OMP_LOCK_DEFINED 1
#if defined(__linux__)
#else
#endif
#endif
#ifdef __cplusplus
#define __GOMP_NOTHROW throw ()
#else
#define __GOMP_NOTHROW __attribute__((__nothrow__))
#endif
#ifdef __cplusplus
#endif
#endif
