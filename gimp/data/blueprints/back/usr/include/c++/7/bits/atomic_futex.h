// GGHASH:VA.dmer9fHIu_FMu5M2LXvE4AnGq.exB7RUpyypNcvqc00002568
#ifndef _GLIBCXX_ATOMIC_FUTEX_H
#define _GLIBCXX_ATOMIC_FUTEX_H 1
#include <bits/c++config.h>
#include <atomic>
#include <chrono>
#if ! (defined(_GLIBCXX_HAVE_LINUX_FUTEX) && ATOMIC_INT_LOCK_FREE > 1)
#include <mutex>
#include <condition_variable>
#endif
#ifndef _GLIBCXX_ALWAYS_INLINE
#define _GLIBCXX_ALWAYS_INLINE inline __attribute__((__always_inline__))
#endif
#if defined(_GLIBCXX_HAS_GTHREADS) && defined(_GLIBCXX_USE_C99_STDINT_TR1)
#if defined(_GLIBCXX_HAVE_LINUX_FUTEX) && ATOMIC_INT_LOCK_FREE > 1
#else
#endif
#endif
#endif
