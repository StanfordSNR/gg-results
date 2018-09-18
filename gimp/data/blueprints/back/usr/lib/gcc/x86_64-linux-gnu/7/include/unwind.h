// GGHASH:VE._AOS.3HZLEat8EB5Z77WfWcO6ICvWBUiOF0ndRl38000029dd
#ifndef _UNWIND_H
#define _UNWIND_H 
#if defined (__SEH__) && !defined (__USING_SJLJ_EXCEPTIONS__)
#include <windows.h>
#endif
#ifndef HIDE_EXPORTS
#pragma GCC visibility push(default)
#endif
#ifdef __cplusplus
#endif
#if defined(__ia64__) && defined(__hpux__)
#else
#endif
#if !defined (__USING_SJLJ_EXCEPTIONS__) && defined (__SEH__)
#else
#endif
#define _UA_SEARCH_PHASE 1
#define _UA_CLEANUP_PHASE 2
#define _UA_HANDLER_FRAME 4
#define _UA_FORCE_UNWIND 8
#define _UA_END_OF_STACK 16
#ifndef LIBGCC2_UNWIND_ATTRIBUTE
#define LIBGCC2_UNWIND_ATTRIBUTE 
#endif
#ifdef __ia64__
#else
#endif
#ifndef __SIZEOF_LONG__
  #error "__SIZEOF_LONG__ macro not defined"
#endif
#ifndef __SIZEOF_POINTER__
  #error "__SIZEOF_POINTER__ macro not defined"
#endif
#if __SIZEOF_LONG__ >= __SIZEOF_POINTER__
#elif __SIZEOF_LONG_LONG__ >= __SIZEOF_POINTER__
#else
# error "What type shall we use for _sleb128_t?"
#endif
#if defined (__SEH__) && !defined (__USING_SJLJ_EXCEPTIONS__)
#endif
#ifdef __cplusplus
#endif
#ifndef HIDE_EXPORTS
#pragma GCC visibility pop
#endif
#endif
