// GGHASH:VgqTvTJScjq0rDSGRx2DzQXcf4smIF279xCTW319XjW4000024cb
#ifndef __PANGO_RENDERER_H_
#define __PANGO_RENDERER_H_ 
#include <pango/pango-layout.h>
#define PANGO_TYPE_RENDERER (pango_renderer_get_type())
#define PANGO_RENDERER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_RENDERER, PangoRenderer))
#define PANGO_IS_RENDERER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_RENDERER))
#define PANGO_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_RENDERER, PangoRendererClass))
#define PANGO_IS_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_RENDERER))
#define PANGO_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_RENDERER, PangoRendererClass))
#endif
