// GGHASH:VzXQ.bS.cKB0_qOUHA7gtYWrkiFNGMcCZuySAL_Ecyrs00005c63
#ifndef __PANGO_FONT_H__
#define __PANGO_FONT_H__ 
#include <pango/pango-coverage.h>
#include <pango/pango-types.h>
#include <glib-object.h>
#define PANGO_SCALE_XX_SMALL ((double)0.5787037037037)
#define PANGO_SCALE_X_SMALL ((double)0.6444444444444)
#define PANGO_SCALE_SMALL ((double)0.8333333333333)
#define PANGO_SCALE_MEDIUM ((double)1.0)
#define PANGO_SCALE_LARGE ((double)1.2)
#define PANGO_SCALE_X_LARGE ((double)1.4399999999999)
#define PANGO_SCALE_XX_LARGE ((double)1.728)
#define PANGO_TYPE_FONT_DESCRIPTION (pango_font_description_get_type ())
#define PANGO_TYPE_FONT_METRICS (pango_font_metrics_get_type ())
#ifdef PANGO_ENABLE_BACKEND
#endif
#define PANGO_TYPE_FONT_FAMILY (pango_font_family_get_type ())
#define PANGO_FONT_FAMILY(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_FAMILY, PangoFontFamily))
#define PANGO_IS_FONT_FAMILY(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_FAMILY))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FONT_FAMILY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FONT_FAMILY, PangoFontFamilyClass))
#define PANGO_IS_FONT_FAMILY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FONT_FAMILY))
#define PANGO_FONT_FAMILY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FONT_FAMILY, PangoFontFamilyClass))
#endif
#define PANGO_TYPE_FONT_FACE (pango_font_face_get_type ())
#define PANGO_FONT_FACE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_FACE, PangoFontFace))
#define PANGO_IS_FONT_FACE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_FACE))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FONT_FACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FONT_FACE, PangoFontFaceClass))
#define PANGO_IS_FONT_FACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FONT_FACE))
#define PANGO_FONT_FACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FONT_FACE, PangoFontFaceClass))
#endif
#define PANGO_TYPE_FONT (pango_font_get_type ())
#define PANGO_FONT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT, PangoFont))
#define PANGO_IS_FONT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT))
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FONT, PangoFontClass))
#define PANGO_IS_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FONT))
#define PANGO_FONT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FONT, PangoFontClass))
#define PANGO_UNKNOWN_GLYPH_WIDTH 10
#define PANGO_UNKNOWN_GLYPH_HEIGHT 14
#endif
#define PANGO_GLYPH_EMPTY ((PangoGlyph)0x0FFFFFFF)
#define PANGO_GLYPH_INVALID_INPUT ((PangoGlyph)0xFFFFFFFF)
#define PANGO_GLYPH_UNKNOWN_FLAG ((PangoGlyph)0x10000000)
#define PANGO_GET_UNKNOWN_GLYPH(wc) ((PangoGlyph)(wc)|PANGO_GLYPH_UNKNOWN_FLAG)
#endif
