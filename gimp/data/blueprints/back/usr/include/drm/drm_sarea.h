// GGHASH:V_RqfUjc43gkKtQGPxndrg9GOQ62E8qCCX2py1ieMVCo00000ade
#ifndef _DRM_SAREA_H_
#define _DRM_SAREA_H_ 
#include "drm.h"
#if defined(__cplusplus)
#endif
#if defined(__alpha__)
#define SAREA_MAX 0x2000U
#elif defined(__mips__)
#define SAREA_MAX 0x4000U
#elif defined(__ia64__)
#define SAREA_MAX 0x10000U
#else
#define SAREA_MAX 0x2000U
#endif
#define SAREA_MAX_DRAWABLES 256
#define SAREA_DRAWABLE_CLAIMED_ENTRY 0x80000000
#if defined(__cplusplus)
#endif
#endif
