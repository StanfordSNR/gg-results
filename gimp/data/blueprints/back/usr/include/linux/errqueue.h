// GGHASH:VJDoR5RRKrL5tB6GYBO9T4X86KPZ9trSOt.z0fJxz_gQ00000559
#ifndef _LINUX_ERRQUEUE_H
#define _LINUX_ERRQUEUE_H 
#include <linux/types.h>
#define SO_EE_ORIGIN_NONE 0
#define SO_EE_ORIGIN_LOCAL 1
#define SO_EE_ORIGIN_ICMP 2
#define SO_EE_ORIGIN_ICMP6 3
#define SO_EE_ORIGIN_TXSTATUS 4
#define SO_EE_ORIGIN_ZEROCOPY 5
#define SO_EE_ORIGIN_TIMESTAMPING SO_EE_ORIGIN_TXSTATUS
#define SO_EE_OFFENDER(ee) ((struct sockaddr*)((ee)+1))
#define SO_EE_CODE_ZEROCOPY_COPIED 1
#endif
