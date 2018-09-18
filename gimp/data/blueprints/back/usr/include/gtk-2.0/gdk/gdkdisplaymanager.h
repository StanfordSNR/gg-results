// GGHASH:Vz3vvUI2Sxmbndlvw9sXZm6aXRg82V21pX_dq.kBZHzM00000b19
#ifndef __GDK_DISPLAY_MANAGER_H__
#define __GDK_DISPLAY_MANAGER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#include <gdk/gdkdisplay.h>
#define GDK_TYPE_DISPLAY_MANAGER (gdk_display_manager_get_type ())
#define GDK_DISPLAY_MANAGER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_DISPLAY_MANAGER, GdkDisplayManager))
#define GDK_DISPLAY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_DISPLAY_MANAGER, GdkDisplayManagerClass))
#define GDK_IS_DISPLAY_MANAGER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_DISPLAY_MANAGER))
#define GDK_IS_DISPLAY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_DISPLAY_MANAGER))
#define GDK_DISPLAY_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_DISPLAY_MANAGER, GdkDisplayManagerClass))
#endif
