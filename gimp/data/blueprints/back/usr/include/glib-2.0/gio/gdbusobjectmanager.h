// GGHASH:V2Jj3HZYzR9Hb8S4HBK6WxaP.oAjLd.mKEz6DarM_kjU0000117a
#ifndef __G_DBUS_OBJECT_MANAGER_H__
#define __G_DBUS_OBJECT_MANAGER_H__ 
#include <gio/giotypes.h>
#define G_TYPE_DBUS_OBJECT_MANAGER (g_dbus_object_manager_get_type())
#define G_DBUS_OBJECT_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_MANAGER, GDBusObjectManager))
#define G_IS_DBUS_OBJECT_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_MANAGER))
#define G_DBUS_OBJECT_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_OBJECT_MANAGER, GDBusObjectManagerIface))
#endif
