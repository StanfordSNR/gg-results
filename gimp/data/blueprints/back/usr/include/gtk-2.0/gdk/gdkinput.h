// GGHASH:V6lUrtSoPrj9ZubeauNmHruSf.0iqCJtzjf18v2_IHE40000172a
#ifndef __GDK_INPUT_H__
#define __GDK_INPUT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_DEVICE (gdk_device_get_type ())
#define GDK_DEVICE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_DEVICE, GdkDevice))
#define GDK_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_DEVICE, GdkDeviceClass))
#define GDK_IS_DEVICE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_DEVICE))
#define GDK_IS_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_DEVICE))
#define GDK_DEVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_DEVICE, GdkDeviceClass))
#define GDK_MAX_TIMECOORD_AXES 128
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
