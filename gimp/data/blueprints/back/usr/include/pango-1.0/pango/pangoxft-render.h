// GGHASH:VoHaSFoxP3SJT2gJEdsvEL5QaoB_Xq2_OZkw3t7yIRqY00001377
#ifndef __PANGOXFT_RENDER_H__
#define __PANGOXFT_RENDER_H__ 
#include <pango/pango-renderer.h>
#define _XFT_NO_COMPAT_ 
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#if defined(XftVersion) && XftVersion >= 20000
#else
#error "must have Xft version 2 or newer"
#endif
#define PANGO_TYPE_XFT_RENDERER (pango_xft_renderer_get_type())
#define PANGO_XFT_RENDERER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_RENDERER, PangoXftRenderer))
#define PANGO_IS_XFT_RENDERER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_RENDERER))
#define PANGO_XFT_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_XFT_RENDERER, PangoXftRendererClass))
#define PANGO_IS_XFT_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_XFT_RENDERER))
#define PANGO_XFT_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_XFT_RENDERER, PangoXftRendererClass))
#endif
