// GGHASH:VeS9_EBEOhbjGkc1Anw_PiQpitIS0_1kXr._OZvCCZCc000002b9
#ifndef _UDF_FS_I_H
#define _UDF_FS_I_H 1
#define UDF_GETEASIZE _IOR('l', 0x40, int)
#define UDF_GETEABLOCK _IOR('l', 0x41, void *)
#define UDF_GETVOLIDENT _IOR('l', 0x42, void *)
#define UDF_RELOCATE_BLOCKS _IOWR('l', 0x43, long)
#endif
