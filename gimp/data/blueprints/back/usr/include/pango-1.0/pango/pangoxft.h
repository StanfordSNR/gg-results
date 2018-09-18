// GGHASH:V5x278rzi6hrKyfEUxDB..vFMqNVz0jdJn5EzcOu_iQ00000120b
#ifndef __PANGOXFT_H__
#define __PANGOXFT_H__ 
#include <pango/pango-context.h>
#include <pango/pango-ot.h>
#include <pango/pangofc-font.h>
#include <pango/pango-layout.h>
#include <pango/pangoxft-render.h>
#ifndef PANGO_DISABLE_DEPRECATED
#define PANGO_RENDER_TYPE_XFT "PangoRenderXft"
#endif
#define PANGO_TYPE_XFT_FONT_MAP (pango_xft_font_map_get_type ())
#define PANGO_XFT_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_FONT_MAP, PangoXftFontMap))
#define PANGO_XFT_IS_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_FONT_MAP))
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#define PANGO_XFT_FONT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_FONT, PangoXftFont))
#define PANGO_TYPE_XFT_FONT (pango_xft_font_get_type ())
#define PANGO_XFT_IS_FONT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_FONT))
#ifdef PANGO_ENABLE_ENGINE
#ifndef PANGO_DISABLE_DEPRECATED
#endif
#endif
#endif
