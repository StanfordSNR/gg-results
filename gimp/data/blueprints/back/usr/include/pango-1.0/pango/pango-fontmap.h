// GGHASH:VGVqU54oj9HqR_xZ9iMIpG16nHhMB9XljulCmxqmJKCY00001781
#ifndef __PANGO_FONTMAP_H__
#define __PANGO_FONTMAP_H__ 
#include <pango/pango-font.h>
#include <pango/pango-fontset.h>
#define PANGO_TYPE_FONT_MAP (pango_font_map_get_type ())
#define PANGO_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_MAP, PangoFontMap))
#define PANGO_IS_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_MAP))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FONT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FONT_MAP, PangoFontMapClass))
#define PANGO_IS_FONT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FONT_MAP))
#define PANGO_FONT_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FONT_MAP, PangoFontMapClass))
#endif
#endif
