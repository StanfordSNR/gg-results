// GGHASH:VyfpXajDG6sKx5XMziJtUCJXARv_BDqgaC6j_YZDKi0M00000d58
#ifndef _LINUX_NCP_FS_H
#define _LINUX_NCP_FS_H 
#include <linux/fs.h>
#include <linux/in.h>
#include <linux/types.h>
#include <linux/magic.h>
#include <linux/ipx.h>
#include <linux/ncp_no.h>
#define NCP_LOCK_LOG 0
#define NCP_LOCK_SH 1
#define NCP_LOCK_EX 2
#define NCP_LOCK_CLEAR 256
#define NCP_LOCK_DEFAULT_TIMEOUT 18
#define NCP_LOCK_MAX_TIMEOUT 180
#define NCP_AUTH_NONE 0x00
#define NCP_AUTH_BIND 0x31
#define NCP_AUTH_NDS 0x32
#define NCP_IOCSNAME_LEN 20
#define NCP_IOC_NCPREQUEST _IOR('n', 1, struct ncp_ioctl_request)
#define NCP_IOC_GETMOUNTUID _IOW('n', 2, __kernel_old_uid_t)
#define NCP_IOC_GETMOUNTUID2 _IOW('n', 2, unsigned long)
#define NCP_IOC_CONN_LOGGED_IN _IO('n', 3)
#define NCP_GET_FS_INFO_VERSION (1)
#define NCP_IOC_GET_FS_INFO _IOWR('n', 4, struct ncp_fs_info)
#define NCP_GET_FS_INFO_VERSION_V2 (2)
#define NCP_IOC_GET_FS_INFO_V2 _IOWR('n', 4, struct ncp_fs_info_v2)
#define NCP_IOC_SIGN_INIT _IOR('n', 5, struct ncp_sign_init)
#define NCP_IOC_SIGN_WANTED _IOR('n', 6, int)
#define NCP_IOC_SET_SIGN_WANTED _IOW('n', 6, int)
#define NCP_IOC_LOCKUNLOCK _IOR('n', 7, struct ncp_lock_ioctl)
#define NCP_IOC_GETROOT _IOW('n', 8, struct ncp_setroot_ioctl)
#define NCP_IOC_SETROOT _IOR('n', 8, struct ncp_setroot_ioctl)
#define NCP_IOC_GETOBJECTNAME _IOWR('n', 9, struct ncp_objectname_ioctl)
#define NCP_IOC_SETOBJECTNAME _IOR('n', 9, struct ncp_objectname_ioctl)
#define NCP_IOC_GETPRIVATEDATA _IOWR('n', 10, struct ncp_privatedata_ioctl)
#define NCP_IOC_SETPRIVATEDATA _IOR('n', 10, struct ncp_privatedata_ioctl)
#define NCP_IOC_GETCHARSETS _IOWR('n', 11, struct ncp_nls_ioctl)
#define NCP_IOC_SETCHARSETS _IOR('n', 11, struct ncp_nls_ioctl)
#define NCP_IOC_GETDENTRYTTL _IOW('n', 12, __u32)
#define NCP_IOC_SETDENTRYTTL _IOR('n', 12, __u32)
#define NCP_PACKET_SIZE 4070
#define NCP_MAXPATHLEN 255
#define NCP_MAXNAMELEN 14
#endif
