// GGHASH:VnGEJ9cZJ4B1rasU0rWebbIt.LogBSDK8WSSPGplmfdY00000d50
#ifndef __G_CREDENTIALS_H__
#define __G_CREDENTIALS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#ifdef G_OS_UNIX
#include <unistd.h>
#include <sys/types.h>
#endif
#define G_TYPE_CREDENTIALS (g_credentials_get_type ())
#define G_CREDENTIALS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CREDENTIALS, GCredentials))
#define G_CREDENTIALS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CREDENTIALS, GCredentialsClass))
#define G_CREDENTIALS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CREDENTIALS, GCredentialsClass))
#define G_IS_CREDENTIALS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CREDENTIALS))
#define G_IS_CREDENTIALS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CREDENTIALS))
#ifdef G_OS_UNIX
#endif
#endif
