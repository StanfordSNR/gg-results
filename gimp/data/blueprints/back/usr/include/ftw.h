// GGHASH:VEJN9oWMdkeeJzlCL57Ic0.lZvwLJZzcKH_MdvRhLbdY00001483
#ifndef _FTW_H
#define _FTW_H 1
#include <features.h>
#include <sys/types.h>
#include <sys/stat.h>
#define FTW_F FTW_F
#define FTW_D FTW_D
#define FTW_DNR FTW_DNR
#define FTW_NS FTW_NS
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#define FTW_SL FTW_SL
#endif
#ifdef __USE_XOPEN_EXTENDED
#define FTW_DP FTW_DP
#define FTW_SLN FTW_SLN
#endif
#ifdef __USE_XOPEN_EXTENDED
#define FTW_PHYS FTW_PHYS
#define FTW_MOUNT FTW_MOUNT
#define FTW_CHDIR FTW_CHDIR
#define FTW_DEPTH FTW_DEPTH
# ifdef __USE_GNU
#define FTW_ACTIONRETVAL FTW_ACTIONRETVAL
# endif
#ifdef __USE_GNU
#define FTW_CONTINUE FTW_CONTINUE
#define FTW_STOP FTW_STOP
#define FTW_SKIP_SUBTREE FTW_SKIP_SUBTREE
#define FTW_SKIP_SIBLINGS FTW_SKIP_SIBLINGS
#endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_XOPEN_EXTENDED
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define ftw ftw64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_XOPEN_EXTENDED
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define nftw nftw64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#endif
