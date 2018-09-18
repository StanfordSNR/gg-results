// GGHASH:Vhv1FjHCNDC.VN5D4X6CJFp4CuhJcWbxlsbWXHTJmLkM00001260
#ifndef GDK_PIXBUF_LOADER_H
#define GDK_PIXBUF_LOADER_H 
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#include <glib.h>
#include <glib-object.h>
#include <gdk-pixbuf/gdk-pixbuf-core.h>
#include <gdk-pixbuf/gdk-pixbuf-animation.h>
#include <gdk-pixbuf/gdk-pixbuf-io.h>
#define GDK_TYPE_PIXBUF_LOADER (gdk_pixbuf_loader_get_type ())
#define GDK_PIXBUF_LOADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GDK_TYPE_PIXBUF_LOADER, GdkPixbufLoader))
#define GDK_PIXBUF_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_LOADER, GdkPixbufLoaderClass))
#define GDK_IS_PIXBUF_LOADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GDK_TYPE_PIXBUF_LOADER))
#define GDK_IS_PIXBUF_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_LOADER))
#define GDK_PIXBUF_LOADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_LOADER, GdkPixbufLoaderClass))
#endif
