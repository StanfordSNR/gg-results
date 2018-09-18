// GGHASH:Vg.g4RKEmi.xc42zuCc3FQiW_MExNBeBtJCwyz8BJYjE0000279f
#ifndef __G_DEPRECATED_THREAD_H__
#define __G_DEPRECATED_THREAD_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gthread.h>
#ifndef G_DISABLE_DEPRECATED
#endif
#ifndef G_DISABLE_DEPRECATED
#ifndef G_OS_WIN32
#include <sys/types.h>
#include <pthread.h>
#endif
#define g_static_mutex_get_mutex g_static_mutex_get_mutex_impl
#define G_STATIC_MUTEX_INIT { NULL }
#ifndef G_OS_WIN32
#endif
#define g_static_mutex_lock(mutex) g_mutex_lock (g_static_mutex_get_mutex (mutex))
#define g_static_mutex_trylock(mutex) g_mutex_trylock (g_static_mutex_get_mutex (mutex))
#define g_static_mutex_unlock(mutex) g_mutex_unlock (g_static_mutex_get_mutex (mutex))
#ifdef G_OS_WIN32
#else
#endif
#define G_STATIC_REC_MUTEX_INIT { G_STATIC_MUTEX_INIT }
#define G_STATIC_RW_LOCK_INIT { G_STATIC_MUTEX_INIT, NULL, NULL, 0, FALSE, 0, 0 }
#define G_STATIC_PRIVATE_INIT { 0 }
#define g_thread_supported() (1)
#endif
#endif
