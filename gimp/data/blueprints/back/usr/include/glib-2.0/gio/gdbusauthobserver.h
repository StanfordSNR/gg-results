// GGHASH:VnpVdCY6LHwW9VN3vnBhisgAliW.qwnD.7yz0nABGQjc00000852
#ifndef __G_DBUS_AUTH_OBSERVER_H__
#define __G_DBUS_AUTH_OBSERVER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DBUS_AUTH_OBSERVER (g_dbus_auth_observer_get_type ())
#define G_DBUS_AUTH_OBSERVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_AUTH_OBSERVER, GDBusAuthObserver))
#define G_IS_DBUS_AUTH_OBSERVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_AUTH_OBSERVER))
#endif
