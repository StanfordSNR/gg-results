// GGHASH:VXXUkkAgzC90.Oy55rmlN_ugg0sP0wDONP1bP_7bDp5k00001316
#ifndef __G_SOCKET_CONTROL_MESSAGE_H__
#define __G_SOCKET_CONTROL_MESSAGE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET_CONTROL_MESSAGE (g_socket_control_message_get_type ())
#define G_SOCKET_CONTROL_MESSAGE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_CONTROL_MESSAGE, GSocketControlMessage))
#define G_SOCKET_CONTROL_MESSAGE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_CONTROL_MESSAGE, GSocketControlMessageClass))
#define G_IS_SOCKET_CONTROL_MESSAGE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_CONTROL_MESSAGE))
#define G_IS_SOCKET_CONTROL_MESSAGE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_CONTROL_MESSAGE))
#define G_SOCKET_CONTROL_MESSAGE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_CONTROL_MESSAGE, GSocketControlMessageClass))
#endif
