// GGHASH:VBTIk_BEo6JHjLLSMfd7hIg.z_WUY0M3tTF9tbCx8.Dg000013c0
#ifndef __G_SOCKET_CONNECTION_H__
#define __G_SOCKET_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <glib-object.h>
#include <gio/gsocket.h>
#include <gio/giostream.h>
#define G_TYPE_SOCKET_CONNECTION (g_socket_connection_get_type ())
#define G_SOCKET_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_CONNECTION, GSocketConnection))
#define G_SOCKET_CONNECTION_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_CONNECTION, GSocketConnectionClass))
#define G_IS_SOCKET_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_CONNECTION))
#define G_IS_SOCKET_CONNECTION_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_CONNECTION))
#define G_SOCKET_CONNECTION_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_CONNECTION, GSocketConnectionClass))
#endif
