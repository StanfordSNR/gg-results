// GGHASH:VcSUIO4CW3RRuZJimHzi_O8chXBySN.kkaVULs1VUW6s000004b4
#ifndef __sigevent_t_defined
#define __sigevent_t_defined 1
#include <bits/wordsize.h>
#include <bits/types.h>
#include <bits/types/__sigval_t.h>
#define __SIGEV_MAX_SIZE 64
#if __WORDSIZE == 64
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#else
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 3)
#endif
#ifndef __have_pthread_attr_t
#define __have_pthread_attr_t 1
#endif
#define sigev_notify_function _sigev_un._sigev_thread._function
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#endif
