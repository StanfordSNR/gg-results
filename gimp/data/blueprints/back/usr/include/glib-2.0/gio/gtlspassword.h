// GGHASH:VQwaZWi4m1cMcw6LUlF47gCunpWiEQuuxCcRI.TQzQMY000012d2
#ifndef __G_TLS_PASSWORD_H__
#define __G_TLS_PASSWORD_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TLS_PASSWORD (g_tls_password_get_type ())
#define G_TLS_PASSWORD(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_TLS_PASSWORD, GTlsPassword))
#define G_TLS_PASSWORD_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_TLS_PASSWORD, GTlsPasswordClass))
#define G_IS_TLS_PASSWORD(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_TLS_PASSWORD))
#define G_IS_TLS_PASSWORD_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_TLS_PASSWORD))
#define G_TLS_PASSWORD_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_TLS_PASSWORD, GTlsPasswordClass))
#endif
