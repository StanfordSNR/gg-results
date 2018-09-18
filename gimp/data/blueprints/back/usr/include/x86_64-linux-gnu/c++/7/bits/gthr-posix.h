// GGHASH:VUA.eDtAtsJ5x4heh4WcqHIG.54f5NYtJv_damd2J54800005ead
#ifndef _GLIBCXX_GCC_GTHR_POSIX_H
#define _GLIBCXX_GCC_GTHR_POSIX_H 
#define __GTHREADS 1
#define __GTHREADS_CXX0X 1
#include <pthread.h>
#if ((defined(_LIBOBJC) || defined(_LIBOBJC_WEAK)) || !defined(_GTHREAD_USE_MUTEX_TIMEDLOCK))
# include <unistd.h>
# if defined(_POSIX_TIMEOUTS) && _POSIX_TIMEOUTS >= 0
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 1
# else
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 0
# endif
#endif
#define __GTHREAD_HAS_COND 1
#define __GTHREAD_MUTEX_INIT PTHREAD_MUTEX_INITIALIZER
#define __GTHREAD_MUTEX_INIT_FUNCTION __gthread_mutex_init_function
#define __GTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#if defined(PTHREAD_RECURSIVE_MUTEX_INITIALIZER)
#define __GTHREAD_RECURSIVE_MUTEX_INIT PTHREAD_RECURSIVE_MUTEX_INITIALIZER
#elif defined(PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP)
#define __GTHREAD_RECURSIVE_MUTEX_INIT PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
#else
#define __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION __gthread_recursive_mutex_init_function
#endif
#define __GTHREAD_COND_INIT PTHREAD_COND_INITIALIZER
#define __GTHREAD_TIME_INIT {0,0}
#ifdef _GTHREAD_USE_MUTEX_INIT_FUNC
#undef __GTHREAD_MUTEX_INIT
#endif
#ifdef _GTHREAD_USE_RECURSIVE_MUTEX_INIT_FUNC
#undef __GTHREAD_RECURSIVE_MUTEX_INIT
#undef __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION
#define __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION __gthread_recursive_mutex_init_function
#endif
#ifdef _GTHREAD_USE_COND_INIT_FUNC
#undef __GTHREAD_COND_INIT
#define __GTHREAD_COND_INIT_FUNCTION __gthread_cond_init_function
#endif
#if __GXX_WEAK__ && _GLIBCXX_GTHREAD_USE_WEAK
# ifndef __gthrw_pragma
#define __gthrw_pragma(pragma) 
# endif
#define __gthrw2(name,name2,type) static __typeof(type) name __attribute__ ((__weakref__(#name2))); __gthrw_pragma(weak type)
#define __gthrw_(name) __gthrw_ ## name
#else
#define __gthrw2(name,name2,type) 
#define __gthrw_(name) name
#endif
#define __gthrw(name) __gthrw2(__gthrw_ ## name,name,name)
#ifndef __BIONIC__
#endif
#if _GTHREAD_USE_MUTEX_TIMEDLOCK
#endif
#if defined(_LIBOBJC) || defined(_LIBOBJC_WEAK)
#ifdef _POSIX_PRIORITY_SCHEDULING
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
#endif
#endif
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
#endif
#endif
#if __GXX_WEAK__ && _GLIBCXX_GTHREAD_USE_WEAK
#if defined(__FreeBSD__) || (defined(__sun) && defined(__svr4__))
#else
#ifdef __GLIBC__
#define GTHR_ACTIVE_PROXY __gthrw_(__pthread_key_create)
#elif defined (__BIONIC__)
#define GTHR_ACTIVE_PROXY __gthrw_(pthread_create)
#else
#define GTHR_ACTIVE_PROXY __gthrw_(pthread_cancel)
#endif
#endif
#else
#if defined(__hppa__) && defined(__hpux__)
#else
#endif
#endif
#ifdef _LIBOBJC
#include <config.h>
#ifdef HAVE_SCHED_H
# include <sched.h>
#endif
#ifdef _POSIX_PRIORITY_SCHEDULING
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
#endif
#endif
#ifdef _POSIX_PRIORITY_SCHEDULING
#ifdef _POSIX_THREAD_PRIORITY_SCHEDULING
#endif
#endif
#else
#if _GTHREAD_USE_MUTEX_TIMEDLOCK
#endif
#if !defined( PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP) || defined(_GTHREAD_USE_RECURSIVE_MUTEX_INIT_FUNC)
#endif
#if _GTHREAD_USE_MUTEX_TIMEDLOCK
#endif
#ifdef _GTHREAD_USE_COND_INIT_FUNC
#endif
#endif
#endif
