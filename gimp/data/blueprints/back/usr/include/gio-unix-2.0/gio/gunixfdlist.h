// GGHASH:VyWmfk3JDpknIVzTMRA1cBkwM_YHmJ_Ea6nQVD9B9_cM00001095
#ifndef __G_UNIX_FD_LIST_H__
#define __G_UNIX_FD_LIST_H__ 
#include <gio/gio.h>
#define G_TYPE_UNIX_FD_LIST (g_unix_fd_list_get_type ())
#define G_UNIX_FD_LIST(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_UNIX_FD_LIST, GUnixFDList))
#define G_UNIX_FD_LIST_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_UNIX_FD_LIST, GUnixFDListClass))
#define G_IS_UNIX_FD_LIST(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_UNIX_FD_LIST))
#define G_IS_UNIX_FD_LIST_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_UNIX_FD_LIST))
#define G_UNIX_FD_LIST_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_UNIX_FD_LIST, GUnixFDListClass))
#endif
