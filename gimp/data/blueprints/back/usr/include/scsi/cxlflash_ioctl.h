// GGHASH:VwJiWYcwpSiDGpK76jg_LWNu8hsNnJOM7xLjMDrm0L1M000027b8
#ifndef _CXLFLASH_IOCTL_H
#define _CXLFLASH_IOCTL_H 
#include <linux/types.h>
#define CXLFLASH_WWID_LEN 16
#define DK_CXLFLASH_VERSION_0 0
#define DK_CXLFLASH_ALL_PORTS_ACTIVE 0x0000000000000001ULL
#define DK_CXLFLASH_APP_CLOSE_ADAP_FD 0x0000000000000002ULL
#define DK_CXLFLASH_CONTEXT_SQ_CMD_MODE 0x0000000000000004ULL
#define DK_CXLFLASH_ATTACH_REUSE_CONTEXT 0x8000000000000000ULL
#define DK_CXLFLASH_UVIRTUAL_NEED_WRITE_SAME 0x8000000000000000ULL
#define DK_CXLFLASH_VERIFY_SENSE_LEN 18
#define DK_CXLFLASH_VERIFY_HINT_SENSE 0x8000000000000000ULL
#define DK_CXLFLASH_RECOVER_AFU_CONTEXT_RESET 0x8000000000000000ULL
#define DK_CXLFLASH_MANAGE_LUN_WWID_LEN CXLFLASH_WWID_LEN
#define DK_CXLFLASH_MANAGE_LUN_ENABLE_SUPERPIPE 0x8000000000000000ULL
#define DK_CXLFLASH_MANAGE_LUN_DISABLE_SUPERPIPE 0x4000000000000000ULL
#define DK_CXLFLASH_MANAGE_LUN_ALL_PORTS_ACCESSIBLE 0x2000000000000000ULL
#define MAX_CXLFLASH_IOCTL_SZ (sizeof(union cxlflash_ioctls))
#define CXL_MAGIC 0xCA
#define CXL_IOWR(_n,_s) _IOWR(CXL_MAGIC, _n, struct _s)
#define DK_CXLFLASH_ATTACH CXL_IOWR(0x80, dk_cxlflash_attach)
#define DK_CXLFLASH_USER_DIRECT CXL_IOWR(0x81, dk_cxlflash_udirect)
#define DK_CXLFLASH_RELEASE CXL_IOWR(0x82, dk_cxlflash_release)
#define DK_CXLFLASH_DETACH CXL_IOWR(0x83, dk_cxlflash_detach)
#define DK_CXLFLASH_VERIFY CXL_IOWR(0x84, dk_cxlflash_verify)
#define DK_CXLFLASH_RECOVER_AFU CXL_IOWR(0x85, dk_cxlflash_recover_afu)
#define DK_CXLFLASH_MANAGE_LUN CXL_IOWR(0x86, dk_cxlflash_manage_lun)
#define DK_CXLFLASH_USER_VIRTUAL CXL_IOWR(0x87, dk_cxlflash_uvirtual)
#define DK_CXLFLASH_VLUN_RESIZE CXL_IOWR(0x88, dk_cxlflash_resize)
#define DK_CXLFLASH_VLUN_CLONE CXL_IOWR(0x89, dk_cxlflash_clone)
#define HT_CXLFLASH_VERSION_0 0
#define HT_CXLFLASH_HOST_READ 0x0000000000000000ULL
#define HT_CXLFLASH_HOST_WRITE 0x0000000000000001ULL
#define HT_CXLFLASH_LUN_PROVISION_SUBCMD_CREATE_LUN 0x0001
#define HT_CXLFLASH_LUN_PROVISION_SUBCMD_DELETE_LUN 0x0002
#define HT_CXLFLASH_LUN_PROVISION_SUBCMD_QUERY_PORT 0x0003
#define HT_CXLFLASH_AFU_DEBUG_MAX_DATA_LEN 262144
#define HT_CXLFLASH_AFU_DEBUG_SUBCMD_LEN 12
#define MAX_HT_CXLFLASH_IOCTL_SZ (sizeof(union cxlflash_ht_ioctls))
#define HT_CXLFLASH_LUN_PROVISION CXL_IOWR(0xBF, ht_cxlflash_lun_provision)
#define HT_CXLFLASH_AFU_DEBUG CXL_IOWR(0xBE, ht_cxlflash_afu_debug)
#endif
