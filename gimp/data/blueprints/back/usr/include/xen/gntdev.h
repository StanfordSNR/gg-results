// GGHASH:VvnvWKr3xH8wTPJkNrdiwEYbYyUqXgJZ2OojsPHHPMVg00001c9a
#ifndef __LINUX_PUBLIC_GNTDEV_H__
#define __LINUX_PUBLIC_GNTDEV_H__ 
#include <linux/types.h>
#define IOCTL_GNTDEV_MAP_GRANT_REF _IOC(_IOC_NONE, 'G', 0, sizeof(struct ioctl_gntdev_map_grant_ref))
#define IOCTL_GNTDEV_UNMAP_GRANT_REF _IOC(_IOC_NONE, 'G', 1, sizeof(struct ioctl_gntdev_unmap_grant_ref))
#define IOCTL_GNTDEV_GET_OFFSET_FOR_VADDR _IOC(_IOC_NONE, 'G', 2, sizeof(struct ioctl_gntdev_get_offset_for_vaddr))
#define IOCTL_GNTDEV_SET_MAX_GRANTS _IOC(_IOC_NONE, 'G', 3, sizeof(struct ioctl_gntdev_set_max_grants))
#define IOCTL_GNTDEV_SET_UNMAP_NOTIFY _IOC(_IOC_NONE, 'G', 7, sizeof(struct ioctl_gntdev_unmap_notify))
#define IOCTL_GNTDEV_GRANT_COPY _IOC(_IOC_NONE, 'G', 8, sizeof(struct ioctl_gntdev_grant_copy))
#define UNMAP_NOTIFY_CLEAR_BYTE 0x1
#define UNMAP_NOTIFY_SEND_EVENT 0x2
#endif
