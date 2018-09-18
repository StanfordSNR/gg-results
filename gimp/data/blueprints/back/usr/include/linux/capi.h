// GGHASH:VK14hsyXJwWB0rfAuQ8pYvxHpVvw0Y9jRDaZzqHiJJLk00000c34
#ifndef __LINUX_CAPI_H__
#define __LINUX_CAPI_H__ 
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/kernelcapi.h>
#define CAPI_REGISTER _IOW('C',0x01,struct capi_register_params)
#define CAPI_MANUFACTURER_LEN 64
#define CAPI_GET_MANUFACTURER _IOWR('C',0x06,int)
#define CAPI_GET_VERSION _IOWR('C',0x07,struct capi_version)
#define CAPI_SERIAL_LEN 8
#define CAPI_GET_SERIAL _IOWR('C',0x08,int)
#define CAPI_GET_PROFILE _IOWR('C',0x09,struct capi_profile)
#define CAPI_MANUFACTURER_CMD _IOWR('C',0x20, struct capi_manufacturer_cmd)
#define CAPI_GET_ERRCODE _IOR('C',0x21, __u16)
#define CAPI_INSTALLED _IOR('C',0x22, __u16)
#define CAPIFLAG_HIGHJACKING 0x0001
#define CAPI_GET_FLAGS _IOR('C',0x23, unsigned)
#define CAPI_SET_FLAGS _IOR('C',0x24, unsigned)
#define CAPI_CLR_FLAGS _IOR('C',0x25, unsigned)
#define CAPI_NCCI_OPENCOUNT _IOR('C',0x26, unsigned)
#define CAPI_NCCI_GETUNIT _IOR('C',0x27, unsigned)
#endif
