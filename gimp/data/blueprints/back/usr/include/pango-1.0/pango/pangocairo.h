// GGHASH:VunTxOXvTyGrLkX.zmmIVhO7cp.6f4cibLQNsC8Q_FPA00001b95
#ifndef __PANGOCAIRO_H__
#define __PANGOCAIRO_H__ 
#include <pango/pango.h>
#include <cairo.h>
#define PANGO_TYPE_CAIRO_FONT (pango_cairo_font_get_type ())
#define PANGO_CAIRO_FONT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CAIRO_FONT, PangoCairoFont))
#define PANGO_IS_CAIRO_FONT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CAIRO_FONT))
#define PANGO_TYPE_CAIRO_FONT_MAP (pango_cairo_font_map_get_type ())
#define PANGO_CAIRO_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CAIRO_FONT_MAP, PangoCairoFontMap))
#define PANGO_IS_CAIRO_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CAIRO_FONT_MAP))
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#endif
