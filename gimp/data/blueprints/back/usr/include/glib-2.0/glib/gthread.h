// GGHASH:Vg4s0LyzNAOAawusQizxv_.EMSMZeaxh5N.Ybr93tYCw00002d5c
#ifndef __G_THREAD_H__
#define __G_THREAD_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gatomic.h>
#include <glib/gerror.h>
#include <glib/gutils.h>
#define G_THREAD_ERROR g_thread_error_quark ()
#define G_PRIVATE_INIT(notify) { NULL, (notify), { NULL, NULL } }
#define G_ONCE_INIT { G_ONCE_STATUS_NOTCALLED, NULL }
#define G_LOCK_NAME(name) g__ ## name ## _lock
#define G_LOCK_DEFINE_STATIC(name) static G_LOCK_DEFINE (name)
#define G_LOCK_DEFINE(name) GMutex G_LOCK_NAME (name)
#define G_LOCK_EXTERN(name) extern GMutex G_LOCK_NAME (name)
#ifdef G_DEBUG_LOCKS
#define G_LOCK(name) G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "file %s: line %d (%s): locking: %s ", __FILE__, __LINE__, G_STRFUNC, #name); g_mutex_lock (&G_LOCK_NAME (name)); }G_STMT_END
#define G_UNLOCK(name) G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "file %s: line %d (%s): unlocking: %s ", __FILE__, __LINE__, G_STRFUNC, #name); g_mutex_unlock (&G_LOCK_NAME (name)); }G_STMT_END
#define G_TRYLOCK(name) (g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "file %s: line %d (%s): try locking: %s ", __FILE__, __LINE__, G_STRFUNC, #name), g_mutex_trylock (&G_LOCK_NAME (name)))
#else
#define G_LOCK(name) g_mutex_lock (&G_LOCK_NAME (name))
#define G_UNLOCK(name) g_mutex_unlock (&G_LOCK_NAME (name))
#define G_TRYLOCK(name) g_mutex_trylock (&G_LOCK_NAME (name))
#endif
#ifdef G_ATOMIC_OP_MEMORY_BARRIER_NEEDED
#define g_once(once,func,arg) g_once_impl ((once), (func), (arg))
#else
#define g_once(once,func,arg) (((once)->status == G_ONCE_STATUS_READY) ? (once)->retval : g_once_impl ((once), (func), (arg)))
#endif
#ifdef __GNUC__
#define g_once_init_enter(location) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); (void) (0 ? (gpointer) *(location) : 0); (!g_atomic_pointer_get (location) && g_once_init_enter (location)); }))
#define g_once_init_leave(location,result) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(location) == sizeof (gpointer)); (void) (0 ? *(location) = (result) : 0); g_once_init_leave ((location), (gsize) (result)); }))
#else
#define g_once_init_enter(location) (g_once_init_enter((location)))
#define g_once_init_leave(location,result) (g_once_init_leave((location), (gsize) (result)))
#endif
#endif
