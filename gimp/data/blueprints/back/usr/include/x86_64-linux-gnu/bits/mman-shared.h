// GGHASH:VUaBj34_rW5biOw3ttlsuApkvi0lNyz33sLuuiliXqWk00000ab0
#ifndef _SYS_MMAN_H
# error "Never use <bits/mman-shared.h> directly; include <sys/mman.h> instead."
#endif
#ifdef __USE_GNU
# ifndef MFD_CLOEXEC
#define MFD_CLOEXEC 1U
#define MFD_ALLOW_SEALING 2U
#define MFD_HUGETLB 4U
# endif
# ifndef MLOCK_ONFAULT
#define MLOCK_ONFAULT 1U
# endif
# ifndef PKEY_DISABLE_ACCESS
#define PKEY_DISABLE_ACCESS 0x1
#define PKEY_DISABLE_WRITE 0x2
# endif
#endif
