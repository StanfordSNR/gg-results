// GGHASH:VtAu29NvTRuj_eKdqbRx94c2JM4SdatP7QFoVfPNQfjg00002f32
#ifndef __G_DBUS_PROXY_H__
#define __G_DBUS_PROXY_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#include <gio/gdbusintrospection.h>
#define G_TYPE_DBUS_PROXY (g_dbus_proxy_get_type ())
#define G_DBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_PROXY, GDBusProxy))
#define G_DBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_PROXY, GDBusProxyClass))
#define G_DBUS_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_PROXY, GDBusProxyClass))
#define G_IS_DBUS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_PROXY))
#define G_IS_DBUS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_PROXY))
#endif
