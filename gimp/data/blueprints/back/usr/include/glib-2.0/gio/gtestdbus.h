// GGHASH:VHEXsZ6IVN8P9EvMjHMAd72MMGe3Q.qzoIpLclqQKaKM000008ff
#ifndef __G_TEST_DBUS_H__
#define __G_TEST_DBUS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TEST_DBUS (g_test_dbus_get_type ())
#define G_TEST_DBUS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_TEST_DBUS, GTestDBus))
#define G_IS_TEST_DBUS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_TEST_DBUS))
#endif
