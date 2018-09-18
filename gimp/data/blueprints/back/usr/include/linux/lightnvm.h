// GGHASH:VuZwvDxaDOr.GM.KSZSb5NJMX4i8wkvm_6qRQQKDw2eM0000130d
#ifndef _LINUX_LIGHTNVM_H
#define _LINUX_LIGHTNVM_H 
#include <stdio.h>
#include <sys/ioctl.h>
#define DISK_NAME_LEN 32
#include <linux/types.h>
#include <linux/ioctl.h>
#define NVM_TTYPE_NAME_MAX 48
#define NVM_TTYPE_MAX 63
#define NVM_MMTYPE_LEN 8
#define NVM_CTRL_FILE "/dev/lightnvm/control"
#define NVM_IOCTL 'L'
#define NVM_INFO _IOWR(NVM_IOCTL, NVM_INFO_CMD, struct nvm_ioctl_info)
#define NVM_GET_DEVICES _IOR(NVM_IOCTL, NVM_GET_DEVICES_CMD, struct nvm_ioctl_get_devices)
#define NVM_DEV_CREATE _IOW(NVM_IOCTL, NVM_DEV_CREATE_CMD, struct nvm_ioctl_create)
#define NVM_DEV_REMOVE _IOW(NVM_IOCTL, NVM_DEV_REMOVE_CMD, struct nvm_ioctl_remove)
#define NVM_DEV_INIT _IOW(NVM_IOCTL, NVM_DEV_INIT_CMD, struct nvm_ioctl_dev_init)
#define NVM_DEV_FACTORY _IOW(NVM_IOCTL, NVM_DEV_FACTORY_CMD, struct nvm_ioctl_dev_factory)
#define NVME_NVM_IOCTL_IO_VIO _IOWR(NVM_IOCTL, NVM_DEV_VIO_USER_CMD, struct nvm_passthru_vio)
#define NVME_NVM_IOCTL_ADMIN_VIO _IOWR(NVM_IOCTL, NVM_DEV_VIO_ADMIN_CMD, struct nvm_passthru_vio)
#define NVME_NVM_IOCTL_SUBMIT_VIO _IOWR(NVM_IOCTL, NVM_DEV_VIO_CMD, struct nvm_user_vio)
#define NVM_VERSION_MAJOR 1
#define NVM_VERSION_MINOR 0
#define NVM_VERSION_PATCHLEVEL 0
#endif
