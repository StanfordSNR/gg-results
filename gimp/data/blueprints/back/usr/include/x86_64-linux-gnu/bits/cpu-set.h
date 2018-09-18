// GGHASH:Vt5DXSkY_HmxAynQHph21NpS_Wkp1bRiJwKzbGBnZm.o000011a3
#ifndef _BITS_CPU_SET_H
#define _BITS_CPU_SET_H 1
#ifndef _SCHED_H
# error "Never include <bits/cpu-set.h> directly; use <sched.h> instead."
#endif
#define __CPU_SETSIZE 1024
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#if __GNUC_PREREQ (2, 91)
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#else
#define __CPU_ZERO_S(setsize,cpusetp) do { size_t __i; size_t __imax = (setsize) / sizeof (__cpu_mask); __cpu_mask *__bits = (cpusetp)->__bits; for (__i = 0; __i < __imax; ++__i) __bits[__i] = 0; } while (0)
#endif
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#if __GNUC_PREREQ (2, 91)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#else
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__extension__ ({ const __cpu_mask *__arr1 = (cpusetp1)->__bits; const __cpu_mask *__arr2 = (cpusetp2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) if (__arr1[__i] != __arr2[__i]) break; __i == __imax; }))
#endif
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#endif
