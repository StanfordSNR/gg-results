// GGHASH:VpJvO.FQHBd2OMLjCH2p9QoqfNfBmvYwJQc_j8jtBLoY00002bcb
#ifndef __G_SOCKET_CLIENT_H__
#define __G_SOCKET_CLIENT_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET_CLIENT (g_socket_client_get_type ())
#define G_SOCKET_CLIENT(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_CLIENT, GSocketClient))
#define G_SOCKET_CLIENT_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_CLIENT, GSocketClientClass))
#define G_IS_SOCKET_CLIENT(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_CLIENT))
#define G_IS_SOCKET_CLIENT_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_CLIENT))
#define G_SOCKET_CLIENT_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_CLIENT, GSocketClientClass))
#endif
