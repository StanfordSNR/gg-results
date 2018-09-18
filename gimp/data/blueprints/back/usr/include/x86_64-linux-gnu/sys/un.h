// GGHASH:VhO7r7k4BbUWpQv1qdbEMRY1Z3GE7dUxb7Ms9gOXc69E000005ac
#ifndef _SYS_UN_H
#define _SYS_UN_H 1
#include <sys/cdefs.h>
#include <bits/sockaddr.h>
#ifdef __USE_MISC
# include <string.h>
#define SUN_LEN(ptr) ((size_t) (((struct sockaddr_un *) 0)->sun_path) + strlen ((ptr)->sun_path))
#endif
#endif
