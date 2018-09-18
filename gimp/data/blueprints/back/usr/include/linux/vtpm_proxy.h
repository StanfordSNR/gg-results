// GGHASH:V4rCw7E01bGytyD69i5UEAUF0IjYaTduhi25ojWBSTIY000006b7
#ifndef _LINUX_VTPM_PROXY_H
#define _LINUX_VTPM_PROXY_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define VTPM_PROXY_IOC_NEW_DEV _IOWR(0xa1, 0x00, struct vtpm_proxy_new_dev)
#define TPM2_CC_SET_LOCALITY 0x20001000
#define TPM_ORD_SET_LOCALITY 0x20001000
#endif
