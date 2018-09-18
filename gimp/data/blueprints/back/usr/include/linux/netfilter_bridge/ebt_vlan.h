// GGHASH:VIjdq5YRw_Cvt2.l75WpBARUzI_8ZBNffulBjqlxJCts000002cf
#ifndef __LINUX_BRIDGE_EBT_VLAN_H
#define __LINUX_BRIDGE_EBT_VLAN_H 
#include <linux/types.h>
#define EBT_VLAN_ID 0x01
#define EBT_VLAN_PRIO 0x02
#define EBT_VLAN_ENCAP 0x04
#define EBT_VLAN_MASK (EBT_VLAN_ID | EBT_VLAN_PRIO | EBT_VLAN_ENCAP)
#define EBT_VLAN_MATCH "vlan"
#endif
