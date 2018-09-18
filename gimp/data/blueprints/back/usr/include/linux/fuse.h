// GGHASH:VUH8pYnORg1k7nH7337NPbec4FgIbDEZamvTy_MrCauc000043da
#ifndef _LINUX_FUSE_H
#define _LINUX_FUSE_H 
#include <stdint.h>
#define FUSE_KERNEL_VERSION 7
#define FUSE_KERNEL_MINOR_VERSION 26
#define FUSE_ROOT_ID 1
#define FATTR_MODE (1 << 0)
#define FATTR_UID (1 << 1)
#define FATTR_GID (1 << 2)
#define FATTR_SIZE (1 << 3)
#define FATTR_ATIME (1 << 4)
#define FATTR_MTIME (1 << 5)
#define FATTR_FH (1 << 6)
#define FATTR_ATIME_NOW (1 << 7)
#define FATTR_MTIME_NOW (1 << 8)
#define FATTR_LOCKOWNER (1 << 9)
#define FATTR_CTIME (1 << 10)
#define FOPEN_DIRECT_IO (1 << 0)
#define FOPEN_KEEP_CACHE (1 << 1)
#define FOPEN_NONSEEKABLE (1 << 2)
#define FUSE_ASYNC_READ (1 << 0)
#define FUSE_POSIX_LOCKS (1 << 1)
#define FUSE_FILE_OPS (1 << 2)
#define FUSE_ATOMIC_O_TRUNC (1 << 3)
#define FUSE_EXPORT_SUPPORT (1 << 4)
#define FUSE_BIG_WRITES (1 << 5)
#define FUSE_DONT_MASK (1 << 6)
#define FUSE_SPLICE_WRITE (1 << 7)
#define FUSE_SPLICE_MOVE (1 << 8)
#define FUSE_SPLICE_READ (1 << 9)
#define FUSE_FLOCK_LOCKS (1 << 10)
#define FUSE_HAS_IOCTL_DIR (1 << 11)
#define FUSE_AUTO_INVAL_DATA (1 << 12)
#define FUSE_DO_READDIRPLUS (1 << 13)
#define FUSE_READDIRPLUS_AUTO (1 << 14)
#define FUSE_ASYNC_DIO (1 << 15)
#define FUSE_WRITEBACK_CACHE (1 << 16)
#define FUSE_NO_OPEN_SUPPORT (1 << 17)
#define FUSE_PARALLEL_DIROPS (1 << 18)
#define FUSE_HANDLE_KILLPRIV (1 << 19)
#define FUSE_POSIX_ACL (1 << 20)
#define CUSE_UNRESTRICTED_IOCTL (1 << 0)
#define FUSE_RELEASE_FLUSH (1 << 0)
#define FUSE_RELEASE_FLOCK_UNLOCK (1 << 1)
#define FUSE_GETATTR_FH (1 << 0)
#define FUSE_LK_FLOCK (1 << 0)
#define FUSE_WRITE_CACHE (1 << 0)
#define FUSE_WRITE_LOCKOWNER (1 << 1)
#define FUSE_READ_LOCKOWNER (1 << 1)
#define FUSE_IOCTL_COMPAT (1 << 0)
#define FUSE_IOCTL_UNRESTRICTED (1 << 1)
#define FUSE_IOCTL_RETRY (1 << 2)
#define FUSE_IOCTL_32BIT (1 << 3)
#define FUSE_IOCTL_DIR (1 << 4)
#define FUSE_IOCTL_MAX_IOV 256
#define FUSE_POLL_SCHEDULE_NOTIFY (1 << 0)
#define FUSE_MIN_READ_BUFFER 8192
#define FUSE_COMPAT_ENTRY_OUT_SIZE 120
#define FUSE_COMPAT_ATTR_OUT_SIZE 96
#define FUSE_COMPAT_MKNOD_IN_SIZE 8
#define FUSE_COMPAT_WRITE_IN_SIZE 24
#define FUSE_COMPAT_STATFS_SIZE 48
#define FUSE_COMPAT_INIT_OUT_SIZE 8
#define FUSE_COMPAT_22_INIT_OUT_SIZE 24
#define CUSE_INIT_INFO_MAX 4096
#define FUSE_NAME_OFFSET offsetof(struct fuse_dirent, name)
#define FUSE_DIRENT_ALIGN(x) (((x) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))
#define FUSE_DIRENT_SIZE(d) FUSE_DIRENT_ALIGN(FUSE_NAME_OFFSET + (d)->namelen)
#define FUSE_NAME_OFFSET_DIRENTPLUS offsetof(struct fuse_direntplus, dirent.name)
#define FUSE_DIRENTPLUS_SIZE(d) FUSE_DIRENT_ALIGN(FUSE_NAME_OFFSET_DIRENTPLUS + (d)->dirent.namelen)
#define FUSE_DEV_IOC_CLONE _IOR(229, 0, uint32_t)
#endif
