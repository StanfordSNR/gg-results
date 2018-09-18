// GGHASH:VXem0k2MYkbH9wfQnnIshud_7Wx_0iq.Lm0.cEBsAl3U00004098
#ifndef HB_H_IN
#error "Include <hb.h> instead."
#endif
#ifndef HB_BUFFER_H
#define HB_BUFFER_H 
#include "hb-common.h"
#include "hb-unicode.h"
#include "hb-font.h"
#define hb_glyph_info_get_glyph_flags(info) ((hb_glyph_flags_t) ((unsigned int) (info)->mask & HB_GLYPH_FLAG_DEFINED))
#define HB_SEGMENT_PROPERTIES_DEFAULT {HB_DIRECTION_INVALID, HB_SCRIPT_INVALID, HB_LANGUAGE_INVALID, (void *) 0, (void *) 0}
#define HB_BUFFER_REPLACEMENT_CODEPOINT_DEFAULT 0xFFFDu
#endif
