// GGHASH:VQEZY6kUOuLmGSnv2muHxhcVpd4K3WeNabS.uxZyZdG800000c72
#ifndef GDK_PIXBUF_SIMPLE_ANIM_H
#define GDK_PIXBUF_SIMPLE_ANIM_H 
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#include <gdk-pixbuf/gdk-pixbuf-animation.h>
#define GDK_TYPE_PIXBUF_SIMPLE_ANIM (gdk_pixbuf_simple_anim_get_type ())
#define GDK_PIXBUF_SIMPLE_ANIM(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnim))
#define GDK_IS_PIXBUF_SIMPLE_ANIM(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF_SIMPLE_ANIM))
#define GDK_PIXBUF_SIMPLE_ANIM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnimClass))
#define GDK_IS_PIXBUF_SIMPLE_ANIM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_SIMPLE_ANIM))
#define GDK_PIXBUF_SIMPLE_ANIM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnimClass))
#endif
