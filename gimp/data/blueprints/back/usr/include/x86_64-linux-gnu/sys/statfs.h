// GGHASH:V9dl44NakPK7tMkwbv4FPXehip.eY4_eY0zzq4eXd4_g0000082d
#ifndef _SYS_STATFS_H
#define _SYS_STATFS_H 1
#include <features.h>
#include <bits/statfs.h>
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define statfs statfs64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define fstatfs fstatfs64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
