// GGHASH:VeHyuQcaRh9p84bgvb_Hb8RTZVh1wzwoX.KTsYqils9E00009770
#ifndef __G_DBUS_CONNECTION_H__
#define __G_DBUS_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DBUS_CONNECTION (g_dbus_connection_get_type ())
#define G_DBUS_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_CONNECTION, GDBusConnection))
#define G_IS_DBUS_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_CONNECTION))
#endif
