// GGHASH:VkOlhl_eAEGbAlBM2yCN8yaR8dy3PbG7MIfh0wkerIK4000015ea
#ifndef _THREAD_SHARED_TYPES_H
#define _THREAD_SHARED_TYPES_H 1
#include <bits/pthreadtypes-arch.h>
#if !__PTHREAD_MUTEX_USE_UNION
#else
#endif
#if __PTHREAD_MUTEX_LOCK_ELISION
# if !__PTHREAD_MUTEX_USE_UNION
#define __PTHREAD_SPINS_DATA short __spins; short __elision
#define __PTHREAD_SPINS 0, 0
# else
#define __PTHREAD_SPINS_DATA struct { short __espins; short __eelision; } __elision_data
#define __PTHREAD_SPINS { 0, 0 }
#define __spins __elision_data.__espins
#define __elision __elision_data.__eelision
# endif
#else
#define __PTHREAD_SPINS_DATA int __spins
#define __PTHREAD_SPINS 0
#endif
#if !__PTHREAD_MUTEX_NUSERS_AFTER_KIND
#endif
#if __PTHREAD_MUTEX_NUSERS_AFTER_KIND
#endif
#if !__PTHREAD_MUTEX_USE_UNION
#define __PTHREAD_MUTEX_HAVE_PREV 1
#else
#define __PTHREAD_MUTEX_HAVE_PREV 0
#endif
#endif
