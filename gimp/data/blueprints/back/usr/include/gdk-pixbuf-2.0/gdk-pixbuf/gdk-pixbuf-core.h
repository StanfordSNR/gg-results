// GGHASH:V2vERs0ynSmxGJrG87zCrFEX72A11fgvsInevWYssa.E00005594
#ifndef GDK_PIXBUF_CORE_H
#define GDK_PIXBUF_CORE_H 
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <gdk-pixbuf/gdk-pixbuf-macros.h>
#define GDK_TYPE_PIXBUF (gdk_pixbuf_get_type ())
#define GDK_PIXBUF(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF, GdkPixbuf))
#define GDK_IS_PIXBUF(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF))
#define GDK_PIXBUF_ERROR gdk_pixbuf_error_quark ()
#ifndef GDK_PIXBUF_DISABLE_DEPRECATED
#endif
#ifdef G_OS_WIN32
#endif
#ifndef GDK_PIXBUF_DISABLE_DEPRECATED
#endif
#ifndef __GTK_DOC_IGNORE__
#ifdef G_OS_WIN32
#define gdk_pixbuf_save gdk_pixbuf_save_utf8
#endif
#endif
#ifdef G_OS_WIN32
#endif
#endif
