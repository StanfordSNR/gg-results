// GGHASH:VA.ZBUQvE1PCVyKD5mOAlAk5uGufuogiC6cLPyz7_Tzs0000070a
#ifndef __LINUX_IF_ADDR_H
#define __LINUX_IF_ADDR_H 
#include <linux/types.h>
#include <linux/netlink.h>
#define IFA_MAX (__IFA_MAX - 1)
#define IFA_F_SECONDARY 0x01
#define IFA_F_TEMPORARY IFA_F_SECONDARY
#define IFA_F_NODAD 0x02
#define IFA_F_OPTIMISTIC 0x04
#define IFA_F_DADFAILED 0x08
#define IFA_F_HOMEADDRESS 0x10
#define IFA_F_DEPRECATED 0x20
#define IFA_F_TENTATIVE 0x40
#define IFA_F_PERMANENT 0x80
#define IFA_F_MANAGETEMPADDR 0x100
#define IFA_F_NOPREFIXROUTE 0x200
#define IFA_F_MCAUTOJOIN 0x400
#define IFA_F_STABLE_PRIVACY 0x800
#define IFA_RTA(r) ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct ifaddrmsg))))
#define IFA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct ifaddrmsg))
#endif
