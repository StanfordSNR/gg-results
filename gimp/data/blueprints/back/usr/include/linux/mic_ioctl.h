// GGHASH:Vf7SAD.zAwT5y6_QMbHQhvYLsjeFBO.KbH1rxIkG6GnE000008cc
#ifndef _MIC_IOCTL_H_
#define _MIC_IOCTL_H_ 
#include <linux/types.h>
#define MIC_VIRTIO_ADD_DEVICE _IOWR('s', 1, struct mic_device_desc *)
#define MIC_VIRTIO_COPY_DESC _IOWR('s', 2, struct mic_copy_desc *)
#define MIC_VIRTIO_CONFIG_CHANGE _IOWR('s', 5, __u8 *)
#endif
