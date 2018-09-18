// GGHASH:V5_JdQzi1akQbUOtzdTIm7YpkC6tFO6hRIrnEOck8vmo00000604
#ifndef LINUX_ATM_ZATM_H
#define LINUX_ATM_ZATM_H 
#include <linux/atmapi.h>
#include <linux/atmioc.h>
#define ZATM_GETPOOL _IOW('a',ATMIOC_SARPRV+1,struct atmif_sioc)
#define ZATM_GETPOOLZ _IOW('a',ATMIOC_SARPRV+2,struct atmif_sioc)
#define ZATM_SETPOOL _IOW('a',ATMIOC_SARPRV+3,struct atmif_sioc)
#define ZATM_OAM_POOL 0
#define ZATM_AAL0_POOL 1
#define ZATM_AAL5_POOL_BASE 2
#define ZATM_LAST_POOL ZATM_AAL5_POOL_BASE+10
#define ZATM_TIMER_HISTORY_SIZE 16
#endif
