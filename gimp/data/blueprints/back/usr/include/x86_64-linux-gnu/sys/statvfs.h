// GGHASH:VVOtXFph9TJsRuy.SXef7qgwxaU8EehVMadpiqsHnSMk00000b03
#ifndef _SYS_STATVFS_H
#define _SYS_STATVFS_H 1
#include <features.h>
#include <bits/statvfs.h>
#ifndef __USE_FILE_OFFSET64
# ifndef __fsblkcnt_t_defined
#define __fsblkcnt_t_defined 
# endif
# ifndef __fsfilcnt_t_defined
#define __fsfilcnt_t_defined 
# endif
#else
# ifndef __fsblkcnt_t_defined
#define __fsblkcnt_t_defined 
# endif
# ifndef __fsfilcnt_t_defined
#define __fsfilcnt_t_defined 
# endif
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define statvfs statvfs64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define fstatvfs fstatvfs64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
