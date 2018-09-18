// GGHASH:V5Qs5B6NBwKuaAVP87VqdO23MlU8v1rXzTKw9aIZW2mk000009d3
#ifndef LIBWMF_FIG_H
#define LIBWMF_FIG_H 
#include <stdio.h>
#include <libwmf/types.h>
#ifdef __cplusplus
#endif
#define WMF_FIG_LANDSCAPE (1 << 0)
#define WMF_FIG_IMAGE_PNG (2)
#define WMF_FIG_IMAGE_JPEG (6)
#define WMF_FIG_ImageIsEPS(Z) (((Z)->flags & WMF_FIG_IMAGE_JPEG) == 0)
#define WMF_FIG_ImageIsPNG(Z) (((Z)->flags & WMF_FIG_IMAGE_JPEG) == WMF_FIG_IMAGE_PNG )
#define WMF_FIG_ImageIsJPG(Z) (((Z)->flags & WMF_FIG_IMAGE_JPEG) == WMF_FIG_IMAGE_JPEG)
#define WMF_FIG_SUPPORTS_PNG (1 << 3)
#define WMF_FIG_SUPPORTS_JPEG (1 << 4)
#define WMF_FIG_MAXPECT (1 << 5)
#define WMF_FIG_NO_MARGINS (1 << 6)
#define WMF_FIG_GetData(Z) ((wmf_fig_t*)((Z)->device_data))
#ifdef __cplusplus
#endif
#endif
