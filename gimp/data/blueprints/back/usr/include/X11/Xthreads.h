// GGHASH:VHR89WY4AZtLn7.EzqFaNNP1nBzC8nx643Z9QlN7Utqk0000306b
#ifndef _XTHREADS_H_
#define _XTHREADS_H_ 
# ifndef xmalloc
#define xmalloc malloc
# endif
# ifndef xfree
#define xfree free
# endif
# ifdef CTHREADS
# include <cthreads.h>
#define xthread_init() cthread_init()
#define xthread_self cthread_self
#define xthread_fork(func,closure) cthread_fork(func,closure)
#define xthread_yield() cthread_yield()
#define xthread_exit(v) cthread_exit(v)
#define xthread_set_name(t,str) cthread_set_name(t,str)
#define xmutex_init(m) mutex_init(m)
#define xmutex_clear(m) mutex_clear(m)
#define xmutex_lock(m) mutex_lock(m)
#define xmutex_unlock(m) mutex_unlock(m)
#define xmutex_set_name(m,str) mutex_set_name(m,str)
#define xcondition_init(cv) condition_init(cv)
#define xcondition_clear(cv) condition_clear(cv)
#define xcondition_wait(cv,m) condition_wait(cv,m)
#define xcondition_signal(cv) condition_signal(cv)
#define xcondition_broadcast(cv) condition_broadcast(cv)
#define xcondition_set_name(cv,str) condition_set_name(cv,str)
# else
# if defined(SVR4)
# include <thread.h>
# include <synch.h>
# if defined(__UNIXWARE__)
#define xthread_self (_x11_thr_self)
# else
#define xthread_self thr_self
# endif
#define xthread_fork(func,closure) thr_create(NULL,0,func,closure,THR_NEW_LWP|THR_DETACHED,NULL)
#define xthread_yield() thr_yield()
#define xthread_exit(v) thr_exit(v)
#define xthread_key_create(kp,d) thr_keycreate(kp,d)
# ifdef __sun
#define xthread_key_delete(k) 0
# else
#define xthread_key_delete(k) thr_keydelete(k)
# endif
#define xthread_set_specific(k,v) thr_setspecific(k,v)
#define xthread_get_specific(k,vp) thr_getspecific(k,vp)
#define xmutex_init(m) mutex_init(m,USYNC_THREAD,0)
#define xmutex_clear(m) mutex_destroy(m)
#define xmutex_lock(m) mutex_lock(m)
#define xmutex_unlock(m) mutex_unlock(m)
#define xcondition_init(cv) cond_init(cv,USYNC_THREAD,0)
#define xcondition_clear(cv) cond_destroy(cv)
#define xcondition_wait(cv,m) cond_wait(cv,m)
#define xcondition_signal(cv) cond_signal(cv)
#define xcondition_broadcast(cv) cond_broadcast(cv)
# else
# ifdef WIN32
# include <X11/Xwindows.h>
#define xthread_init() _Xthread_init()
#define xthread_self GetCurrentThreadId
#define xthread_fork(func,closure) { DWORD _tmptid; CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)func, (LPVOID)closure, 0, &_tmptid); }
#define xthread_yield() Sleep(0)
#define xthread_exit(v) ExitThread((DWORD)(v))
#define xthread_key_create(kp,d) *(kp) = TlsAlloc()
#define xthread_key_delete(k) TlsFree(k)
#define xthread_set_specific(k,v) TlsSetValue(k,v)
#define xthread_get_specific(k,vp) TlsGetValue(k)
#define xmutex_init(m) InitializeCriticalSection(m)
#define xmutex_clear(m) DeleteCriticalSection(m)
#define _XMUTEX_NESTS 
#define xmutex_lock(m) EnterCriticalSection(m)
#define xmutex_unlock(m) LeaveCriticalSection(m)
#define xcondition_init(cv) { InitializeCriticalSection(&(cv)->cs); (cv)->waiters = NULL; }
#define xcondition_clear(cv) DeleteCriticalSection(&(cv)->cs)
#define xcondition_wait(cv,m) { struct _xthread_waiter *_tmpthr = _Xthread_waiter(); EnterCriticalSection(&(cv)->cs); _tmpthr->next = (cv)->waiters; (cv)->waiters = _tmpthr; LeaveCriticalSection(&(cv)->cs); LeaveCriticalSection(m); WaitForSingleObject(_tmpthr->sem, INFINITE); EnterCriticalSection(m); }
#define xcondition_signal(cv) { EnterCriticalSection(&(cv)->cs); if ((cv)->waiters) { ReleaseSemaphore((cv)->waiters->sem, 1, NULL); (cv)->waiters = (cv)->waiters->next; } LeaveCriticalSection(&(cv)->cs); }
#define xcondition_broadcast(cv) { struct _xthread_waiter *_tmpthr; EnterCriticalSection(&(cv)->cs); for (_tmpthr = (cv)->waiters; _tmpthr; _tmpthr = _tmpthr->next) ReleaseSemaphore(_tmpthr->sem, 1, NULL); (cv)->waiters = NULL; LeaveCriticalSection(&(cv)->cs); }
# else
# ifdef USE_TIS_SUPPORT
# include <tis.h>
#define xthread_self tis_self
#define xthread_fork(func,closure) { pthread_t _tmpxthr; pthread_create(&_tmpxthr,NULL,func,closure); }
#define xthread_yield() pthread_yield_np()
#define xthread_exit(v) pthread_exit(v)
#define xthread_key_create(kp,d) tis_key_create(kp,d)
#define xthread_key_delete(k) tis_key_delete(k)
#define xthread_set_specific(k,v) tis_setspecific(k,v)
#define xthread_get_specific(k,vp) *(vp) = tis_getspecific(k)
#define XMUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER
#define xmutex_init(m) tis_mutex_init(m)
#define xmutex_clear(m) tis_mutex_destroy(m)
#define xmutex_lock(m) tis_mutex_lock(m)
#define xmutex_unlock(m) tis_mutex_unlock(m)
#define xcondition_init(c) tis_cond_init(c)
#define xcondition_clear(c) tis_cond_destroy(c)
#define xcondition_wait(c,m) tis_cond_wait(c,m)
#define xcondition_signal(c) tis_cond_signal(c)
#define xcondition_broadcast(c) tis_cond_broadcast(c)
# else
# ifdef USE_NBSD_THREADLIB
# include <threadlib.h>
#define xthread_self thr_self
#define xthread_fork(func,closure) { thr_t _tmpxthr; thr_create(&_tmpxthr,NULL,func,closure); }
#define xthread_yield() thr_yield()
#define xthread_exit(v) thr_exit(v)
#define xthread_key_create(kp,d) thr_keycreate(kp,d)
#define xthread_key_delete(k) thr_keydelete(k)
#define xthread_set_specific(k,v) thr_setspecific(k,v)
#define xthread_get_specific(k,vp) *(vp) = thr_getspecific(k)
#define XMUTEX_INITIALIZER MUTEX_INITIALIZER
#define xmutex_init(m) mutex_init(m, 0)
#define xmutex_clear(m) mutex_destroy(m)
#define xmutex_lock(m) mutex_lock(m)
#define xmutex_unlock(m) mutex_unlock(m)
#define xcondition_init(c) cond_init(c, 0, 0)
#define xcondition_clear(c) cond_destroy(c)
#define xcondition_wait(c,m) cond_wait(c,m)
#define xcondition_signal(c) cond_signal(c)
#define xcondition_broadcast(c) cond_broadcast(c)
# else
# include <pthread.h>
#define xthread_self pthread_self
#define xthread_yield() pthread_yield()
#define xthread_exit(v) pthread_exit(v)
#define xthread_set_specific(k,v) pthread_setspecific(k,v)
#define xmutex_clear(m) pthread_mutex_destroy(m)
#define xmutex_lock(m) pthread_mutex_lock(m)
#define xmutex_unlock(m) pthread_mutex_unlock(m)
# ifndef XPRE_STANDARD_API
#define xthread_key_create(kp,d) pthread_key_create(kp,d)
#define xthread_key_delete(k) pthread_key_delete(k)
#define xthread_get_specific(k,vp) *(vp) = pthread_getspecific(k)
#define xthread_fork(func,closure) { pthread_t _tmpxthr; pthread_create(&_tmpxthr,NULL,func,closure); }
#define XMUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER
#define xmutex_init(m) pthread_mutex_init(m, NULL)
#define xcondition_init(c) pthread_cond_init(c, NULL)
# else
#define xthread_key_create(kp,d) pthread_keycreate(kp,d)
#define xthread_key_delete(k) 0
#define xthread_get_specific(k,vp) pthread_getspecific(k,vp)
#define xthread_fork(func,closure) { pthread_t _tmpxthr; pthread_create(&_tmpxthr,pthread_attr_default,func,closure); }
#define xmutex_init(m) pthread_mutex_init(m, pthread_mutexattr_default)
#define xcondition_init(c) pthread_cond_init(c, pthread_condattr_default)
# endif
#define xcondition_clear(c) pthread_cond_destroy(c)
#define xcondition_wait(c,m) pthread_cond_wait(c,m)
#define xcondition_signal(c) pthread_cond_signal(c)
#define xcondition_broadcast(c) pthread_cond_broadcast(c)
# if defined(_DECTHREADS_)
#define xthread_have_id(id) !pthread_equal(id, _X_no_thread_id)
#define xthread_clear_id(id) id = _X_no_thread_id
#define xthread_equal(id1,id2) pthread_equal(id1, id2)
# endif
# if defined(__linux__)
#define xthread_have_id(id) !pthread_equal(id, 0)
#define xthread_clear_id(id) id = 0
#define xthread_equal(id1,id2) pthread_equal(id1, id2)
# endif
# if defined(_CMA_VENDOR_) && defined(_CMA__IBM) && (_CMA_VENDOR_ == _CMA__IBM)
# ifdef DEBUG
#define xmutex_set_name(m,str) ((char**)(m)->field1)[5] = (str)
#define xcondition_set_name(cv,str) ((char**)(cv)->field1)[5] = (str)
# endif
# endif
# endif
# endif
# endif
# endif
# endif
# ifndef xcondition_malloc
#define xcondition_malloc() (xcondition_t)xmalloc(sizeof(xcondition_rec))
# endif
# ifndef xcondition_free
#define xcondition_free(c) xfree((char *)c)
# endif
# ifndef xmutex_malloc
#define xmutex_malloc() (xmutex_t)xmalloc(sizeof(xmutex_rec))
# endif
# ifndef xmutex_free
#define xmutex_free(m) xfree((char *)m)
# endif
# ifndef xthread_have_id
#define xthread_have_id(id) id
# endif
# ifndef xthread_clear_id
#define xthread_clear_id(id) id = 0
# endif
# ifndef xthread_equal
#define xthread_equal(id1,id2) ((id1) == (id2))
# endif
# ifndef xthread_set_name
#define xthread_set_name(t,str) 
# endif
# ifndef xmutex_set_name
#define xmutex_set_name(m,str) 
# endif
# ifndef xcondition_set_name
#define xcondition_set_name(cv,str) 
# endif
#endif
