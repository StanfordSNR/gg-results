// GGHASH:VY4ZC4gcqStgkDVko_ZLYTMQbzWKnMsr1uHEw4F6pNqo0000737a
#ifndef __GDK_WINDOW_H__
#define __GDK_WINDOW_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdkdrawable.h>
#include <gdk/gdktypes.h>
#include <gdk/gdkevents.h>
#define GDK_TYPE_WINDOW (gdk_window_object_get_type ())
#define GDK_WINDOW(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_WINDOW, GdkWindow))
#define GDK_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_WINDOW, GdkWindowObjectClass))
#define GDK_IS_WINDOW(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_WINDOW))
#define GDK_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_WINDOW))
#define GDK_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_WINDOW, GdkWindowObjectClass))
#ifndef GDK_DISABLE_DEPRECATED
#define GDK_WINDOW_OBJECT(object) ((GdkWindowObject *) GDK_WINDOW (object))
#ifndef GDK_COMPILATION
#endif
#endif
#if !defined(GDK_DISABLE_DEPRECATED) || defined(GDK_COMPILATION)
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#if !defined(GDK_DISABLE_DEPRECATED) || defined(GDK_COMPILATION)
#endif
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#if !defined(GDK_MULTIHEAD_SAFE) && !defined(GDK_DISABLE_DEPRECATED)
#endif
#ifndef GDK_DISABLE_DEPRECATED
#ifndef GDK_MULTIHEAD_SAFE
#endif
#define GDK_ROOT_PARENT() (gdk_get_default_root_window ())
#define gdk_window_get_size gdk_drawable_get_size
#define gdk_window_get_type gdk_window_get_window_type
#define gdk_window_get_colormap gdk_drawable_get_colormap
#define gdk_window_set_colormap gdk_drawable_set_colormap
#define gdk_window_ref g_object_ref
#define gdk_window_unref g_object_unref
#define gdk_window_copy_area(drawable,gc,x,y,source_drawable,source_x,source_y,width,height) gdk_draw_pixmap(drawable,gc,source_drawable,source_x,source_y,x,y,width,height)
#endif
#endif
