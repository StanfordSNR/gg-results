// GGHASH:VoNMXxHjWMvZwCQ5oeruyEFgErbgcf4zU0ldDPXgRb3E00000ab3
#ifndef __G_DBUS_ACTION_GROUP_H__
#define __G_DBUS_ACTION_GROUP_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include "giotypes.h"
#define G_TYPE_DBUS_ACTION_GROUP (g_dbus_action_group_get_type ())
#define G_DBUS_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroup))
#define G_DBUS_ACTION_GROUP_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroupClass))
#define G_IS_DBUS_ACTION_GROUP(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DBUS_ACTION_GROUP))
#define G_IS_DBUS_ACTION_GROUP_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_DBUS_ACTION_GROUP))
#define G_DBUS_ACTION_GROUP_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroupClass))
#endif
