// GGHASH:VIhiqRxa_H8gEtqcyNjg5hCtmWDyuE9TtgcvwzGB0sss00001018
#ifndef __G_DBUS_OBJECT_MANAGER_SERVER_H__
#define __G_DBUS_OBJECT_MANAGER_SERVER_H__ 
#include <gio/giotypes.h>
#define G_TYPE_DBUS_OBJECT_MANAGER_SERVER (g_dbus_object_manager_server_get_type ())
#define G_DBUS_OBJECT_MANAGER_SERVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServer))
#define G_DBUS_OBJECT_MANAGER_SERVER_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServerClass))
#define G_DBUS_OBJECT_MANAGER_SERVER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServerClass))
#define G_IS_DBUS_OBJECT_MANAGER_SERVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER))
#define G_IS_DBUS_OBJECT_MANAGER_SERVER_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_OBJECT_MANAGER_SERVER))
#endif