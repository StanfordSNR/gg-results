// GGHASH:VbTIqvp6Xd581G_H6s4VdIBJ7TvO0NokER32E14bHFgs000013dc
#ifndef __PANGOFT2_H__
#define __PANGOFT2_H__ 
#include <fontconfig/fontconfig.h>
#include <pango/pango-layout.h>
#include <pango/pangofc-font.h>
#ifndef PANGO_DISABLE_DEPRECATED
#define PANGO_RENDER_TYPE_FT2 "PangoRenderFT2"
#endif
#define PANGO_TYPE_FT2_FONT_MAP (pango_ft2_font_map_get_type ())
#define PANGO_FT2_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FT2_FONT_MAP, PangoFT2FontMap))
#define PANGO_FT2_IS_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FT2_FONT_MAP))
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#endif
