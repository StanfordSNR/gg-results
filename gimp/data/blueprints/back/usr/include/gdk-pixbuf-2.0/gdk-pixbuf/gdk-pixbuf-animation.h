// GGHASH:VM5PKss6_zsShWzZlPMLx25LLA29h3Lxz2LkmAlk4cLw000025ad
#ifndef GDK_PIXBUF_ANIMATION_H
#define GDK_PIXBUF_ANIMATION_H 
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#include <glib-object.h>
#include <gdk-pixbuf/gdk-pixbuf-core.h>
#define GDK_TYPE_PIXBUF_ANIMATION (gdk_pixbuf_animation_get_type ())
#define GDK_PIXBUF_ANIMATION(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF_ANIMATION, GdkPixbufAnimation))
#define GDK_IS_PIXBUF_ANIMATION(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF_ANIMATION))
#define GDK_TYPE_PIXBUF_ANIMATION_ITER (gdk_pixbuf_animation_iter_get_type ())
#define GDK_PIXBUF_ANIMATION_ITER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF_ANIMATION_ITER, GdkPixbufAnimationIter))
#define GDK_IS_PIXBUF_ANIMATION_ITER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF_ANIMATION_ITER))
#ifdef G_OS_WIN32
#endif
#ifndef GDK_PIXBUF_DISABLE_DEPRECATED
#endif
#ifdef GDK_PIXBUF_ENABLE_BACKEND
#define GDK_PIXBUF_ANIMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_ANIMATION, GdkPixbufAnimationClass))
#define GDK_IS_PIXBUF_ANIMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_ANIMATION))
#define GDK_PIXBUF_ANIMATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_ANIMATION, GdkPixbufAnimationClass))
#define GDK_PIXBUF_ANIMATION_ITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_ANIMATION_ITER, GdkPixbufAnimationIterClass))
#define GDK_IS_PIXBUF_ANIMATION_ITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_ANIMATION_ITER))
#define GDK_PIXBUF_ANIMATION_ITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_ANIMATION_ITER, GdkPixbufAnimationIterClass))
#endif
#endif