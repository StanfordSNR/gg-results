// GGHASH:Vf7PVKhiLB8ld0zzjJQo0GO4YzKjZcSwodVAriaw5blg00003973
#ifndef DBUS_GLIB_H
#define DBUS_GLIB_H 
#include <glib-object.h>
#include <dbus/dbus-shared.h>
#define DBUS_INSIDE_DBUS_GLIB_H 1
#define DBUS_TYPE_G_CONNECTION (dbus_g_connection_get_g_type ())
#define DBUS_TYPE_G_MESSAGE (dbus_g_message_get_g_type ())
#define DBUS_GERROR dbus_g_error_quark ()
#ifdef DBUS_COMPILATION
#include "dbus/dbus-gtype-specialized.h"
#else
#include <dbus/dbus-gtype-specialized.h>
#endif
#define DBUS_TYPE_G_BOOLEAN_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_BOOLEAN))
#define DBUS_TYPE_G_UCHAR_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_UCHAR))
#define DBUS_TYPE_G_UINT_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_UINT))
#define DBUS_TYPE_G_INT_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_INT))
#define DBUS_TYPE_G_UINT64_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_UINT64))
#define DBUS_TYPE_G_INT64_ARRAY (dbus_g_type_get_collection ("GArray", G_TYPE_INT64))
#define DBUS_TYPE_G_OBJECT_ARRAY (dbus_g_type_get_collection ("GPtrArray", G_TYPE_OBJECT))
#define DBUS_TYPE_G_STRING_STRING_HASHTABLE (dbus_g_type_get_map ("GHashTable", G_TYPE_STRING, G_TYPE_STRING))
#define DBUS_TYPE_G_OBJECT_PATH (dbus_g_object_path_get_g_type ())
#define DBUS_TYPE_G_SIGNATURE (dbus_g_signature_get_g_type ())
#define DBUS_TYPE_G_PROXY (dbus_g_proxy_get_type ())
#define DBUS_G_PROXY(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), DBUS_TYPE_G_PROXY, DBusGProxy))
#define DBUS_G_PROXY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DBUS_TYPE_G_PROXY, DBusGProxyClass))
#define DBUS_IS_G_PROXY(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), DBUS_TYPE_G_PROXY))
#define DBUS_IS_G_PROXY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DBUS_TYPE_G_PROXY))
#define DBUS_G_PROXY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DBUS_TYPE_G_PROXY, DBusGProxyClass))
#undef DBUS_INSIDE_DBUS_GLIB_H
#include <dbus/dbus-gvalue-parse-variant.h>
#endif
