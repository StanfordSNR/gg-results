// GGHASH:VQrSO3EYiibqct290Kpv8Sp_bghnO4Lw3VdTXXw6_6es00000b02
#ifndef __LINUX_USB_GADGETFS_H
#define __LINUX_USB_GADGETFS_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/usb/ch9.h>
#define GADGETFS_FIFO_STATUS _IO('g', 1)
#define GADGETFS_FIFO_FLUSH _IO('g', 2)
#define GADGETFS_CLEAR_HALT _IO('g', 3)
#endif
