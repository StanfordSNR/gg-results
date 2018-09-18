// GGHASH:VusdHGGM9Zb8JJNUeVPj7iPfABqNWHDGaTP8gLhtb45s00000f64
#ifndef _AGP_H
#define _AGP_H 
#define AGPIOC_BASE 'A'
#define AGPIOC_INFO _IOR (AGPIOC_BASE, 0, struct agp_info*)
#define AGPIOC_ACQUIRE _IO (AGPIOC_BASE, 1)
#define AGPIOC_RELEASE _IO (AGPIOC_BASE, 2)
#define AGPIOC_SETUP _IOW (AGPIOC_BASE, 3, struct agp_setup*)
#define AGPIOC_RESERVE _IOW (AGPIOC_BASE, 4, struct agp_region*)
#define AGPIOC_PROTECT _IOW (AGPIOC_BASE, 5, struct agp_region*)
#define AGPIOC_ALLOCATE _IOWR(AGPIOC_BASE, 6, struct agp_allocate*)
#define AGPIOC_DEALLOCATE _IOW (AGPIOC_BASE, 7, int)
#define AGPIOC_BIND _IOW (AGPIOC_BASE, 8, struct agp_bind*)
#define AGPIOC_UNBIND _IOW (AGPIOC_BASE, 9, struct agp_unbind*)
#define AGPIOC_CHIPSET_FLUSH _IO (AGPIOC_BASE, 10)
#define AGP_DEVICE "/dev/agpgart"
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#include <linux/types.h>
#include <stdlib.h>
#endif
