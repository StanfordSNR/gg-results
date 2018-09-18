// GGHASH:V3Gioph.Eh0sVPVPVivdVOuikHQ5H1Z7ge0u7DOM3tfI00000e52
#ifndef SCSI_NETLINK_H
#define SCSI_NETLINK_H 
#include <linux/netlink.h>
#include <linux/types.h>
#define SCSI_TRANSPORT_MSG NLMSG_MIN_TYPE + 1
#define SCSI_NL_GRP_FC_EVENTS (1<<2)
#define SCSI_NL_GRP_CNT 3
#define SCSI_NL_VERSION 1
#define SCSI_NL_MAGIC 0xA1B2
#define SCSI_NL_TRANSPORT 0
#define SCSI_NL_TRANSPORT_FC 1
#define SCSI_NL_MAX_TRANSPORTS 2
#define SCSI_NL_SHOST_VENDOR 0x0001
#define SCSI_NL_MSGALIGN(len) (((len) + 7) & ~7)
#define SCSI_NL_VID_TYPE_SHIFT 56
#define SCSI_NL_VID_TYPE_MASK ((__u64)0xFF << SCSI_NL_VID_TYPE_SHIFT)
#define SCSI_NL_VID_TYPE_PCI ((__u64)0x01 << SCSI_NL_VID_TYPE_SHIFT)
#define SCSI_NL_VID_ID_MASK (~ SCSI_NL_VID_TYPE_MASK)
#define INIT_SCSI_NL_HDR(hdr,t,mtype,mlen) { (hdr)->version = SCSI_NL_VERSION; (hdr)->transport = t; (hdr)->magic = SCSI_NL_MAGIC; (hdr)->msgtype = mtype; (hdr)->msglen = mlen; }
#endif
