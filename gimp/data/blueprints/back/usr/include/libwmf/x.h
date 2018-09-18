// GGHASH:V9ajQdU_v_OL5EkAy9oOnj.MKv5Yj1OofEVVIfq9actI00000926
#ifndef LIBWMF_X_H
#define LIBWMF_X_H 
#include <X11/Xlib.h>
#include <X11/X.h>
#include <libwmf/types.h>
#define WMF_X_GetData(Z) ((wmf_x_t*)(((wmfAPI*)Z)->device_data))
#define WMF_X_DISPLAY_OPEN (1 << 0)
#define WMF_X_DISPLAY_CLOSE (1 << 1)
#define WMF_X_WINDOW_OPEN (1 << 2)
#define WMF_X_WINDOW_CLOSE (1 << 3)
#define WMF_X_PIXMAP_OPEN (1 << 4)
#define WMF_X_PIXMAP_CLOSE (1 << 5)
#define WMF_X_CMAP_DESTROY (1 << 7)
#ifdef __cplusplus
#endif
#ifdef __cplusplus
#endif
#endif
