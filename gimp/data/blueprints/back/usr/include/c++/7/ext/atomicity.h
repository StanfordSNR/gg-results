// GGHASH:VcHb3gHftQsdb2RK4kK1EgdkODmGr1jS7uqsvedhAr_Q00000db5
#ifndef _GLIBCXX_ATOMICITY_H
#define _GLIBCXX_ATOMICITY_H 1
#include <bits/c++config.h>
#include <bits/gthr.h>
#include <bits/atomic_word.h>
#ifdef _GLIBCXX_ATOMIC_BUILTINS
#else
#endif
#ifdef __GTHREADS
#else
#endif
#ifdef __GTHREADS
#else
#endif
#ifndef _GLIBCXX_READ_MEM_BARRIER
#define _GLIBCXX_READ_MEM_BARRIER __atomic_thread_fence (__ATOMIC_ACQUIRE)
#endif
#ifndef _GLIBCXX_WRITE_MEM_BARRIER
#define _GLIBCXX_WRITE_MEM_BARRIER __atomic_thread_fence (__ATOMIC_RELEASE)
#endif
#endif
