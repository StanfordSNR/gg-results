// GGHASH:Vy1BLzX6m659CiLch6l.A_O5FodShFxXIyQlie2gWzzk00000f98
#ifndef __LINUX_PUBLIC_PRIVCMD_H__
#define __LINUX_PUBLIC_PRIVCMD_H__ 
#include <linux/types.h>
#include <xen/interface/xen.h>
#define PRIVCMD_MMAPBATCH_MFN_ERROR 0xf0000000U
#define PRIVCMD_MMAPBATCH_PAGED_ERROR 0x80000000U
#define IOCTL_PRIVCMD_HYPERCALL _IOC(_IOC_NONE, 'P', 0, sizeof(struct privcmd_hypercall))
#define IOCTL_PRIVCMD_MMAP _IOC(_IOC_NONE, 'P', 2, sizeof(struct privcmd_mmap))
#define IOCTL_PRIVCMD_MMAPBATCH _IOC(_IOC_NONE, 'P', 3, sizeof(struct privcmd_mmapbatch))
#define IOCTL_PRIVCMD_MMAPBATCH_V2 _IOC(_IOC_NONE, 'P', 4, sizeof(struct privcmd_mmapbatch_v2))
#define IOCTL_PRIVCMD_DM_OP _IOC(_IOC_NONE, 'P', 5, sizeof(struct privcmd_dm_op))
#define IOCTL_PRIVCMD_RESTRICT _IOC(_IOC_NONE, 'P', 6, sizeof(domid_t))
#endif
