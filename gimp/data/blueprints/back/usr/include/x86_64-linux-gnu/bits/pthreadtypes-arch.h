// GGHASH:Vytbp4YI6lFNdVOXAqOt5ANnWgLUTTQrJtJmftOj8Ves00000cda
#ifndef _BITS_PTHREADTYPES_ARCH_H
#define _BITS_PTHREADTYPES_ARCH_H 1
#include <bits/wordsize.h>
#ifdef __x86_64__
# if __WORDSIZE == 64
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_ATTR_T 56
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define __SIZEOF_PTHREAD_BARRIER_T 32
# else
#define __SIZEOF_PTHREAD_MUTEX_T 32
#define __SIZEOF_PTHREAD_ATTR_T 32
#define __SIZEOF_PTHREAD_MUTEX_T 32
#define __SIZEOF_PTHREAD_RWLOCK_T 44
#define __SIZEOF_PTHREAD_BARRIER_T 20
# endif
#else
#define __SIZEOF_PTHREAD_MUTEX_T 24
#define __SIZEOF_PTHREAD_ATTR_T 36
#define __SIZEOF_PTHREAD_MUTEX_T 24
#define __SIZEOF_PTHREAD_RWLOCK_T 32
#define __SIZEOF_PTHREAD_BARRIER_T 20
#endif
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define __PTHREAD_COMPAT_PADDING_MID 
#define __PTHREAD_COMPAT_PADDING_END 
#define __PTHREAD_MUTEX_LOCK_ELISION 1
#ifdef __x86_64__
#define __PTHREAD_MUTEX_NUSERS_AFTER_KIND 0
#define __PTHREAD_MUTEX_USE_UNION 0
#else
#define __PTHREAD_MUTEX_NUSERS_AFTER_KIND 1
#define __PTHREAD_MUTEX_USE_UNION 1
#endif
#define __LOCK_ALIGNMENT 
#define __ONCE_ALIGNMENT 
#ifdef __x86_64__
# ifdef __ILP32__
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0 }
# else
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }
# endif
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
#else
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0
#endif
#ifndef __x86_64__
#define __cleanup_fct_attribute __attribute__ ((__regparm__ (1)))
#endif
#endif
