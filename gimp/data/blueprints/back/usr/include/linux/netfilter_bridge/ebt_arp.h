// GGHASH:V6jW_R2Vqm3PyCVNcBDNuZy3WElzCSpyBVu1AooMpKJ800000384
#ifndef __LINUX_BRIDGE_EBT_ARP_H
#define __LINUX_BRIDGE_EBT_ARP_H 
#include <linux/types.h>
#include <linux/if_ether.h>
#define EBT_ARP_OPCODE 0x01
#define EBT_ARP_HTYPE 0x02
#define EBT_ARP_PTYPE 0x04
#define EBT_ARP_SRC_IP 0x08
#define EBT_ARP_DST_IP 0x10
#define EBT_ARP_SRC_MAC 0x20
#define EBT_ARP_DST_MAC 0x40
#define EBT_ARP_GRAT 0x80
#define EBT_ARP_MASK (EBT_ARP_OPCODE | EBT_ARP_HTYPE | EBT_ARP_PTYPE | EBT_ARP_SRC_IP | EBT_ARP_DST_IP | EBT_ARP_SRC_MAC | EBT_ARP_DST_MAC | EBT_ARP_GRAT)
#define EBT_ARP_MATCH "arp"
#endif
