// GGHASH:Vlapv0iuBoj10l58fEGnezS6uAcefseajperXyTNf6cs000017d6
#ifndef _MALLOC_H
#define _MALLOC_H 1
#include <features.h>
#include <stddef.h>
#include <stdio.h>
#ifdef _LIBC
#define __MALLOC_HOOK_VOLATILE 
#define __MALLOC_DEPRECATED 
#else
#define __MALLOC_HOOK_VOLATILE volatile
#define __MALLOC_DEPRECATED __attribute_deprecated__
#endif
#ifndef M_MXFAST
#define M_MXFAST 1
#endif
#ifndef M_NLBLKS
#define M_NLBLKS 2
#endif
#ifndef M_GRAIN
#define M_GRAIN 3
#endif
#ifndef M_KEEP
#define M_KEEP 4
#endif
#define M_TRIM_THRESHOLD -1
#define M_TOP_PAD -2
#define M_MMAP_THRESHOLD -3
#define M_MMAP_MAX -4
#define M_CHECK_ACTION -5
#define M_PERTURB -6
#define M_ARENA_TEST -7
#define M_ARENA_MAX -8
#endif
