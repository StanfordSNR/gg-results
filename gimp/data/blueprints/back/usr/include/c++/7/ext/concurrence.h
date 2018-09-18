// GGHASH:VTJUYgL20P68aLS0IUHLmjcOTwPy5eP8DWES9ok7w94U00001dbb
#ifndef _CONCURRENCE_H
#define _CONCURRENCE_H 1
#include <exception>
#include <bits/gthr.h>
#include <bits/functexcept.h>
#include <bits/cpp_type_traits.h>
#include <ext/type_traits.h>
#ifdef __GTHREADS
#if (defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2) && defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4))
#else
#endif
#else
#endif
#ifdef __GTHREAD_HAS_COND
#endif
#if __GTHREADS && defined __GTHREAD_MUTEX_INIT
#else
#endif
#if __GTHREADS && ! defined __GTHREAD_MUTEX_INIT
#endif
#if __GTHREADS && ! defined __GTHREAD_MUTEX_INIT
#endif
#if __GTHREADS
#endif
#if __GTHREADS
#endif
#if __GTHREADS && defined __GTHREAD_RECURSIVE_MUTEX_INIT
#else
#endif
#if __GTHREADS && ! defined __GTHREAD_RECURSIVE_MUTEX_INIT
#endif
#if __GTHREADS && ! defined __GTHREAD_RECURSIVE_MUTEX_INIT
#endif
#if __GTHREADS
#endif
#if __GTHREADS
#endif
#ifdef __GTHREAD_HAS_COND
#if __GTHREADS && defined __GTHREAD_COND_INIT
#else
#endif
#if __GTHREADS && ! defined __GTHREAD_COND_INIT
#endif
#if __GTHREADS && ! defined __GTHREAD_COND_INIT
#endif
#if __GTHREADS
#endif
#if __GTHREADS
#endif
#if __GTHREADS
#endif
#endif
#endif
