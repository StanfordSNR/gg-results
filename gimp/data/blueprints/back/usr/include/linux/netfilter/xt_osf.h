// GGHASH:VCNqimpnGLyntpbM04ejwLe9K70yWT7WKWusYh5rmwLo00000d3e
#ifndef _XT_OSF_H
#define _XT_OSF_H 
#include <linux/types.h>
#include <linux/ip.h>
#include <linux/tcp.h>
#define MAXGENRELEN 32
#define XT_OSF_GENRE (1<<0)
#define XT_OSF_TTL (1<<1)
#define XT_OSF_LOG (1<<2)
#define XT_OSF_INVERT (1<<3)
#define XT_OSF_LOGLEVEL_ALL 0
#define XT_OSF_LOGLEVEL_FIRST 1
#define XT_OSF_LOGLEVEL_ALL_KNOWN 2
#define XT_OSF_TTL_TRUE 0
#define XT_OSF_TTL_LESS 1
#define XT_OSF_TTL_NOCHECK 2
#endif
