// GGHASH:VIfanXLLRx0IVnImkW6crdHoocS8S4wFqHFBTm1ehTpw0000177e
#ifndef __PANGO_CONTEXT_H__
#define __PANGO_CONTEXT_H__ 
#include <pango/pango-font.h>
#include <pango/pango-fontmap.h>
#include <pango/pango-attributes.h>
#define PANGO_TYPE_CONTEXT (pango_context_get_type ())
#define PANGO_CONTEXT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CONTEXT, PangoContext))
#define PANGO_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_CONTEXT, PangoContextClass))
#define PANGO_IS_CONTEXT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CONTEXT))
#define PANGO_IS_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_CONTEXT))
#define PANGO_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_CONTEXT, PangoContextClass))
#endif
