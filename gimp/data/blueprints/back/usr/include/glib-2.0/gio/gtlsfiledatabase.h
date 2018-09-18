// GGHASH:VsMc5QbDVpfZcVJN7c9lH10HzbJXEx6gDjj3_tjCCyWk00000775
#ifndef __G_TLS_FILE_DATABASE_H__
#define __G_TLS_FILE_DATABASE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TLS_FILE_DATABASE (g_tls_file_database_get_type ())
#define G_TLS_FILE_DATABASE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_FILE_DATABASE, GTlsFileDatabase))
#define G_IS_TLS_FILE_DATABASE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_FILE_DATABASE))
#define G_TLS_FILE_DATABASE_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_FILE_DATABASE, GTlsFileDatabaseInterface))
#endif
