// GGHASH:VENQs76.bmzyUCi3ggsQzfi7q5tYNp0LW7Hmvj.uyO.I00000920
#ifndef __ATK_SOCKET_H__
#define __ATK_SOCKET_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkversion.h>
#define ATK_TYPE_SOCKET (atk_socket_get_type ())
#define ATK_SOCKET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_SOCKET, AtkSocket))
#define ATK_IS_SOCKET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_SOCKET))
#define ATK_SOCKET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_SOCKET, AtkSocketClass))
#define ATK_IS_SOCKET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_SOCKET))
#define ATK_SOCKET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_SOCKET, AtkSocketClass))
#endif
