// GGHASH:Vao9nBTOZmsIEdcWiJFxxDjmiotBMNGPcsEhRCP03g3I000007b3
#ifndef _VGEM_DRM_H_
#define _VGEM_DRM_H_ 
#include "drm.h"
#if defined(__cplusplus)
#endif
#define DRM_VGEM_FENCE_ATTACH 0x1
#define DRM_VGEM_FENCE_SIGNAL 0x2
#define DRM_IOCTL_VGEM_FENCE_ATTACH DRM_IOWR( DRM_COMMAND_BASE + DRM_VGEM_FENCE_ATTACH, struct drm_vgem_fence_attach)
#define DRM_IOCTL_VGEM_FENCE_SIGNAL DRM_IOW( DRM_COMMAND_BASE + DRM_VGEM_FENCE_SIGNAL, struct drm_vgem_fence_signal)
#define VGEM_FENCE_WRITE 0x1
#if defined(__cplusplus)
#endif
#endif
