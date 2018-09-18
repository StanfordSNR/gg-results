// GGHASH:Vgfdq_WVK7z2YaFU.QfrRpsrLrHWTb4So82MZ7su1G8I000043f4
#ifndef __G_APP_INFO_H__
#define __G_APP_INFO_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_APP_INFO (g_app_info_get_type ())
#define G_APP_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_APP_INFO, GAppInfo))
#define G_IS_APP_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_APP_INFO))
#define G_APP_INFO_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_APP_INFO, GAppInfoIface))
#define G_TYPE_APP_LAUNCH_CONTEXT (g_app_launch_context_get_type ())
#define G_APP_LAUNCH_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_APP_LAUNCH_CONTEXT, GAppLaunchContext))
#define G_APP_LAUNCH_CONTEXT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_APP_LAUNCH_CONTEXT, GAppLaunchContextClass))
#define G_IS_APP_LAUNCH_CONTEXT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_APP_LAUNCH_CONTEXT))
#define G_IS_APP_LAUNCH_CONTEXT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_APP_LAUNCH_CONTEXT))
#define G_APP_LAUNCH_CONTEXT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_APP_LAUNCH_CONTEXT, GAppLaunchContextClass))
#define G_TYPE_APP_INFO_MONITOR (g_app_info_monitor_get_type ())
#define G_APP_INFO_MONITOR(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_APP_INFO_MONITOR, GAppInfoMonitor))
#define G_IS_APP_INFO_MONITOR(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_APP_INFO_MONITOR))
#endif
