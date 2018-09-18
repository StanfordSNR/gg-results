// GGHASH:VG6rQq0Q8OpFnd8vxXhe.EzXl8skjpAVA98VbMxYMUk000001fe2
#ifndef __NDCTL_H__
#define __NDCTL_H__ 
#include <linux/types.h>
#define ND_SMART_HEALTH_VALID (1 << 0)
#define ND_SMART_SPARES_VALID (1 << 1)
#define ND_SMART_USED_VALID (1 << 2)
#define ND_SMART_TEMP_VALID (1 << 3)
#define ND_SMART_CTEMP_VALID (1 << 4)
#define ND_SMART_ALARM_VALID (1 << 9)
#define ND_SMART_SHUTDOWN_VALID (1 << 10)
#define ND_SMART_VENDOR_VALID (1 << 11)
#define ND_SMART_SPARE_TRIP (1 << 0)
#define ND_SMART_TEMP_TRIP (1 << 1)
#define ND_SMART_CTEMP_TRIP (1 << 2)
#define ND_SMART_NON_CRITICAL_HEALTH (1 << 0)
#define ND_SMART_CRITICAL_HEALTH (1 << 1)
#define ND_SMART_FATAL_HEALTH (1 << 2)
#define ND_IOCTL 'N'
#define ND_IOCTL_SMART _IOWR(ND_IOCTL, ND_CMD_SMART, struct nd_cmd_smart)
#define ND_IOCTL_SMART_THRESHOLD _IOWR(ND_IOCTL, ND_CMD_SMART_THRESHOLD, struct nd_cmd_smart_threshold)
#define ND_IOCTL_DIMM_FLAGS _IOWR(ND_IOCTL, ND_CMD_DIMM_FLAGS, struct nd_cmd_dimm_flags)
#define ND_IOCTL_GET_CONFIG_SIZE _IOWR(ND_IOCTL, ND_CMD_GET_CONFIG_SIZE, struct nd_cmd_get_config_size)
#define ND_IOCTL_GET_CONFIG_DATA _IOWR(ND_IOCTL, ND_CMD_GET_CONFIG_DATA, struct nd_cmd_get_config_data_hdr)
#define ND_IOCTL_SET_CONFIG_DATA _IOWR(ND_IOCTL, ND_CMD_SET_CONFIG_DATA, struct nd_cmd_set_config_hdr)
#define ND_IOCTL_VENDOR _IOWR(ND_IOCTL, ND_CMD_VENDOR, struct nd_cmd_vendor_hdr)
#define ND_IOCTL_ARS_CAP _IOWR(ND_IOCTL, ND_CMD_ARS_CAP, struct nd_cmd_ars_cap)
#define ND_IOCTL_ARS_START _IOWR(ND_IOCTL, ND_CMD_ARS_START, struct nd_cmd_ars_start)
#define ND_IOCTL_ARS_STATUS _IOWR(ND_IOCTL, ND_CMD_ARS_STATUS, struct nd_cmd_ars_status)
#define ND_IOCTL_CLEAR_ERROR _IOWR(ND_IOCTL, ND_CMD_CLEAR_ERROR, struct nd_cmd_clear_error)
#define ND_DEVICE_DIMM 1
#define ND_DEVICE_REGION_PMEM 2
#define ND_DEVICE_REGION_BLK 3
#define ND_DEVICE_NAMESPACE_IO 4
#define ND_DEVICE_NAMESPACE_PMEM 5
#define ND_DEVICE_NAMESPACE_BLK 6
#define ND_DEVICE_DAX_PMEM 7
#define NVDIMM_FAMILY_INTEL 0
#define NVDIMM_FAMILY_HPE1 1
#define NVDIMM_FAMILY_HPE2 2
#define NVDIMM_FAMILY_MSFT 3
#define ND_IOCTL_CALL _IOWR(ND_IOCTL, ND_CMD_CALL, struct nd_cmd_pkg)
#endif
