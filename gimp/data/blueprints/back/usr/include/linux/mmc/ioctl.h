// GGHASH:V53ecRqpoABnmLvOja3OMiYY3j7k1hoLryhuGn6Wz3y4000008ed
#ifndef LINUX_MMC_IOCTL_H
#define LINUX_MMC_IOCTL_H 
#include <linux/types.h>
#define mmc_ioc_cmd_set_data(ic,ptr) ic.data_ptr = (__u64)(unsigned long) ptr
#define MMC_IOC_CMD _IOWR(MMC_BLOCK_MAJOR, 0, struct mmc_ioc_cmd)
#define MMC_IOC_MULTI_CMD _IOWR(MMC_BLOCK_MAJOR, 1, struct mmc_ioc_multi_cmd)
#define MMC_IOC_MAX_BYTES (512L * 1024)
#define MMC_IOC_MAX_CMDS 255
#endif
