// GGHASH:VyNNG1mD5KGwnDQkbXEMLzPDyW91ylvV0ujv6Rq79rPk0000075e
#ifndef _LINUX_WMI_H
#define _LINUX_WMI_H 
#include <linux/ioctl.h>
#include <linux/types.h>
#define WMI_IOC 'W'
#define CLASS_TOKEN_READ 0
#define CLASS_TOKEN_WRITE 1
#define SELECT_TOKEN_STD 0
#define SELECT_TOKEN_BAT 1
#define SELECT_TOKEN_AC 2
#define CLASS_FLASH_INTERFACE 7
#define SELECT_FLASH_INTERFACE 3
#define CLASS_ADMIN_PROP 10
#define SELECT_ADMIN_PROP 3
#define CLASS_INFO 17
#define SELECT_RFKILL 11
#define SELECT_APP_REGISTRATION 3
#define SELECT_DOCK 22
#define CAPSULE_EN_TOKEN 0x0461
#define CAPSULE_DIS_TOKEN 0x0462
#define WSMT_EN_TOKEN 0x04EC
#define WSMT_DIS_TOKEN 0x04ED
#define DELL_WMI_SMBIOS_CMD _IOWR(WMI_IOC, 0, struct dell_wmi_smbios_buffer)
#endif
