// GGHASH:VHXYzTf_j585JPeRkS6lklUj3DNH2nyNPl2YDNIx8ww400001436
#ifndef __GDK_IMAGE_H__
#define __GDK_IMAGE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_IMAGE (gdk_image_get_type ())
#define GDK_IMAGE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_IMAGE, GdkImage))
#define GDK_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_IMAGE, GdkImageClass))
#define GDK_IS_IMAGE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_IMAGE))
#define GDK_IS_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_IMAGE))
#define GDK_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_IMAGE, GdkImageClass))
#ifndef GDK_DISABLE_DEPRECATED
#ifdef GDK_ENABLE_BROKEN
#endif
#define gdk_image_destroy g_object_unref
#endif
#endif
