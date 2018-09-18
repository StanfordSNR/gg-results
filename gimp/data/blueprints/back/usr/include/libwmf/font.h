// GGHASH:V5nwbmCxnkITQugd9des9L4Mc2jiwKBSQfWNHuoL3GSY00000dfc
#ifndef LIBWMF_FONT_H
#define LIBWMF_FONT_H 
#include <libwmf/ipa.h>
#ifdef __cplusplus
#endif
#define WMF_FONT_PSNAME(F) ((F)->user_data ? ((wmfIPAFont*) (F)->user_data)->ps_name : 0)
#define WMF_FONT_FTFACE(F) ((F)->user_data ? ((wmfIPAFont*) (F)->user_data)->ft_face : 0)
#ifdef __cplusplus
#endif
#endif
