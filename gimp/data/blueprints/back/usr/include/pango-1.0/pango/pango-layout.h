// GGHASH:VvQ4zFJY17PAnG0m0h2WEmNcOG4419VVP6rfwj0vVKkI00004177
#ifndef __PANGO_LAYOUT_H__
#define __PANGO_LAYOUT_H__ 
#include <pango/pango-attributes.h>
#include <pango/pango-context.h>
#include <pango/pango-glyph-item.h>
#include <pango/pango-tabs.h>
#define PANGO_TYPE_LAYOUT (pango_layout_get_type ())
#define PANGO_LAYOUT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_LAYOUT, PangoLayout))
#define PANGO_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_LAYOUT, PangoLayoutClass))
#define PANGO_IS_LAYOUT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_LAYOUT))
#define PANGO_IS_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_LAYOUT))
#define PANGO_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_LAYOUT, PangoLayoutClass))
#define PANGO_TYPE_LAYOUT_LINE (pango_layout_line_get_type ())
#define PANGO_TYPE_LAYOUT_ITER (pango_layout_iter_get_type ())
#endif
