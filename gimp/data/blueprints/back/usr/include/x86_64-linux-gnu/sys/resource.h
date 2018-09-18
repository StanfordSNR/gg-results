// GGHASH:VFMTw_YQC8paBCWYLC9hVBBza74mYMFkoKn9POGb5rbc00000e3d
#ifndef _SYS_RESOURCE_H
#define _SYS_RESOURCE_H 1
#include <features.h>
#include <bits/resource.h>
#ifndef __id_t_defined
#define __id_t_defined 
#endif
#if defined __USE_GNU && !defined __cplusplus
#else
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define getrlimit getrlimit64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define setrlimit setrlimit64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
