// GGHASH:V3_ZECGUPUl3hQ9fjMHxP0206HemH_GhuvmwTBq5Ww3Y00004377
#ifndef __G_TLS_DATABASE_H__
#define __G_TLS_DATABASE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TLS_DATABASE_PURPOSE_AUTHENTICATE_SERVER "1.3.6.1.5.5.7.3.1"
#define G_TLS_DATABASE_PURPOSE_AUTHENTICATE_CLIENT "1.3.6.1.5.5.7.3.2"
#define G_TYPE_TLS_DATABASE (g_tls_database_get_type ())
#define G_TLS_DATABASE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_DATABASE, GTlsDatabase))
#define G_TLS_DATABASE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_DATABASE, GTlsDatabaseClass))
#define G_IS_TLS_DATABASE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_DATABASE))
#define G_IS_TLS_DATABASE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_DATABASE))
#define G_TLS_DATABASE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_DATABASE, GTlsDatabaseClass))
#endif
