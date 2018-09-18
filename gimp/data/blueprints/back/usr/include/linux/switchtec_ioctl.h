// GGHASH:VR.3trsy8gsmFMJPtKR9HI7k38_rUC8RWHX5MtSDwIgQ00001171
#ifndef _LINUX_SWITCHTEC_IOCTL_H
#define _LINUX_SWITCHTEC_IOCTL_H 
#include <linux/types.h>
#define SWITCHTEC_IOCTL_PART_CFG0 0
#define SWITCHTEC_IOCTL_PART_CFG1 1
#define SWITCHTEC_IOCTL_PART_IMG0 2
#define SWITCHTEC_IOCTL_PART_IMG1 3
#define SWITCHTEC_IOCTL_PART_NVLOG 4
#define SWITCHTEC_IOCTL_PART_VENDOR0 5
#define SWITCHTEC_IOCTL_PART_VENDOR1 6
#define SWITCHTEC_IOCTL_PART_VENDOR2 7
#define SWITCHTEC_IOCTL_PART_VENDOR3 8
#define SWITCHTEC_IOCTL_PART_VENDOR4 9
#define SWITCHTEC_IOCTL_PART_VENDOR5 10
#define SWITCHTEC_IOCTL_PART_VENDOR6 11
#define SWITCHTEC_IOCTL_PART_VENDOR7 12
#define SWITCHTEC_IOCTL_NUM_PARTITIONS 13
#define SWITCHTEC_IOCTL_PART_ACTIVE 1
#define SWITCHTEC_IOCTL_PART_RUNNING 2
#define SWITCHTEC_IOCTL_EVENT_STACK_ERROR 0
#define SWITCHTEC_IOCTL_EVENT_PPU_ERROR 1
#define SWITCHTEC_IOCTL_EVENT_ISP_ERROR 2
#define SWITCHTEC_IOCTL_EVENT_SYS_RESET 3
#define SWITCHTEC_IOCTL_EVENT_FW_EXC 4
#define SWITCHTEC_IOCTL_EVENT_FW_NMI 5
#define SWITCHTEC_IOCTL_EVENT_FW_NON_FATAL 6
#define SWITCHTEC_IOCTL_EVENT_FW_FATAL 7
#define SWITCHTEC_IOCTL_EVENT_TWI_MRPC_COMP 8
#define SWITCHTEC_IOCTL_EVENT_TWI_MRPC_COMP_ASYNC 9
#define SWITCHTEC_IOCTL_EVENT_CLI_MRPC_COMP 10
#define SWITCHTEC_IOCTL_EVENT_CLI_MRPC_COMP_ASYNC 11
#define SWITCHTEC_IOCTL_EVENT_GPIO_INT 12
#define SWITCHTEC_IOCTL_EVENT_PART_RESET 13
#define SWITCHTEC_IOCTL_EVENT_MRPC_COMP 14
#define SWITCHTEC_IOCTL_EVENT_MRPC_COMP_ASYNC 15
#define SWITCHTEC_IOCTL_EVENT_DYN_PART_BIND_COMP 16
#define SWITCHTEC_IOCTL_EVENT_AER_IN_P2P 17
#define SWITCHTEC_IOCTL_EVENT_AER_IN_VEP 18
#define SWITCHTEC_IOCTL_EVENT_DPC 19
#define SWITCHTEC_IOCTL_EVENT_CTS 20
#define SWITCHTEC_IOCTL_EVENT_HOTPLUG 21
#define SWITCHTEC_IOCTL_EVENT_IER 22
#define SWITCHTEC_IOCTL_EVENT_THRESH 23
#define SWITCHTEC_IOCTL_EVENT_POWER_MGMT 24
#define SWITCHTEC_IOCTL_EVENT_TLP_THROTTLING 25
#define SWITCHTEC_IOCTL_EVENT_FORCE_SPEED 26
#define SWITCHTEC_IOCTL_EVENT_CREDIT_TIMEOUT 27
#define SWITCHTEC_IOCTL_EVENT_LINK_STATE 28
#define SWITCHTEC_IOCTL_MAX_EVENTS 29
#define SWITCHTEC_IOCTL_EVENT_LOCAL_PART_IDX -1
#define SWITCHTEC_IOCTL_EVENT_IDX_ALL -2
#define SWITCHTEC_IOCTL_EVENT_FLAG_CLEAR (1 << 0)
#define SWITCHTEC_IOCTL_EVENT_FLAG_EN_POLL (1 << 1)
#define SWITCHTEC_IOCTL_EVENT_FLAG_EN_LOG (1 << 2)
#define SWITCHTEC_IOCTL_EVENT_FLAG_EN_CLI (1 << 3)
#define SWITCHTEC_IOCTL_EVENT_FLAG_EN_FATAL (1 << 4)
#define SWITCHTEC_IOCTL_EVENT_FLAG_DIS_POLL (1 << 5)
#define SWITCHTEC_IOCTL_EVENT_FLAG_DIS_LOG (1 << 6)
#define SWITCHTEC_IOCTL_EVENT_FLAG_DIS_CLI (1 << 7)
#define SWITCHTEC_IOCTL_EVENT_FLAG_DIS_FATAL (1 << 8)
#define SWITCHTEC_IOCTL_EVENT_FLAG_UNUSED (~0x1ff)
#define SWITCHTEC_IOCTL_PFF_VEP 100
#define SWITCHTEC_IOCTL_FLASH_INFO _IOR('W', 0x40, struct switchtec_ioctl_flash_info)
#define SWITCHTEC_IOCTL_FLASH_PART_INFO _IOWR('W', 0x41, struct switchtec_ioctl_flash_part_info)
#define SWITCHTEC_IOCTL_EVENT_SUMMARY _IOR('W', 0x42, struct switchtec_ioctl_event_summary)
#define SWITCHTEC_IOCTL_EVENT_CTL _IOWR('W', 0x43, struct switchtec_ioctl_event_ctl)
#define SWITCHTEC_IOCTL_PFF_TO_PORT _IOWR('W', 0x44, struct switchtec_ioctl_pff_port)
#define SWITCHTEC_IOCTL_PORT_TO_PFF _IOWR('W', 0x45, struct switchtec_ioctl_pff_port)
#endif