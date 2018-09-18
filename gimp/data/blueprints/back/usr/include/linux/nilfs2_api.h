// GGHASH:VpU8KGUGXg8tmHFoK7mI2xbhD_Vm7hPDArhEUtMqEtMo00001da5
#ifndef _LINUX_NILFS2_API_H
#define _LINUX_NILFS2_API_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define NILFS_CPINFO_FNS(flag,name) static __inline__ int nilfs_cpinfo_ ##name(const struct nilfs_cpinfo *cpinfo) { return !!(cpinfo->ci_flags & (1UL << NILFS_CPINFO_ ##flag)); }
#define NILFS_SUINFO_FNS(flag,name) static __inline__ int nilfs_suinfo_ ##name(const struct nilfs_suinfo *si) { return si->sui_flags & (1UL << NILFS_SUINFO_ ##flag); }
#define NILFS_SUINFO_UPDATE_FNS(flag,name) static __inline__ void nilfs_suinfo_update_set_ ##name(struct nilfs_suinfo_update *sup) { sup->sup_flags |= 1UL << NILFS_SUINFO_UPDATE_ ##flag; } static __inline__ void nilfs_suinfo_update_clear_ ##name(struct nilfs_suinfo_update *sup) { sup->sup_flags &= ~(1UL << NILFS_SUINFO_UPDATE_ ##flag); } static __inline__ int nilfs_suinfo_update_ ##name(const struct nilfs_suinfo_update *sup) { return !!(sup->sup_flags & (1UL << NILFS_SUINFO_UPDATE_ ##flag));}
#define NILFS_IOCTL_IDENT 'n'
#define NILFS_IOCTL_CHANGE_CPMODE _IOW(NILFS_IOCTL_IDENT, 0x80, struct nilfs_cpmode)
#define NILFS_IOCTL_DELETE_CHECKPOINT _IOW(NILFS_IOCTL_IDENT, 0x81, __u64)
#define NILFS_IOCTL_GET_CPINFO _IOR(NILFS_IOCTL_IDENT, 0x82, struct nilfs_argv)
#define NILFS_IOCTL_GET_CPSTAT _IOR(NILFS_IOCTL_IDENT, 0x83, struct nilfs_cpstat)
#define NILFS_IOCTL_GET_SUINFO _IOR(NILFS_IOCTL_IDENT, 0x84, struct nilfs_argv)
#define NILFS_IOCTL_GET_SUSTAT _IOR(NILFS_IOCTL_IDENT, 0x85, struct nilfs_sustat)
#define NILFS_IOCTL_GET_VINFO _IOWR(NILFS_IOCTL_IDENT, 0x86, struct nilfs_argv)
#define NILFS_IOCTL_GET_BDESCS _IOWR(NILFS_IOCTL_IDENT, 0x87, struct nilfs_argv)
#define NILFS_IOCTL_CLEAN_SEGMENTS _IOW(NILFS_IOCTL_IDENT, 0x88, struct nilfs_argv[5])
#define NILFS_IOCTL_SYNC _IOR(NILFS_IOCTL_IDENT, 0x8A, __u64)
#define NILFS_IOCTL_RESIZE _IOW(NILFS_IOCTL_IDENT, 0x8B, __u64)
#define NILFS_IOCTL_SET_ALLOC_RANGE _IOW(NILFS_IOCTL_IDENT, 0x8C, __u64[2])
#define NILFS_IOCTL_SET_SUINFO _IOW(NILFS_IOCTL_IDENT, 0x8D, struct nilfs_argv)
#endif
