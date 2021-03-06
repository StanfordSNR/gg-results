// GGHASH:V8azMGB4XubvHbXA7U2XAJBASBujQJ_xrWjL9Z7OgzPQ00001d9e
#ifndef __G_DESKTOP_APP_INFO_H__
#define __G_DESKTOP_APP_INFO_H__ 
#include <gio/gio.h>
#define G_TYPE_DESKTOP_APP_INFO (g_desktop_app_info_get_type ())
#define G_DESKTOP_APP_INFO(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfo))
#define G_DESKTOP_APP_INFO_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfoClass))
#define G_IS_DESKTOP_APP_INFO(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DESKTOP_APP_INFO))
#define G_IS_DESKTOP_APP_INFO_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DESKTOP_APP_INFO))
#define G_DESKTOP_APP_INFO_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfoClass))
#ifndef G_DISABLE_DEPRECATED
#define G_TYPE_DESKTOP_APP_INFO_LOOKUP (g_desktop_app_info_lookup_get_type ())
#define G_DESKTOP_APP_INFO_LOOKUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP, GDesktopAppInfoLookup))
#define G_IS_DESKTOP_APP_INFO_LOOKUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP))
#define G_DESKTOP_APP_INFO_LOOKUP_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP, GDesktopAppInfoLookupIface))
#define G_DESKTOP_APP_INFO_LOOKUP_EXTENSION_POINT_NAME "gio-desktop-app-info-lookup"
#endif
#endif
