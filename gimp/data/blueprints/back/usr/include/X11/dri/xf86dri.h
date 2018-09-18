// GGHASH:V0uilrXqZ9vyyr6IbNnUy7Rv7av12WuRD0Ux75jsJAUE0000098d
#ifndef _XF86DRI_H_
#define _XF86DRI_H_ 
#include <xf86drm.h>
#define X_XF86DRIQueryVersion 0
#define X_XF86DRIQueryDirectRenderingCapable 1
#define X_XF86DRIOpenConnection 2
#define X_XF86DRICloseConnection 3
#define X_XF86DRIGetClientDriverName 4
#define X_XF86DRICreateContext 5
#define X_XF86DRIDestroyContext 6
#define X_XF86DRICreateDrawable 7
#define X_XF86DRIDestroyDrawable 8
#define X_XF86DRIGetDrawableInfo 9
#define X_XF86DRIGetDeviceInfo 10
#define X_XF86DRIAuthConnection 11
#define X_XF86DRIOpenFullScreen 12
#define X_XF86DRICloseFullScreen 13
#define XF86DRINumberEvents 0
#define XF86DRIClientNotLocal 0
#define XF86DRIOperationNotSupported 1
#define XF86DRINumberErrors (XF86DRIOperationNotSupported + 1)
#endif
