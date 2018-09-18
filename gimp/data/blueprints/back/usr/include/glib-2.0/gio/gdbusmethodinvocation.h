// GGHASH:VPXqmTqu_s.9mcDC9.3g0XE.wa_H9fMvI5JQGIcO7lBs000016a9
#ifndef __G_DBUS_METHOD_INVOCATION_H__
#define __G_DBUS_METHOD_INVOCATION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DBUS_METHOD_INVOCATION (g_dbus_method_invocation_get_type ())
#define G_DBUS_METHOD_INVOCATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_METHOD_INVOCATION, GDBusMethodInvocation))
#define G_IS_DBUS_METHOD_INVOCATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_METHOD_INVOCATION))
#endif
