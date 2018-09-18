// GGHASH:Vrc79ecmivGZRLfNEToKoHjGTx2TMnDECh.fLe471GEg00000a4d
#ifndef __SIS_DRM_H__
#define __SIS_DRM_H__ 
#include "drm.h"
#if defined(__cplusplus)
#endif
#define NOT_USED_0_3 
#define DRM_SIS_FB_ALLOC 0x04
#define DRM_SIS_FB_FREE 0x05
#define NOT_USED_6_12 
#define DRM_SIS_AGP_INIT 0x13
#define DRM_SIS_AGP_ALLOC 0x14
#define DRM_SIS_AGP_FREE 0x15
#define DRM_SIS_FB_INIT 0x16
#define DRM_IOCTL_SIS_FB_ALLOC DRM_IOWR(DRM_COMMAND_BASE + DRM_SIS_FB_ALLOC, drm_sis_mem_t)
#define DRM_IOCTL_SIS_FB_FREE DRM_IOW( DRM_COMMAND_BASE + DRM_SIS_FB_FREE, drm_sis_mem_t)
#define DRM_IOCTL_SIS_AGP_INIT DRM_IOWR(DRM_COMMAND_BASE + DRM_SIS_AGP_INIT, drm_sis_agp_t)
#define DRM_IOCTL_SIS_AGP_ALLOC DRM_IOWR(DRM_COMMAND_BASE + DRM_SIS_AGP_ALLOC, drm_sis_mem_t)
#define DRM_IOCTL_SIS_AGP_FREE DRM_IOW( DRM_COMMAND_BASE + DRM_SIS_AGP_FREE, drm_sis_mem_t)
#define DRM_IOCTL_SIS_FB_INIT DRM_IOW( DRM_COMMAND_BASE + DRM_SIS_FB_INIT, drm_sis_fb_t)
#if defined(__cplusplus)
#endif
#endif
