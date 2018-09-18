// GGHASH:VzcAY6lt.MC10om3juuji4frYd4lRDtqcIajrnDysEyM0000450a
#ifndef __UBI_USER_H__
#define __UBI_USER_H__ 
#include <linux/types.h>
#define UBI_VOL_NUM_AUTO (-1)
#define UBI_DEV_NUM_AUTO (-1)
#define UBI_MAX_VOLUME_NAME 127
#define UBI_IOC_MAGIC 'o'
#define UBI_IOCMKVOL _IOW(UBI_IOC_MAGIC, 0, struct ubi_mkvol_req)
#define UBI_IOCRMVOL _IOW(UBI_IOC_MAGIC, 1, __s32)
#define UBI_IOCRSVOL _IOW(UBI_IOC_MAGIC, 2, struct ubi_rsvol_req)
#define UBI_IOCRNVOL _IOW(UBI_IOC_MAGIC, 3, struct ubi_rnvol_req)
#define UBI_CTRL_IOC_MAGIC 'o'
#define UBI_IOCATT _IOW(UBI_CTRL_IOC_MAGIC, 64, struct ubi_attach_req)
#define UBI_IOCDET _IOW(UBI_CTRL_IOC_MAGIC, 65, __s32)
#define UBI_VOL_IOC_MAGIC 'O'
#define UBI_IOCVOLUP _IOW(UBI_VOL_IOC_MAGIC, 0, __s64)
#define UBI_IOCEBER _IOW(UBI_VOL_IOC_MAGIC, 1, __s32)
#define UBI_IOCEBCH _IOW(UBI_VOL_IOC_MAGIC, 2, __s32)
#define UBI_IOCEBMAP _IOW(UBI_VOL_IOC_MAGIC, 3, struct ubi_map_req)
#define UBI_IOCEBUNMAP _IOW(UBI_VOL_IOC_MAGIC, 4, __s32)
#define UBI_IOCEBISMAP _IOR(UBI_VOL_IOC_MAGIC, 5, __s32)
#define UBI_IOCSETVOLPROP _IOW(UBI_VOL_IOC_MAGIC, 6, struct ubi_set_vol_prop_req)
#define UBI_IOCVOLCRBLK _IOW(UBI_VOL_IOC_MAGIC, 7, struct ubi_blkcreate_req)
#define UBI_IOCVOLRMBLK _IO(UBI_VOL_IOC_MAGIC, 8)
#define MAX_UBI_MTD_NAME_LEN 127
#define UBI_MAX_RNVOL 32
#endif
