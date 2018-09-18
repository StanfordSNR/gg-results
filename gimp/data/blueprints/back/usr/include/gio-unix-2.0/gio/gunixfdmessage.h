// GGHASH:V1j1rIEmmwUvs0wj3mZyovr.QdppZnvyakghXwT8RUQ400000eb7
#ifndef __G_UNIX_FD_MESSAGE_H__
#define __G_UNIX_FD_MESSAGE_H__ 
#include <gio/gio.h>
#include <gio/gunixfdlist.h>
#define G_TYPE_UNIX_FD_MESSAGE (g_unix_fd_message_get_type ())
#define G_UNIX_FD_MESSAGE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessage))
#define G_UNIX_FD_MESSAGE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessageClass))
#define G_IS_UNIX_FD_MESSAGE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_UNIX_FD_MESSAGE))
#define G_IS_UNIX_FD_MESSAGE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_UNIX_FD_MESSAGE))
#define G_UNIX_FD_MESSAGE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessageClass))
#endif
