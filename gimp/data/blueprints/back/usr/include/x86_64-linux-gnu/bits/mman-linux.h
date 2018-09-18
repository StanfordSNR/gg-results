// GGHASH:V.9Oga23I9FJZoxjFTtp0E1_iwaIlt7rtXoXCt07esBI000012c2
#ifndef _SYS_MMAN_H
# error "Never use <bits/mman-linux.h> directly; include <sys/mman.h> instead."
#endif
#define PROT_READ 0x1
#define PROT_WRITE 0x2
#define PROT_EXEC 0x4
#define PROT_NONE 0x0
#define PROT_GROWSDOWN 0x01000000
#define PROT_GROWSUP 0x02000000
#define MAP_SHARED 0x01
#define MAP_PRIVATE 0x02
#ifdef __USE_MISC
#define MAP_TYPE 0x0f
#endif
#define MAP_FIXED 0x10
#ifdef __USE_MISC
#define MAP_FILE 0
# ifdef __MAP_ANONYMOUS
#define MAP_ANONYMOUS __MAP_ANONYMOUS
# else
#define MAP_ANONYMOUS 0x20
# endif
#define MAP_ANON MAP_ANONYMOUS
#define MAP_HUGE_SHIFT 26
#define MAP_HUGE_MASK 0x3f
#endif
#define MS_ASYNC 1
#define MS_SYNC 4
#define MS_INVALIDATE 2
#ifdef __USE_GNU
#define MREMAP_MAYMOVE 1
#define MREMAP_FIXED 2
#endif
#ifdef __USE_MISC
#define MADV_NORMAL 0
#define MADV_RANDOM 1
#define MADV_SEQUENTIAL 2
#define MADV_WILLNEED 3
#define MADV_DONTNEED 4
#define MADV_FREE 8
#define MADV_REMOVE 9
#define MADV_DONTFORK 10
#define MADV_DOFORK 11
#define MADV_MERGEABLE 12
#define MADV_UNMERGEABLE 13
#define MADV_HUGEPAGE 14
#define MADV_NOHUGEPAGE 15
#define MADV_DONTDUMP 16
#define MADV_DODUMP 17
#define MADV_WIPEONFORK 18
#define MADV_KEEPONFORK 19
#define MADV_HWPOISON 100
#endif
#ifdef __USE_XOPEN2K
#define POSIX_MADV_NORMAL 0
#define POSIX_MADV_RANDOM 1
#define POSIX_MADV_SEQUENTIAL 2
#define POSIX_MADV_WILLNEED 3
#define POSIX_MADV_DONTNEED 4
#endif
#ifndef MCL_CURRENT
#define MCL_CURRENT 1
#define MCL_FUTURE 2
#define MCL_ONFAULT 4
#endif
#include <bits/mman-shared.h>
