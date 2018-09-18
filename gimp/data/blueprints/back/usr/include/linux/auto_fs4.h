// GGHASH:Vz0q84qpPKWaBc0qjFJud1QgDw9hniO3W41zGv5.5b7E000010b3
#ifndef _LINUX_AUTO_FS4_H
#define _LINUX_AUTO_FS4_H 
#include <linux/types.h>
#include <linux/auto_fs.h>
#undef AUTOFS_PROTO_VERSION
#undef AUTOFS_MIN_PROTO_VERSION
#undef AUTOFS_MAX_PROTO_VERSION
#define AUTOFS_PROTO_VERSION 5
#define AUTOFS_MIN_PROTO_VERSION 3
#define AUTOFS_MAX_PROTO_VERSION 5
#define AUTOFS_PROTO_SUBVERSION 2
#define AUTOFS_EXP_IMMEDIATE 1
#define AUTOFS_EXP_LEAVES 2
#define AUTOFS_TYPE_ANY 0U
#define AUTOFS_TYPE_INDIRECT 1U
#define AUTOFS_TYPE_DIRECT 2U
#define AUTOFS_TYPE_OFFSET 4U
#define autofs_ptype_expire_multi 2
#define autofs_ptype_missing_indirect 3
#define autofs_ptype_expire_indirect 4
#define autofs_ptype_missing_direct 5
#define autofs_ptype_expire_direct 6
#define AUTOFS_IOC_EXPIRE_MULTI _IOW(AUTOFS_IOCTL, AUTOFS_IOC_EXPIRE_MULTI_CMD, int)
#define AUTOFS_IOC_PROTOSUBVER _IOR(AUTOFS_IOCTL, AUTOFS_IOC_PROTOSUBVER_CMD, int)
#define AUTOFS_IOC_ASKUMOUNT _IOR(AUTOFS_IOCTL, AUTOFS_IOC_ASKUMOUNT_CMD, int)
#endif
