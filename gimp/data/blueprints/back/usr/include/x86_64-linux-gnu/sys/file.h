// GGHASH:VV28ZDmD8xQRdp2Rcr55ADh4pTLStDOArwBDz8V.PviY000006b9
#ifndef _SYS_FILE_H
#define _SYS_FILE_H 1
#include <features.h>
#ifndef _FCNTL_H
# include <fcntl.h>
#endif
#ifndef L_SET
#define L_SET 0
#define L_INCR 1
#define L_XTND 2
#endif
#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_UN 8
#define __LOCK_ATOMIC 16
#define LOCK_NB 4
#endif
