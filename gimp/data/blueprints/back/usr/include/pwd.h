// GGHASH:VzV2EERwdq5x9tWU4LUaYEbbJFPAiYcHACBTU6iM.iu80000178d
#ifndef _PWD_H
#define _PWD_H 1
#include <features.h>
#include <bits/types.h>
#define __need_size_t 
#include <stddef.h>
#if defined __USE_XOPEN || defined __USE_XOPEN2K
# ifndef __gid_t_defined
#define __gid_t_defined 
# endif
# ifndef __uid_t_defined
#define __uid_t_defined 
# endif
#endif
#ifdef __USE_MISC
# include <bits/types/FILE.h>
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_POSIX
# ifdef __USE_MISC
#define NSS_BUFLEN_PASSWD 1024
# endif
# ifdef __USE_MISC
# endif
# ifdef __USE_MISC
# endif
#endif
#ifdef __USE_GNU
#endif
#endif
