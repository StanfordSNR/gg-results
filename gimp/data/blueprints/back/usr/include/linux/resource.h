// GGHASH:VNLa1phttMsWkAeDWNDHesP_kvalaNXQlnzpjNKq54DE0000092b
#ifndef _LINUX_RESOURCE_H
#define _LINUX_RESOURCE_H 
#include <linux/time.h>
#include <linux/types.h>
#define RUSAGE_SELF 0
#define RUSAGE_CHILDREN (-1)
#define RUSAGE_BOTH (-2)
#define RUSAGE_THREAD 1
#define RLIM64_INFINITY (~0ULL)
#define PRIO_MIN (-20)
#define PRIO_MAX 20
#define PRIO_PROCESS 0
#define PRIO_PGRP 1
#define PRIO_USER 2
#define _STK_LIM (8*1024*1024)
#define MLOCK_LIMIT ((PAGE_SIZE > 64*1024) ? PAGE_SIZE : 64*1024)
#include <asm/resource.h>
#endif
