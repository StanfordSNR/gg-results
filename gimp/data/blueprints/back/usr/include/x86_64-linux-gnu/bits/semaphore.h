// GGHASH:VEp1X0OEB2f_icN7Uz.6cpD0zmsFeHjgnUQPMfmT_lII000004d5
#ifndef _SEMAPHORE_H
# error "Never use <bits/semaphore.h> directly; include <semaphore.h> instead."
#endif
#include <bits/wordsize.h>
#if __WORDSIZE == 64
#define __SIZEOF_SEM_T 32
#else
#define __SIZEOF_SEM_T 16
#endif
#define SEM_FAILED ((sem_t *) 0)
