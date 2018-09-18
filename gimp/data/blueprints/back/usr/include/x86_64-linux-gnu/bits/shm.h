// GGHASH:V9XvSlCSDTm8iDMwR6i22yX53.kICzBG05MoTz88NA5A00000dee
#ifndef _SYS_SHM_H
# error "Never include <bits/shm.h> directly; use <sys/shm.h> instead."
#endif
#include <bits/types.h>
#define SHM_R 0400
#define SHM_W 0200
#define SHM_RDONLY 010000
#define SHM_RND 020000
#define SHM_REMAP 040000
#define SHM_EXEC 0100000
#define SHM_LOCK 11
#define SHM_UNLOCK 12
#define SHMLBA (__getpagesize ())
#ifndef __x86_64__
#endif
#ifndef __x86_64__
#endif
#ifndef __x86_64__
#endif
#ifdef __USE_MISC
#define SHM_STAT 13
#define SHM_INFO 14
#define SHM_DEST 01000
#define SHM_LOCKED 02000
#define SHM_HUGETLB 04000
#define SHM_NORESERVE 010000
#endif
