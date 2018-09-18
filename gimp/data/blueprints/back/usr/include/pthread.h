// GGHASH:V9F0eLX7Lr.dBauXGhkn2HB2DoLU2ZFuSvId36IG.fvY0000a135
#ifndef _PTHREAD_H
#define _PTHREAD_H 1
#include <features.h>
#include <endian.h>
#include <sched.h>
#include <time.h>
#include <bits/pthreadtypes.h>
#include <bits/setjmp.h>
#include <bits/wordsize.h>
#include <bits/types/struct_timespec.h>
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#if defined __USE_UNIX98 || defined __USE_XOPEN2K8
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_XOPEN2K
#endif
#if defined __USE_POSIX199506 || defined __USE_UNIX98
#endif
#if __PTHREAD_MUTEX_HAVE_PREV
#define PTHREAD_MUTEX_INITIALIZER { { 0, 0, 0, 0, 0, __PTHREAD_SPINS, { 0, 0 } } }
# ifdef __USE_GNU
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, __PTHREAD_SPINS, { 0, 0 } } }
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, __PTHREAD_SPINS, { 0, 0 } } }
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ADAPTIVE_NP, __PTHREAD_SPINS, { 0, 0 } } }
# endif
#else
#define PTHREAD_MUTEX_INITIALIZER { { 0, 0, 0, 0, 0, { __PTHREAD_SPINS } } }
# ifdef __USE_GNU
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, 0, { __PTHREAD_SPINS } } }
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, 0, { __PTHREAD_SPINS } } }
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, PTHREAD_MUTEX_ADAPTIVE_NP, 0, { __PTHREAD_SPINS } } }
# endif
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
#ifndef __PTHREAD_RWLOCK_INT_FLAGS_SHARED
# if __WORDSIZE == 64
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
# endif
#endif
#define PTHREAD_RWLOCK_INITIALIZER { { 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, 0 } }
# ifdef __USE_GNU
# ifdef __PTHREAD_RWLOCK_INT_FLAGS_SHARED
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP } }
# else
# if __BYTE_ORDER == __LITTLE_ENDIAN
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { 0, 0, 0, 0, 0, 0, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, 0 } }
# else
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { 0, 0, 0, 0, 0, 0, 0, 0, 0, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP, 0 } }
# endif
# endif
# endif
#endif
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define PTHREAD_CANCELED ((void *) -1)
#define PTHREAD_ONCE_INIT 0
#ifdef __USE_XOPEN2K
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_UNIX98
#endif
#ifdef __USE_GNU
#endif
#ifndef __cleanup_fct_attribute
#define __cleanup_fct_attribute 
#endif
#if defined __GNUC__ && defined __EXCEPTIONS
# ifdef __cplusplus
#define pthread_cleanup_push(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg)
#define pthread_cleanup_pop(execute) __clframe.__setdoit (execute); } while (0)
# ifdef __USE_GNU
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg); __clframe.__defer ()
#define pthread_cleanup_pop_restore_np(execute) __clframe.__restore (); __clframe.__setdoit (execute); } while (0)
# endif
# else
#define pthread_cleanup_push(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 };
#define pthread_cleanup_pop(execute) __clframe.__do_it = (execute); } while (0)
# ifdef __USE_GNU
#define pthread_cleanup_push_defer_np(routine,arg) do { struct __pthread_cleanup_frame __clframe __attribute__ ((__cleanup__ (__pthread_cleanup_routine))) = { .__cancel_routine = (routine), .__cancel_arg = (arg), .__do_it = 1 }; (void) pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED, &__clframe.__cancel_type)
#define pthread_cleanup_pop_restore_np(execute) (void) pthread_setcanceltype (__clframe.__cancel_type, NULL); __clframe.__do_it = (execute); } while (0)
# endif
# endif
#else
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp ((struct __jmp_buf_tag *) (void *) __cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
# ifdef __USE_GNU
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp ((struct __jmp_buf_tag *) (void *) __cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel_defer (&__cancel_buf); do {
#define pthread_cleanup_pop_restore_np(execute) do { } while (0); } while (0); __pthread_unregister_cancel_restore (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
# endif
# ifndef SHARED
# endif
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_XOPEN2K8
# ifdef __USE_GNU
# endif
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K8
#endif
#ifdef __USE_XOPEN2K
# ifdef __USE_GNU
# endif
# ifdef __USE_GNU
# endif
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K
# ifdef __USE_XOPEN2K
# endif
# ifdef __USE_XOPEN2K
# endif
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_EXTERN_INLINES
#endif
#endif
