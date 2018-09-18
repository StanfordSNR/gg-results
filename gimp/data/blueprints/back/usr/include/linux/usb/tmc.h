// GGHASH:V75UJ2vVAO3BVp3nhaBrKrAlTJuS_7hXMU4MByTl91LI00000ae1
#ifndef __LINUX_USB_TMC_H
#define __LINUX_USB_TMC_H 
#define USBTMC_STATUS_SUCCESS 0x01
#define USBTMC_STATUS_PENDING 0x02
#define USBTMC_STATUS_FAILED 0x80
#define USBTMC_STATUS_TRANSFER_NOT_IN_PROGRESS 0x81
#define USBTMC_STATUS_SPLIT_NOT_IN_PROGRESS 0x82
#define USBTMC_STATUS_SPLIT_IN_PROGRESS 0x83
#define USBTMC_REQUEST_INITIATE_ABORT_BULK_OUT 1
#define USBTMC_REQUEST_CHECK_ABORT_BULK_OUT_STATUS 2
#define USBTMC_REQUEST_INITIATE_ABORT_BULK_IN 3
#define USBTMC_REQUEST_CHECK_ABORT_BULK_IN_STATUS 4
#define USBTMC_REQUEST_INITIATE_CLEAR 5
#define USBTMC_REQUEST_CHECK_CLEAR_STATUS 6
#define USBTMC_REQUEST_GET_CAPABILITIES 7
#define USBTMC_REQUEST_INDICATOR_PULSE 64
#define USBTMC488_REQUEST_READ_STATUS_BYTE 128
#define USBTMC488_REQUEST_REN_CONTROL 160
#define USBTMC488_REQUEST_GOTO_LOCAL 161
#define USBTMC488_REQUEST_LOCAL_LOCKOUT 162
#define USBTMC_IOC_NR 91
#define USBTMC_IOCTL_INDICATOR_PULSE _IO(USBTMC_IOC_NR, 1)
#define USBTMC_IOCTL_CLEAR _IO(USBTMC_IOC_NR, 2)
#define USBTMC_IOCTL_ABORT_BULK_OUT _IO(USBTMC_IOC_NR, 3)
#define USBTMC_IOCTL_ABORT_BULK_IN _IO(USBTMC_IOC_NR, 4)
#define USBTMC_IOCTL_CLEAR_OUT_HALT _IO(USBTMC_IOC_NR, 6)
#define USBTMC_IOCTL_CLEAR_IN_HALT _IO(USBTMC_IOC_NR, 7)
#define USBTMC488_IOCTL_GET_CAPS _IOR(USBTMC_IOC_NR, 17, unsigned char)
#define USBTMC488_IOCTL_READ_STB _IOR(USBTMC_IOC_NR, 18, unsigned char)
#define USBTMC488_IOCTL_REN_CONTROL _IOW(USBTMC_IOC_NR, 19, unsigned char)
#define USBTMC488_IOCTL_GOTO_LOCAL _IO(USBTMC_IOC_NR, 20)
#define USBTMC488_IOCTL_LOCAL_LOCKOUT _IO(USBTMC_IOC_NR, 21)
#define USBTMC488_CAPABILITY_TRIGGER 1
#define USBTMC488_CAPABILITY_SIMPLE 2
#define USBTMC488_CAPABILITY_REN_CONTROL 2
#define USBTMC488_CAPABILITY_GOTO_LOCAL 2
#define USBTMC488_CAPABILITY_LOCAL_LOCKOUT 2
#define USBTMC488_CAPABILITY_488_DOT_2 4
#define USBTMC488_CAPABILITY_DT1 16
#define USBTMC488_CAPABILITY_RL1 32
#define USBTMC488_CAPABILITY_SR1 64
#define USBTMC488_CAPABILITY_FULL_SCPI 128
#endif