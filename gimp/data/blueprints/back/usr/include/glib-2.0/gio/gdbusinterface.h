// GGHASH:VTxVjzDTVGTBd51jMG9RW4IQWUSnlYjGAPwmXp9HbXjo00000bfd
#ifndef __G_DBUS_INTERFACE_H__
#define __G_DBUS_INTERFACE_H__ 
#include <gio/giotypes.h>
#define G_TYPE_DBUS_INTERFACE (g_dbus_interface_get_type())
#define G_DBUS_INTERFACE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_INTERFACE, GDBusInterface))
#define G_IS_DBUS_INTERFACE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_INTERFACE))
#define G_DBUS_INTERFACE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_INTERFACE, GDBusInterfaceIface))
#endif
