// GGHASH:V9fisNFsXhnNTuAjUosadMnPITdMVJcGRwwyOYypZ9ns000006f4
#ifndef _LINUX_ASPEED_LPC_CTRL_H
#define _LINUX_ASPEED_LPC_CTRL_H 
#include <linux/ioctl.h>
#include <linux/types.h>
#define ASPEED_LPC_CTRL_WINDOW_FLASH 1
#define ASPEED_LPC_CTRL_WINDOW_MEMORY 2
#define __ASPEED_LPC_CTRL_IOCTL_MAGIC 0xb2
#define ASPEED_LPC_CTRL_IOCTL_GET_SIZE _IOWR(__ASPEED_LPC_CTRL_IOCTL_MAGIC, 0x00, struct aspeed_lpc_ctrl_mapping)
#define ASPEED_LPC_CTRL_IOCTL_MAP _IOW(__ASPEED_LPC_CTRL_IOCTL_MAGIC, 0x01, struct aspeed_lpc_ctrl_mapping)
#endif
