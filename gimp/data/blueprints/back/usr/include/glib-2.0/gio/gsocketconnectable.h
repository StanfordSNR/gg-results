// GGHASH:VVhkkHJW2GDkxr2mpPcSOk..mALMhkke5DXPtp9.wpkk00000b46
#ifndef __G_SOCKET_CONNECTABLE_H__
#define __G_SOCKET_CONNECTABLE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET_CONNECTABLE (g_socket_connectable_get_type ())
#define G_SOCKET_CONNECTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_SOCKET_CONNECTABLE, GSocketConnectable))
#define G_IS_SOCKET_CONNECTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_SOCKET_CONNECTABLE))
#define G_SOCKET_CONNECTABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_SOCKET_CONNECTABLE, GSocketConnectableIface))
#endif
