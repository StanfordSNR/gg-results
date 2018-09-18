// GGHASH:VoQj5YVgOsGQiyaBzwnjpA7YHdEhgIkI.fkjUpmEgbSU00002c6a
#ifndef __AUFS_TYPE_H__
#define __AUFS_TYPE_H__ 
#define AUFS_NAME "aufs"
#include <stdint.h>
#include <sys/types.h>
#include <linux/limits.h>
#define AUFS_VERSION "4.15-20180219"
#define AUFS_SUPER_MAGIC ('a' << 24 | 'u' << 16 | 'f' << 8 | 's')
#ifdef CONFIG_AUFS_BRANCH_MAX_127
#define AUFS_BRANCH_MAX 127
#else
#ifdef CONFIG_AUFS_BRANCH_MAX_511
#define AUFS_BRANCH_MAX 511
#elif defined(CONFIG_AUFS_BRANCH_MAX_1023)
#define AUFS_BRANCH_MAX 1023
#elif defined(CONFIG_AUFS_BRANCH_MAX_32767)
#define AUFS_BRANCH_MAX 32767
#endif
#endif
#define AUFS_FSTYPE AUFS_NAME
#define AUFS_ROOT_INO 2
#define AUFS_FIRST_INO 11
#define AUFS_WH_PFX ".wh."
#define AUFS_WH_PFX_LEN ((int)sizeof(AUFS_WH_PFX) - 1)
#define AUFS_WH_TMP_LEN 4
#define AUFS_MAX_NAMELEN (NAME_MAX - AUFS_WH_PFX_LEN * 2 - 1 - AUFS_WH_TMP_LEN)
#define AUFS_XINO_FNAME "." AUFS_NAME ".xino"
#define AUFS_XINO_DEFPATH "/tmp/" AUFS_XINO_FNAME
#define AUFS_XINO_DEF_SEC 30
#define AUFS_XINO_DEF_TRUNC 45
#define AUFS_DIRWH_DEF 3
#define AUFS_RDCACHE_DEF 10
#define AUFS_RDCACHE_MAX 3600
#define AUFS_RDBLK_DEF 512
#define AUFS_RDHASH_DEF 32
#define AUFS_WKQ_NAME AUFS_NAME "d"
#define AUFS_MFS_DEF_SEC 30
#define AUFS_MFS_MAX_SEC 3600
#define AUFS_FHSM_CACHE_DEF_SEC 30
#define AUFS_PLINK_WARN 50
#define AUFS_PLINK_MAINT_NAME "plink_maint"
#define AUFS_PLINK_MAINT_DIR "fs/" AUFS_NAME
#define AUFS_PLINK_MAINT_PATH AUFS_PLINK_MAINT_DIR "/" AUFS_PLINK_MAINT_NAME
#define AUFS_DR_INFO_PFX AUFS_WH_PFX ".dr."
#define AUFS_DR_BRHINO_NAME AUFS_WH_PFX "hino"
#define AUFS_WH_DR_INFO_PFX AUFS_WH_PFX AUFS_DR_INFO_PFX
#define AUFS_WH_DR_BRHINO AUFS_WH_PFX AUFS_DR_BRHINO_NAME
#define AUFS_DIROPQ_NAME AUFS_WH_PFX ".opq"
#define AUFS_WH_DIROPQ AUFS_WH_PFX AUFS_DIROPQ_NAME
#define AUFS_BASE_NAME AUFS_WH_PFX AUFS_NAME
#define AUFS_PLINKDIR_NAME AUFS_WH_PFX "plnk"
#define AUFS_ORPHDIR_NAME AUFS_WH_PFX "orph"
#define AUFS_WH_BASE AUFS_WH_PFX AUFS_BASE_NAME
#define AUFS_WH_PLINKDIR AUFS_WH_PFX AUFS_PLINKDIR_NAME
#define AUFS_WH_ORPHDIR AUFS_WH_PFX AUFS_ORPHDIR_NAME
#define AUFS_BRPERM_RW "rw"
#define AUFS_BRPERM_RO "ro"
#define AUFS_BRPERM_RR "rr"
#define AUFS_BRATTR_COO_REG "coo_reg"
#define AUFS_BRATTR_COO_ALL "coo_all"
#define AUFS_BRATTR_FHSM "fhsm"
#define AUFS_BRATTR_UNPIN "unpin"
#define AUFS_BRATTR_ICEX "icex"
#define AUFS_BRATTR_ICEX_SEC "icexsec"
#define AUFS_BRATTR_ICEX_SYS "icexsys"
#define AUFS_BRATTR_ICEX_TR "icextr"
#define AUFS_BRATTR_ICEX_USR "icexusr"
#define AUFS_BRATTR_ICEX_OTH "icexoth"
#define AUFS_BRRATTR_WH "wh"
#define AUFS_BRWATTR_NLWH "nolwh"
#define AUFS_BRWATTR_MOO "moo"
#define AuBrPerm_RW 1
#define AuBrPerm_RO (1 << 1)
#define AuBrPerm_RR (1 << 2)
#define AuBrPerm_Mask (AuBrPerm_RW | AuBrPerm_RO | AuBrPerm_RR)
#define AuBrAttr_COO_REG (1 << 3)
#define AuBrAttr_COO_ALL (1 << 4)
#define AuBrAttr_COO_Mask (AuBrAttr_COO_REG | AuBrAttr_COO_ALL)
#define AuBrAttr_FHSM (1 << 5)
#define AuBrAttr_UNPIN (1 << 6)
#define AuBrAttr_ICEX_SEC (1 << 7)
#define AuBrAttr_ICEX_SYS (1 << 8)
#define AuBrAttr_ICEX_TR (1 << 9)
#define AuBrAttr_ICEX_USR (1 << 10)
#define AuBrAttr_ICEX_OTH (1 << 11)
#define AuBrAttr_ICEX (AuBrAttr_ICEX_SEC | AuBrAttr_ICEX_SYS | AuBrAttr_ICEX_TR | AuBrAttr_ICEX_USR | AuBrAttr_ICEX_OTH)
#define AuBrRAttr_WH (1 << 12)
#define AuBrRAttr_Mask AuBrRAttr_WH
#define AuBrWAttr_NoLinkWH (1 << 13)
#define AuBrWAttr_MOO (1 << 14)
#define AuBrWAttr_Mask (AuBrWAttr_NoLinkWH | AuBrWAttr_MOO)
#define AuBrAttr_CMOO_Mask (AuBrAttr_COO_Mask | AuBrWAttr_MOO)
#define AuBrPermStrSz sizeof(AUFS_BRPERM_RW "+" AUFS_BRATTR_COO_REG "+" AUFS_BRATTR_FHSM "+" AUFS_BRATTR_UNPIN "+" AUFS_BRATTR_ICEX_SEC "+" AUFS_BRATTR_ICEX_SYS "+" AUFS_BRATTR_ICEX_USR "+" AUFS_BRATTR_ICEX_OTH "+" AUFS_BRWATTR_NLWH)
#ifndef ALIGN
#define ALIGN(x,a) __ALIGN_MASK(x, (typeof(x))(a)-1)
#define __ALIGN_MASK(x,mask) (((x)+(mask))&~(mask))
#endif
#ifndef __aligned
#define __aligned(x) __attribute__((aligned(x)))
#endif
#define AUFS_DRINFO_MAGIC_V1 ('a' << 24 | 'd' << 16 | 'r' << 8 | 0x01)
#define AUFS_DRINFO_MAGIC_V2 ('a' << 24 | 'd' << 16 | 'r' << 8 | 0x02)
#define AUFS_MVDOWN_DMSG 1
#define AUFS_MVDOWN_OWLOWER (1 << 1)
#define AUFS_MVDOWN_KUPPER (1 << 2)
#define AUFS_MVDOWN_ROLOWER (1 << 3)
#define AUFS_MVDOWN_ROLOWER_R (1 << 4)
#define AUFS_MVDOWN_ROUPPER (1 << 5)
#define AUFS_MVDOWN_ROUPPER_R (1 << 6)
#define AUFS_MVDOWN_BRID_UPPER (1 << 7)
#define AUFS_MVDOWN_BRID_LOWER (1 << 8)
#define AUFS_MVDOWN_FHSM_LOWER (1 << 9)
#define AUFS_MVDOWN_STFS (1 << 10)
#define AUFS_MVDOWN_STFS_FAILED (1 << 11)
#define AUFS_MVDOWN_BOTTOM (1 << 12)
#define AuCtlType 'A'
#define AUFS_CTL_RDU _IOWR(AuCtlType, AuCtl_RDU, struct aufs_rdu)
#define AUFS_CTL_RDU_INO _IOWR(AuCtlType, AuCtl_RDU_INO, struct aufs_rdu)
#define AUFS_CTL_WBR_FD _IOW(AuCtlType, AuCtl_WBR_FD, struct aufs_wbr_fd)
#define AUFS_CTL_IBUSY _IOWR(AuCtlType, AuCtl_IBUSY, struct aufs_ibusy)
#define AUFS_CTL_MVDOWN _IOWR(AuCtlType, AuCtl_MVDOWN, struct aufs_mvdown)
#define AUFS_CTL_BRINFO _IOW(AuCtlType, AuCtl_BR, union aufs_brinfo)
#define AUFS_CTL_FHSM_FD _IOW(AuCtlType, AuCtl_FHSM_FD, int)
#endif
