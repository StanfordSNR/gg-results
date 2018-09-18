// GGHASH:VE9hbni9nvaJngydxj_JZXagpvTt7JP72nTpWvGayRWg00000b7d
#ifndef __G_DBUS_OBJECT_H__
#define __G_DBUS_OBJECT_H__ 
#include <gio/giotypes.h>
#define G_TYPE_DBUS_OBJECT (g_dbus_object_get_type())
#define G_DBUS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT, GDBusObject))
#define G_IS_DBUS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT))
#define G_DBUS_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_OBJECT, GDBusObjectIface))
#endif
