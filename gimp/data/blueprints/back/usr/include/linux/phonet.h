// GGHASH:V24ri7raslOmr2JlJS9MmZhCz6zivGaNxvUd0aFFQxSw00001245
#ifndef LINUX_PHONET_H
#define LINUX_PHONET_H 
#include <linux/types.h>
#include <linux/socket.h>
#define PN_PROTO_TRANSPORT 0
#define PN_PROTO_PHONET 1
#define PN_PROTO_PIPE 2
#define PHONET_NPROTO 3
#define PNPIPE_ENCAP 1
#define PNPIPE_IFINDEX 2
#define PNPIPE_HANDLE 3
#define PNPIPE_INITSTATE 4
#define PNADDR_ANY 0
#define PNADDR_BROADCAST 0xFC
#define PNPORT_RESOURCE_ROUTING 0
#define PNPIPE_ENCAP_NONE 0
#define PNPIPE_ENCAP_IP 1
#define SIOCPNGETOBJECT (SIOCPROTOPRIVATE + 0)
#define SIOCPNENABLEPIPE (SIOCPROTOPRIVATE + 13)
#define SIOCPNADDRESOURCE (SIOCPROTOPRIVATE + 14)
#define SIOCPNDELRESOURCE (SIOCPROTOPRIVATE + 15)
#define PN_COMMON_MESSAGE 0xF0
#define PN_COMMGR 0x10
#define PN_PREFIX 0xE0
#define pn_submsg_id pn_msg_u.base.pn_submsg_id
#define pn_e_submsg_id pn_msg_u.ext.pn_e_submsg_id
#define pn_e_res_id pn_msg_u.ext.pn_e_res_id
#define pn_data pn_msg_u.base.pn_data
#define pn_e_data pn_msg_u.ext.pn_e_data
#define PN_COMM_SERVICE_NOT_IDENTIFIED_RESP 0x01
#define PN_COMM_ISA_ENTITY_NOT_REACHABLE_RESP 0x14
#define pn_orig_msg_id pn_data[0]
#define pn_status pn_data[1]
#define pn_e_orig_msg_id pn_e_data[0]
#define pn_e_status pn_e_data[1]
#define PN_DEV_PC 0x10
#endif
