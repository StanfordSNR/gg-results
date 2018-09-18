// GGHASH:VeaTGNloTOThrXaloPTur9NNKenHTPm7S9IO6H6IFrbs00000288
#ifndef LINUX_ATM_ENI_H
#define LINUX_ATM_ENI_H 
#include <linux/atmioc.h>
#define ENI_MEMDUMP _IOW('a',ATMIOC_SARPRV,struct atmif_sioc)
#define ENI_SETMULT _IOW('a',ATMIOC_SARPRV+7,struct atmif_sioc)
#endif
