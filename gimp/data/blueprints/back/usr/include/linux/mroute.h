// GGHASH:Vefcw6zWmDLw2Q97Q1GNfZOh.ICu9Efjg.K3oh79zbKs00001533
#ifndef __LINUX_MROUTE_H
#define __LINUX_MROUTE_H 
#include <linux/sockios.h>
#include <linux/types.h>
#include <linux/in.h>
#define MRT_BASE 200
#define MRT_INIT (MRT_BASE)
#define MRT_DONE (MRT_BASE+1)
#define MRT_ADD_VIF (MRT_BASE+2)
#define MRT_DEL_VIF (MRT_BASE+3)
#define MRT_ADD_MFC (MRT_BASE+4)
#define MRT_DEL_MFC (MRT_BASE+5)
#define MRT_VERSION (MRT_BASE+6)
#define MRT_ASSERT (MRT_BASE+7)
#define MRT_PIM (MRT_BASE+8)
#define MRT_TABLE (MRT_BASE+9)
#define MRT_ADD_MFC_PROXY (MRT_BASE+10)
#define MRT_DEL_MFC_PROXY (MRT_BASE+11)
#define MRT_MAX (MRT_BASE+11)
#define SIOCGETVIFCNT SIOCPROTOPRIVATE
#define SIOCGETSGCNT (SIOCPROTOPRIVATE+1)
#define SIOCGETRPF (SIOCPROTOPRIVATE+2)
#define MAXVIFS 32
#define ALL_VIFS ((vifi_t)(-1))
#define VIFM_SET(n,m) ((m)|=(1<<(n)))
#define VIFM_CLR(n,m) ((m)&=~(1<<(n)))
#define VIFM_ISSET(n,m) ((m)&(1<<(n)))
#define VIFM_CLRALL(m) ((m)=0)
#define VIFM_COPY(mfrom,mto) ((mto)=(mfrom))
#define VIFM_SAME(m1,m2) ((m1)==(m2))
#define VIFF_TUNNEL 0x1
#define VIFF_SRCRT 0x2
#define VIFF_REGISTER 0x4
#define VIFF_USE_IFINDEX 0x8
#define IPMRA_TABLE_MAX (__IPMRA_TABLE_MAX - 1)
#define IPMRA_VIF_MAX (__IPMRA_VIF_MAX - 1)
#define IPMRA_VIFA_MAX (__IPMRA_VIFA_MAX - 1)
#define IPMRA_CREPORT_MAX (__IPMRA_CREPORT_MAX - 1)
#define MFC_ASSERT_THRESH (3*HZ)
#define IGMPMSG_NOCACHE 1
#define IGMPMSG_WRONGVIF 2
#define IGMPMSG_WHOLEPKT 3
#endif
