// GGHASH:VpnT8caLPayVibvwczoZbIVw7A.5E45W5wWOtWkqsXiE000018ee
#ifndef SCIF_IOCTL_H
#define SCIF_IOCTL_H 
#include <linux/types.h>
#define SCIF_BIND _IOWR('s', 1, __u64)
#define SCIF_LISTEN _IOW('s', 2, __s32)
#define SCIF_CONNECT _IOWR('s', 3, struct scifioctl_connect)
#define SCIF_ACCEPTREQ _IOWR('s', 4, struct scifioctl_accept)
#define SCIF_ACCEPTREG _IOWR('s', 5, __u64)
#define SCIF_SEND _IOWR('s', 6, struct scifioctl_msg)
#define SCIF_RECV _IOWR('s', 7, struct scifioctl_msg)
#define SCIF_REG _IOWR('s', 8, struct scifioctl_reg)
#define SCIF_UNREG _IOWR('s', 9, struct scifioctl_unreg)
#define SCIF_READFROM _IOWR('s', 10, struct scifioctl_copy)
#define SCIF_WRITETO _IOWR('s', 11, struct scifioctl_copy)
#define SCIF_VREADFROM _IOWR('s', 12, struct scifioctl_copy)
#define SCIF_VWRITETO _IOWR('s', 13, struct scifioctl_copy)
#define SCIF_GET_NODEIDS _IOWR('s', 14, struct scifioctl_node_ids)
#define SCIF_FENCE_MARK _IOWR('s', 15, struct scifioctl_fence_mark)
#define SCIF_FENCE_WAIT _IOWR('s', 16, __s32)
#define SCIF_FENCE_SIGNAL _IOWR('s', 17, struct scifioctl_fence_signal)
#endif
