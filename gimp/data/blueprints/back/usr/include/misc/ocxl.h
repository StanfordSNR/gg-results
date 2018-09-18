// GGHASH:VQINgPNGOWcf5i31zLvRoJwWvehoGyZozYU77NbLxMTk00000786
#ifndef _MISC_OCXL_H
#define _MISC_OCXL_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define OCXL_KERNEL_EVENT_FLAG_LAST 0x0001
#define OCXL_IOCTL_FEATURES_FLAGS0_P9_WAIT 0x01
#define OCXL_MAGIC 0xCA
#define OCXL_IOCTL_ATTACH _IOW(OCXL_MAGIC, 0x10, struct ocxl_ioctl_attach)
#define OCXL_IOCTL_IRQ_ALLOC _IOR(OCXL_MAGIC, 0x11, __u64)
#define OCXL_IOCTL_IRQ_FREE _IOW(OCXL_MAGIC, 0x12, __u64)
#define OCXL_IOCTL_IRQ_SET_FD _IOW(OCXL_MAGIC, 0x13, struct ocxl_ioctl_irq_fd)
#define OCXL_IOCTL_GET_METADATA _IOR(OCXL_MAGIC, 0x14, struct ocxl_ioctl_metadata)
#define OCXL_IOCTL_ENABLE_P9_WAIT _IOR(OCXL_MAGIC, 0x15, struct ocxl_ioctl_p9_wait)
#define OCXL_IOCTL_GET_FEATURES _IOR(OCXL_MAGIC, 0x16, struct ocxl_ioctl_features)
#endif
