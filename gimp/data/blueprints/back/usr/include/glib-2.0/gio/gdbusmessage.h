// GGHASH:VUn1Di0CkSV3A_4ag_8j6R0wT7UTZEuDaoJ73_01F61A00002c77
#ifndef __G_DBUS_MESSAGE_H__
#define __G_DBUS_MESSAGE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DBUS_MESSAGE (g_dbus_message_get_type ())
#define G_DBUS_MESSAGE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_MESSAGE, GDBusMessage))
#define G_IS_DBUS_MESSAGE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_MESSAGE))
#endif
