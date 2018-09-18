// GGHASH:V.8AXzb6gsq8SbhcDOO0T6OhBeNFS_8DX5KzBKBeK.Rg00000c8f
#ifndef __GDK_APP_LAUNCH_CONTEXT_H__
#define __GDK_APP_LAUNCH_CONTEXT_H__ 
#if !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gio/gio.h>
#include <gdk/gdkscreen.h>
#define GDK_TYPE_APP_LAUNCH_CONTEXT (gdk_app_launch_context_get_type ())
#define GDK_APP_LAUNCH_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_APP_LAUNCH_CONTEXT, GdkAppLaunchContext))
#define GDK_APP_LAUNCH_CONTEXT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), GDK_TYPE_APP_LAUNCH_CONTEXT, GdkAppLaunchContextClass))
#define GDK_IS_APP_LAUNCH_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_APP_LAUNCH_CONTEXT))
#define GDK_IS_APP_LAUNCH_CONTEXT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GDK_TYPE_APP_LAUNCH_CONTEXT))
#define GDK_APP_LAUNCH_CONTEXT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_APP_LAUNCH_CONTEXT, GdkAppLaunchContextClass))
#endif
