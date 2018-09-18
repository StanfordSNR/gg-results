// GGHASH:Vnk12nanwS8axJpn03A0Klp_vFnfRidrl48DABCSsusM000009e6
#ifndef __G_DBUS_SERVER_H__
#define __G_DBUS_SERVER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DBUS_SERVER (g_dbus_server_get_type ())
#define G_DBUS_SERVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_SERVER, GDBusServer))
#define G_IS_DBUS_SERVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_SERVER))
#endif
