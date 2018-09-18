// GGHASH:VVdUWjy09k65zSQcRCunPRw3ozWFgHafhI6pNLvv692w00000930
#ifndef LIBWMF_GD_H
#define LIBWMF_GD_H 
#include <libwmf/types.h>
#ifdef __cplusplus
#endif
#define WMF_GD_SUPPORTS_PNG (1 << 0)
#define WMF_GD_SUPPORTS_JPEG (1 << 1)
#define WMF_GD_OUTPUT_FILE (1 << 16)
#define WMF_GD_OUTPUT_MEMORY (1 << 17)
#define WMF_GD_OWN_BUFFER (1 << 18)
#define WMF_GD_GetData(Z) ((wmf_gd_t*)((Z)->device_data))
#ifdef __cplusplus
#endif
#endif
