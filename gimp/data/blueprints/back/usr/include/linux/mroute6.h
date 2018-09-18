// GGHASH:V_CYyHkwd8xH0tCihqmgMc1DB6NQdnAPdl0uFOuFPPJc000011e1
#ifndef __LINUX_MROUTE6_H
#define __LINUX_MROUTE6_H 
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/sockios.h>
#include <linux/in6.h>
#define MRT6_BASE 200
#define MRT6_INIT (MRT6_BASE)
#define MRT6_DONE (MRT6_BASE+1)
#define MRT6_ADD_MIF (MRT6_BASE+2)
#define MRT6_DEL_MIF (MRT6_BASE+3)
#define MRT6_ADD_MFC (MRT6_BASE+4)
#define MRT6_DEL_MFC (MRT6_BASE+5)
#define MRT6_VERSION (MRT6_BASE+6)
#define MRT6_ASSERT (MRT6_BASE+7)
#define MRT6_PIM (MRT6_BASE+8)
#define MRT6_TABLE (MRT6_BASE+9)
#define MRT6_ADD_MFC_PROXY (MRT6_BASE+10)
#define MRT6_DEL_MFC_PROXY (MRT6_BASE+11)
#define MRT6_MAX (MRT6_BASE+11)
#define SIOCGETMIFCNT_IN6 SIOCPROTOPRIVATE
#define SIOCGETSGCNT_IN6 (SIOCPROTOPRIVATE+1)
#define SIOCGETRPF (SIOCPROTOPRIVATE+2)
#define MAXMIFS 32
#define ALL_MIFS ((mifi_t)(-1))
#ifndef IF_SETSIZE
#define IF_SETSIZE 256
#endif
#define NIFBITS (sizeof(if_mask) * 8)
#define IF_SET(n,p) ((p)->ifs_bits[(n)/NIFBITS] |= (1 << ((n) % NIFBITS)))
#define IF_CLR(n,p) ((p)->ifs_bits[(n)/NIFBITS] &= ~(1 << ((n) % NIFBITS)))
#define IF_ISSET(n,p) ((p)->ifs_bits[(n)/NIFBITS] & (1 << ((n) % NIFBITS)))
#define IF_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define IF_ZERO(p) bzero(p, sizeof(*(p)))
#define MIFF_REGISTER 0x1
#define MRT6MSG_NOCACHE 1
#define MRT6MSG_WRONGMIF 2
#define MRT6MSG_WHOLEPKT 3
#define IP6MRA_CREPORT_MAX (__IP6MRA_CREPORT_MAX - 1)
#endif
