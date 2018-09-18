// GGHASH:V5dX93yats52zWc4xG9VkSqGKwLvm6r4Q.PlHKN8MK.s00000767
#ifndef __HSI_CHAR_H
#define __HSI_CHAR_H 
#include <linux/types.h>
#define HSI_CHAR_MAGIC 'k'
#define HSC_IOW(num,dtype) _IOW(HSI_CHAR_MAGIC, num, dtype)
#define HSC_IOR(num,dtype) _IOR(HSI_CHAR_MAGIC, num, dtype)
#define HSC_IOWR(num,dtype) _IOWR(HSI_CHAR_MAGIC, num, dtype)
#define HSC_IO(num) _IO(HSI_CHAR_MAGIC, num)
#define HSC_RESET HSC_IO(16)
#define HSC_SET_PM HSC_IO(17)
#define HSC_SEND_BREAK HSC_IO(18)
#define HSC_SET_RX HSC_IOW(19, struct hsc_rx_config)
#define HSC_GET_RX HSC_IOW(20, struct hsc_rx_config)
#define HSC_SET_TX HSC_IOW(21, struct hsc_tx_config)
#define HSC_GET_TX HSC_IOW(22, struct hsc_tx_config)
#define HSC_PM_DISABLE 0
#define HSC_PM_ENABLE 1
#define HSC_MODE_STREAM 1
#define HSC_MODE_FRAME 2
#define HSC_FLOW_SYNC 0
#define HSC_ARB_RR 0
#define HSC_ARB_PRIO 1
#endif
