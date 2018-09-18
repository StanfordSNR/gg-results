// GGHASH:Vq0wI5B.Ow7qwQomZ4A9cX5Z_zAC7T3Ux1RLYv_uSESs000004bc
#ifndef DRM_ARMADA_IOCTL_H
#define DRM_ARMADA_IOCTL_H 
#include "drm.h"
#if defined(__cplusplus)
#endif
#define DRM_ARMADA_GEM_CREATE 0x00
#define DRM_ARMADA_GEM_MMAP 0x02
#define DRM_ARMADA_GEM_PWRITE 0x03
#define ARMADA_IOCTL(dir,name,str) DRM_ ##dir(DRM_COMMAND_BASE + DRM_ARMADA_ ##name, struct drm_armada_ ##str)
#define DRM_IOCTL_ARMADA_GEM_CREATE ARMADA_IOCTL(IOWR, GEM_CREATE, gem_create)
#define DRM_IOCTL_ARMADA_GEM_MMAP ARMADA_IOCTL(IOWR, GEM_MMAP, gem_mmap)
#define DRM_IOCTL_ARMADA_GEM_PWRITE ARMADA_IOCTL(IOW, GEM_PWRITE, gem_pwrite)
#if defined(__cplusplus)
#endif
#endif
