// GGHASH:VY0sj22c7oeTAoyCDrCgpNLUxtGJHSQ2DAAVsqA3zSpc00000c7d
#ifndef __G_UNIX_CREDENTIALS_MESSAGE_H__
#define __G_UNIX_CREDENTIALS_MESSAGE_H__ 
#include <gio/gio.h>
#define G_TYPE_UNIX_CREDENTIALS_MESSAGE (g_unix_credentials_message_get_type ())
#define G_UNIX_CREDENTIALS_MESSAGE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessage))
#define G_UNIX_CREDENTIALS_MESSAGE_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessageClass))
#define G_IS_UNIX_CREDENTIALS_MESSAGE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE))
#define G_IS_UNIX_CREDENTIALS_MESSAGE_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), G_TYPE_UNIX_CREDENTIALS_MESSAGE))
#define G_UNIX_CREDENTIALS_MESSAGE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessageClass))
#endif
