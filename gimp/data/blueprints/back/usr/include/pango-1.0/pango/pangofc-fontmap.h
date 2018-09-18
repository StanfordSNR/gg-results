// GGHASH:Vrp8cMnlBeA85OK4JJEvtQu8l02EfaLQwEs0Ik0HRmMw00002cba
#ifndef __PANGO_FC_FONT_MAP_H__
#define __PANGO_FC_FONT_MAP_H__ 
#include <pango/pango.h>
#include <fontconfig/fontconfig.h>
#include <pango/pangofc-decoder.h>
#include <pango/pangofc-font.h>
#ifdef PANGO_ENABLE_BACKEND
#endif
#define PANGO_TYPE_FC_FONT_MAP (pango_fc_font_map_get_type ())
#define PANGO_FC_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FC_FONT_MAP, PangoFcFontMap))
#define PANGO_IS_FC_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FC_FONT_MAP))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FC_FONT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FC_FONT_MAP, PangoFcFontMapClass))
#define PANGO_IS_FC_FONT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FC_FONT_MAP))
#define PANGO_FC_FONT_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FC_FONT_MAP, PangoFcFontMapClass))
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#endif
#define PANGO_FC_GRAVITY "pangogravity"
#define PANGO_FC_VERSION "pangoversion"
#define PANGO_FC_PRGNAME "prgname"
#define PANGO_FC_FONT_FEATURES "fontfeatures"
#endif
