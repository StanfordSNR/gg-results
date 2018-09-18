// GGHASH:VLxD6dPsy99Sfqx0v1aPdaKB80dsFU2huaavJa30SeKU00000c70
#ifndef NR_OPEN
#define __undef_NR_OPEN 
#endif
#ifndef LINK_MAX
#define __undef_LINK_MAX 
#endif
#ifndef OPEN_MAX
#define __undef_OPEN_MAX 
#endif
#ifndef ARG_MAX
#define __undef_ARG_MAX 
#endif
#include <linux/limits.h>
#ifdef __undef_NR_OPEN
#undef NR_OPEN
#undef __undef_NR_OPEN
#endif
#ifdef __undef_LINK_MAX
#undef LINK_MAX
#undef __undef_LINK_MAX
#endif
#ifdef __undef_OPEN_MAX
#undef OPEN_MAX
#undef __undef_OPEN_MAX
#endif
#ifdef __undef_ARG_MAX
#undef ARG_MAX
#undef __undef_ARG_MAX
#endif
#define _POSIX_THREAD_KEYS_MAX 128
#define PTHREAD_KEYS_MAX 1024
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _POSIX_THREAD_THREADS_MAX 64
#undef PTHREAD_THREADS_MAX
#define AIO_PRIO_DELTA_MAX 20
#define PTHREAD_STACK_MIN 16384
#define DELAYTIMER_MAX 2147483647
#define TTY_NAME_MAX 32
#define LOGIN_NAME_MAX 256
#define HOST_NAME_MAX 64
#define MQ_PRIO_MAX 32768
#define SEM_VALUE_MAX (2147483647)
