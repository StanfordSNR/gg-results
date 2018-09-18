// GGHASH:VBj1eX40ymMamSMpYzX_Jmb6pqKIf7XtIzaimtyV2JGE00000fa5
#ifndef _IF_TUNNEL_H_
#define _IF_TUNNEL_H_ 
#include <linux/types.h>
#include <linux/if.h>
#include <linux/ip.h>
#include <linux/in6.h>
#include <asm/byteorder.h>
#define SIOCGETTUNNEL (SIOCDEVPRIVATE + 0)
#define SIOCADDTUNNEL (SIOCDEVPRIVATE + 1)
#define SIOCDELTUNNEL (SIOCDEVPRIVATE + 2)
#define SIOCCHGTUNNEL (SIOCDEVPRIVATE + 3)
#define SIOCGETPRL (SIOCDEVPRIVATE + 4)
#define SIOCADDPRL (SIOCDEVPRIVATE + 5)
#define SIOCDELPRL (SIOCDEVPRIVATE + 6)
#define SIOCCHGPRL (SIOCDEVPRIVATE + 7)
#define SIOCGET6RD (SIOCDEVPRIVATE + 8)
#define SIOCADD6RD (SIOCDEVPRIVATE + 9)
#define SIOCDEL6RD (SIOCDEVPRIVATE + 10)
#define SIOCCHG6RD (SIOCDEVPRIVATE + 11)
#define GRE_CSUM __cpu_to_be16(0x8000)
#define GRE_ROUTING __cpu_to_be16(0x4000)
#define GRE_KEY __cpu_to_be16(0x2000)
#define GRE_SEQ __cpu_to_be16(0x1000)
#define GRE_STRICT __cpu_to_be16(0x0800)
#define GRE_REC __cpu_to_be16(0x0700)
#define GRE_ACK __cpu_to_be16(0x0080)
#define GRE_FLAGS __cpu_to_be16(0x0078)
#define GRE_VERSION __cpu_to_be16(0x0007)
#define GRE_IS_CSUM(f) ((f) & GRE_CSUM)
#define GRE_IS_ROUTING(f) ((f) & GRE_ROUTING)
#define GRE_IS_KEY(f) ((f) & GRE_KEY)
#define GRE_IS_SEQ(f) ((f) & GRE_SEQ)
#define GRE_IS_STRICT(f) ((f) & GRE_STRICT)
#define GRE_IS_REC(f) ((f) & GRE_REC)
#define GRE_IS_ACK(f) ((f) & GRE_ACK)
#define GRE_VERSION_0 __cpu_to_be16(0x0000)
#define GRE_VERSION_1 __cpu_to_be16(0x0001)
#define GRE_PROTO_PPP __cpu_to_be16(0x880b)
#define GRE_PPTP_KEY_MASK __cpu_to_be32(0xffff)
#define IFLA_IPTUN_MAX (__IFLA_IPTUN_MAX - 1)
#define TUNNEL_ENCAP_FLAG_CSUM (1<<0)
#define TUNNEL_ENCAP_FLAG_CSUM6 (1<<1)
#define TUNNEL_ENCAP_FLAG_REMCSUM (1<<2)
#define SIT_ISATAP 0x0001
#define PRL_DEFAULT 0x0001
#define IFLA_GRE_MAX (__IFLA_GRE_MAX - 1)
#define VTI_ISVTI ((__be16)0x0001)
#define IFLA_VTI_MAX (__IFLA_VTI_MAX - 1)
#define IFLA_FAN_MAX (__IFLA_FAN_MAX - 1)
#endif
