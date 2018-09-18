// GGHASH:VBjKPcsynUcnsLdgEM4srLbj.avKAHdojCet81YE4ywA0000168d
#ifndef __PANGO_FONTSET_H__
#define __PANGO_FONTSET_H__ 
#include <pango/pango-coverage.h>
#include <pango/pango-types.h>
#include <glib-object.h>
#define PANGO_TYPE_FONTSET (pango_fontset_get_type ())
#define PANGO_FONTSET(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONTSET, PangoFontset))
#define PANGO_IS_FONTSET(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONTSET))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FONTSET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FONTSET, PangoFontsetClass))
#define PANGO_IS_FONTSET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FONTSET))
#define PANGO_FONTSET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FONTSET, PangoFontsetClass))
#define PANGO_TYPE_FONTSET_SIMPLE (pango_fontset_simple_get_type ())
#define PANGO_FONTSET_SIMPLE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONTSET_SIMPLE, PangoFontsetSimple))
#define PANGO_IS_FONTSET_SIMPLE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONTSET_SIMPLE))
#endif
#endif
