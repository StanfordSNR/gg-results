// GGHASH:V4TgoWMNxXA_nWFoCDVeIVXsgK5g57W0e5hEqnUWNBqI00000750
#ifndef _SYS_MMAN_H
# error "Never use <bits/mman.h> directly; include <sys/mman.h> instead."
#endif
#ifdef __USE_MISC
#define MAP_32BIT 0x40
#endif
#ifdef __USE_MISC
#define MAP_GROWSDOWN 0x00100
#define MAP_DENYWRITE 0x00800
#define MAP_EXECUTABLE 0x01000
#define MAP_LOCKED 0x02000
#define MAP_NORESERVE 0x04000
#define MAP_POPULATE 0x08000
#define MAP_NONBLOCK 0x10000
#define MAP_STACK 0x20000
#define MAP_HUGETLB 0x40000
#endif
#include <bits/mman-linux.h>
