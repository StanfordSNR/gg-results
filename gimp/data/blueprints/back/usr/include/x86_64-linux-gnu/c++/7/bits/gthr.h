// GGHASH:VwOzfJXnrAvKwYEMqqSC3U.QxNRVSR8fM9JjfbxKnVpU000015e8
#ifndef _GLIBCXX_GCC_GTHR_H
#define _GLIBCXX_GCC_GTHR_H 
#ifndef _GLIBCXX_HIDE_EXPORTS
#pragma GCC visibility push(default)
#endif
#if __GXX_WEAK__
#ifdef __MINGW32__
#undef _GLIBCXX_GTHREAD_USE_WEAK
#define _GLIBCXX_GTHREAD_USE_WEAK 0
#endif
#ifndef _GLIBCXX_GTHREAD_USE_WEAK
#define _GLIBCXX_GTHREAD_USE_WEAK 1
#endif
#endif
#include <bits/gthr-default.h>
#ifndef _GLIBCXX_HIDE_EXPORTS
#pragma GCC visibility pop
#endif
#endif
