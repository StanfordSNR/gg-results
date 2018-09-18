// GGHASH:VBAc4jwdqMZhX2b2oVvafduKcAFMRmV1xtR.Y6e5EKp40000130f
#ifndef __LINUX_IF_PPPOX_H
#define __LINUX_IF_PPPOX_H 
#include <linux/types.h>
#include <asm/byteorder.h>
#include <linux/socket.h>
#include <linux/if.h>
#include <linux/if_ether.h>
#include <linux/if_pppol2tp.h>
#include <linux/in.h>
#include <linux/in6.h>
#ifndef AF_PPPOX
#define AF_PPPOX 24
#define PF_PPPOX AF_PPPOX
#endif
#define PX_PROTO_OE 0
#define PX_PROTO_OL2TP 1
#define PX_PROTO_PPTP 2
#define PX_MAX_PROTO 3
#define PPPOEIOCSFWD _IOW(0xB1 ,0, size_t)
#define PPPOEIOCDFWD _IO(0xB1 ,1)
#define PADI_CODE 0x09
#define PADO_CODE 0x07
#define PADR_CODE 0x19
#define PADS_CODE 0x65
#define PADT_CODE 0xa7
#define PTT_EOL __cpu_to_be16(0x0000)
#define PTT_SRV_NAME __cpu_to_be16(0x0101)
#define PTT_AC_NAME __cpu_to_be16(0x0102)
#define PTT_HOST_UNIQ __cpu_to_be16(0x0103)
#define PTT_AC_COOKIE __cpu_to_be16(0x0104)
#define PTT_VENDOR __cpu_to_be16(0x0105)
#define PTT_RELAY_SID __cpu_to_be16(0x0110)
#define PTT_SRV_ERR __cpu_to_be16(0x0201)
#define PTT_SYS_ERR __cpu_to_be16(0x0202)
#define PTT_GEN_ERR __cpu_to_be16(0x0203)
#if defined(__LITTLE_ENDIAN_BITFIELD)
#elif defined(__BIG_ENDIAN_BITFIELD)
#else
#error "Please fix <asm/byteorder.h>"
#endif
#define PPPOE_SES_HLEN 8
#endif
