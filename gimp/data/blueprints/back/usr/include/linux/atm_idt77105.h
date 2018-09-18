// GGHASH:VDHpEvlNj4hA4h_XehDDHiezNSpAQ3Uyf6WWSyF71QGU000003bb
#ifndef LINUX_ATM_IDT77105_H
#define LINUX_ATM_IDT77105_H 
#include <linux/types.h>
#include <linux/atmioc.h>
#include <linux/atmdev.h>
#define IDT77105_GETSTAT _IOW('a',ATMIOC_PHYPRV+2,struct atmif_sioc)
#define IDT77105_GETSTATZ _IOW('a',ATMIOC_PHYPRV+3,struct atmif_sioc)
#endif
