// GGHASH:Vgzj6j9uhhYoXXe6zZyQQu8CWJjk22zPGSF3hTrPuU0k00001b10
#ifndef _LINUX_USBDEVICE_FS_H
#define _LINUX_USBDEVICE_FS_H 
#include <linux/types.h>
#include <linux/magic.h>
#define USBDEVFS_MAXDRIVERNAME 255
#define USBDEVFS_URB_SHORT_NOT_OK 0x01
#define USBDEVFS_URB_ISO_ASAP 0x02
#define USBDEVFS_URB_BULK_CONTINUATION 0x04
#define USBDEVFS_URB_NO_FSBR 0x20
#define USBDEVFS_URB_ZERO_PACKET 0x40
#define USBDEVFS_URB_NO_INTERRUPT 0x80
#define USBDEVFS_URB_TYPE_ISO 0
#define USBDEVFS_URB_TYPE_INTERRUPT 1
#define USBDEVFS_URB_TYPE_CONTROL 2
#define USBDEVFS_URB_TYPE_BULK 3
#define USBDEVFS_CAP_ZERO_PACKET 0x01
#define USBDEVFS_CAP_BULK_CONTINUATION 0x02
#define USBDEVFS_CAP_NO_PACKET_SIZE_LIM 0x04
#define USBDEVFS_CAP_BULK_SCATTER_GATHER 0x08
#define USBDEVFS_CAP_REAP_AFTER_DISCONNECT 0x10
#define USBDEVFS_CAP_MMAP 0x20
#define USBDEVFS_CAP_DROP_PRIVILEGES 0x40
#define USBDEVFS_DISCONNECT_CLAIM_IF_DRIVER 0x01
#define USBDEVFS_DISCONNECT_CLAIM_EXCEPT_DRIVER 0x02
#define USBDEVFS_CONTROL _IOWR('U', 0, struct usbdevfs_ctrltransfer)
#define USBDEVFS_CONTROL32 _IOWR('U', 0, struct usbdevfs_ctrltransfer32)
#define USBDEVFS_BULK _IOWR('U', 2, struct usbdevfs_bulktransfer)
#define USBDEVFS_BULK32 _IOWR('U', 2, struct usbdevfs_bulktransfer32)
#define USBDEVFS_RESETEP _IOR('U', 3, unsigned int)
#define USBDEVFS_SETINTERFACE _IOR('U', 4, struct usbdevfs_setinterface)
#define USBDEVFS_SETCONFIGURATION _IOR('U', 5, unsigned int)
#define USBDEVFS_GETDRIVER _IOW('U', 8, struct usbdevfs_getdriver)
#define USBDEVFS_SUBMITURB _IOR('U', 10, struct usbdevfs_urb)
#define USBDEVFS_SUBMITURB32 _IOR('U', 10, struct usbdevfs_urb32)
#define USBDEVFS_DISCARDURB _IO('U', 11)
#define USBDEVFS_REAPURB _IOW('U', 12, void *)
#define USBDEVFS_REAPURB32 _IOW('U', 12, __u32)
#define USBDEVFS_REAPURBNDELAY _IOW('U', 13, void *)
#define USBDEVFS_REAPURBNDELAY32 _IOW('U', 13, __u32)
#define USBDEVFS_DISCSIGNAL _IOR('U', 14, struct usbdevfs_disconnectsignal)
#define USBDEVFS_DISCSIGNAL32 _IOR('U', 14, struct usbdevfs_disconnectsignal32)
#define USBDEVFS_CLAIMINTERFACE _IOR('U', 15, unsigned int)
#define USBDEVFS_RELEASEINTERFACE _IOR('U', 16, unsigned int)
#define USBDEVFS_CONNECTINFO _IOW('U', 17, struct usbdevfs_connectinfo)
#define USBDEVFS_IOCTL _IOWR('U', 18, struct usbdevfs_ioctl)
#define USBDEVFS_IOCTL32 _IOWR('U', 18, struct usbdevfs_ioctl32)
#define USBDEVFS_HUB_PORTINFO _IOR('U', 19, struct usbdevfs_hub_portinfo)
#define USBDEVFS_RESET _IO('U', 20)
#define USBDEVFS_CLEAR_HALT _IOR('U', 21, unsigned int)
#define USBDEVFS_DISCONNECT _IO('U', 22)
#define USBDEVFS_CONNECT _IO('U', 23)
#define USBDEVFS_CLAIM_PORT _IOR('U', 24, unsigned int)
#define USBDEVFS_RELEASE_PORT _IOR('U', 25, unsigned int)
#define USBDEVFS_GET_CAPABILITIES _IOR('U', 26, __u32)
#define USBDEVFS_DISCONNECT_CLAIM _IOR('U', 27, struct usbdevfs_disconnect_claim)
#define USBDEVFS_ALLOC_STREAMS _IOR('U', 28, struct usbdevfs_streams)
#define USBDEVFS_FREE_STREAMS _IOR('U', 29, struct usbdevfs_streams)
#define USBDEVFS_DROP_PRIVILEGES _IOW('U', 30, __u32)
#define USBDEVFS_GET_SPEED _IO('U', 31)
#endif
