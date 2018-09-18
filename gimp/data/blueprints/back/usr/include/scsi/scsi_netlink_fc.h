// GGHASH:VUNr.8L5GGWYW8N6GeCG7AE6juFZFUA7xphCx3mRffB4000007c9
#ifndef SCSI_NETLINK_FC_H
#define SCSI_NETLINK_FC_H 
#include <scsi/scsi_netlink.h>
#define FC_NL_ASYNC_EVENT 0x0100
#define FC_NL_MSGALIGN(len) (((len) + 7) & ~7)
#endif
