// GGHASH:VAtJHFHs5ZIf9jOGjMaGicEotKm._ndg3QqE9ou4sd4000000670
#ifndef _LINUX_NVME_IOCTL_H
#define _LINUX_NVME_IOCTL_H 
#include <linux/types.h>
#define nvme_admin_cmd nvme_passthru_cmd
#define NVME_IOCTL_ID _IO('N', 0x40)
#define NVME_IOCTL_ADMIN_CMD _IOWR('N', 0x41, struct nvme_admin_cmd)
#define NVME_IOCTL_SUBMIT_IO _IOW('N', 0x42, struct nvme_user_io)
#define NVME_IOCTL_IO_CMD _IOWR('N', 0x43, struct nvme_passthru_cmd)
#define NVME_IOCTL_RESET _IO('N', 0x44)
#define NVME_IOCTL_SUBSYS_RESET _IO('N', 0x45)
#define NVME_IOCTL_RESCAN _IO('N', 0x46)
#endif
