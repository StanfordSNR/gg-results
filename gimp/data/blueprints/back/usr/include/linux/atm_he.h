// GGHASH:Vv5lN_uv8CNRm2pOoDoTBsXD8cC3pX07YRdsJzU6RK8k00000196
#ifndef LINUX_ATM_HE_H
#define LINUX_ATM_HE_H 
#include <linux/atmioc.h>
#define HE_GET_REG _IOW('a', ATMIOC_SARPRV, struct atmif_sioc)
#define HE_REGTYPE_PCI 1
#define HE_REGTYPE_RCM 2
#define HE_REGTYPE_TCM 3
#define HE_REGTYPE_MBOX 4
#endif
