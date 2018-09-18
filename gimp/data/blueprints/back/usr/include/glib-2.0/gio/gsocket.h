// GGHASH:VWO_T5.u_y._dxqRBXBHTeOLG9_HHL5nCPwu_7M9AEO400003cff
#ifndef __G_SOCKET_H__
#define __G_SOCKET_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET (g_socket_get_type ())
#define G_SOCKET(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET, GSocket))
#define G_SOCKET_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET, GSocketClass))
#define G_IS_SOCKET(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET))
#define G_IS_SOCKET_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET))
#define G_SOCKET_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET, GSocketClass))
#endif
