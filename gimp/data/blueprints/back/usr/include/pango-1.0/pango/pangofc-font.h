// GGHASH:Vln2QT8nygEoAoVN82Z3BHlIvW48RfivwztunMkUYCZY0000160c
#ifndef __PANGO_FC_FONT_H__
#define __PANGO_FC_FONT_H__ 
#include <pango/pango.h>
#ifdef PANGO_COMPILATION
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wundef"
#endif
#include <ft2build.h>
#include FT_FREETYPE_H
#include <fontconfig/fontconfig.h>
#ifdef PANGO_COMPILATION
#pragma GCC diagnostic pop
#endif
#define PANGO_TYPE_FC_FONT (pango_fc_font_get_type ())
#define PANGO_FC_FONT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FC_FONT, PangoFcFont))
#define PANGO_IS_FC_FONT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FC_FONT))
#if defined(PANGO_ENABLE_ENGINE) || defined(PANGO_ENABLE_BACKEND)
#define PANGO_RENDER_TYPE_FC "PangoRenderFc"
#ifdef PANGO_ENABLE_BACKEND
#define PANGO_FC_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FC_FONT, PangoFcFontClass))
#define PANGO_IS_FC_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FC_FONT))
#define PANGO_FC_FONT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FC_FONT, PangoFcFontClass))
#endif
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#endif
#endif
