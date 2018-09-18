// GGHASH:V9KNZoIqOJXwRSWcHY7aGFOSmiCxm3TP.reuRAwWK6GU00001c85
#ifndef FSL_HYPERVISOR_H
#define FSL_HYPERVISOR_H 
#include <linux/types.h>
#define FSL_HV_IOCTL_TYPE 0xAF
#define FSL_HV_IOCTL_PARTITION_RESTART _IOWR(FSL_HV_IOCTL_TYPE, 1, struct fsl_hv_ioctl_restart)
#define FSL_HV_IOCTL_PARTITION_GET_STATUS _IOWR(FSL_HV_IOCTL_TYPE, 2, struct fsl_hv_ioctl_status)
#define FSL_HV_IOCTL_PARTITION_START _IOWR(FSL_HV_IOCTL_TYPE, 3, struct fsl_hv_ioctl_start)
#define FSL_HV_IOCTL_PARTITION_STOP _IOWR(FSL_HV_IOCTL_TYPE, 4, struct fsl_hv_ioctl_stop)
#define FSL_HV_IOCTL_MEMCPY _IOWR(FSL_HV_IOCTL_TYPE, 5, struct fsl_hv_ioctl_memcpy)
#define FSL_HV_IOCTL_DOORBELL _IOWR(FSL_HV_IOCTL_TYPE, 6, struct fsl_hv_ioctl_doorbell)
#define FSL_HV_IOCTL_GETPROP _IOWR(FSL_HV_IOCTL_TYPE, 7, struct fsl_hv_ioctl_prop)
#define FSL_HV_IOCTL_SETPROP _IOWR(FSL_HV_IOCTL_TYPE, 8, struct fsl_hv_ioctl_prop)
#endif
