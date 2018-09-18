// GGHASH:VcW2EWQdOKggtZaKBkrMu3b_XWHNINyOVscKDpyOuTBg000001ba
#if defined __x86_64__ && !defined __ILP32__
#define __WORDSIZE 64
#else
#define __WORDSIZE 32
#define __WORDSIZE32_SIZE_ULONG 0
#define __WORDSIZE32_PTRDIFF_LONG 0
#endif
#ifdef __x86_64__
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#else
#define __WORDSIZE_TIME64_COMPAT32 0
#endif
