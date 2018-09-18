// GGHASH:V282bVxy1pHvwAeQTLSe.Ud1rPr5Am2eG0Nbp1kRjuik000028f4
#ifndef LIBWMF_TYPES_H
#define LIBWMF_TYPES_H 
#include <stdio.h>
#include <sys/types.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include <libwmf/fund.h>
#ifdef __cplusplus
#endif
#define WMF_ERROR_STATE(Z) (((wmfAPI*)(Z))->err)
#define WMF_READ(Z) ((Z)->bbuf.read ((Z)->buffer_data))
#define WMF_SEEK(Z,P) ((Z)->bbuf.seek ((Z)->buffer_data,P))
#define WMF_TELL(Z) ((Z)->bbuf.tell ((Z)->buffer_data))
#ifdef __cplusplus
#endif
#endif
