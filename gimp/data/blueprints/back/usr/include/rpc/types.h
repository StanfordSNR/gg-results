// GGHASH:VJ7pYreZASyRzB2MXG.X6ueSoht8A_3wytrV0vFFjfgQ00000ca1
#ifndef _RPC_TYPES_H
#define _RPC_TYPES_H 1
#define __dontcare__ -1
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (1)
#endif
#ifndef NULL
#define NULL 0
#endif
#include <stdlib.h>
#define mem_alloc(bsize) malloc(bsize)
#define mem_free(ptr,bsize) free(ptr)
#ifndef makedev
#include <sys/types.h>
#endif
#if defined __APPLE_CC__ || defined __FreeBSD__
#define __u_char_defined 
#define __daddr_t_defined 
#endif
#ifndef __u_char_defined
#define __u_char_defined 
#endif
#ifndef __daddr_t_defined
#define __daddr_t_defined 
#endif
#include <sys/time.h>
#include <sys/param.h>
#include <netinet/in.h>
#ifndef INADDR_LOOPBACK
#define INADDR_LOOPBACK (u_long)0x7F000001
#endif
#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN 64
#endif
#endif
