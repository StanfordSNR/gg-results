// GGHASH:VCy87Ea2NosyT4LifpkRUuCsO8eTKFtXEwkPonkNvmk80000133b
#ifndef __G_DATA_OUTPUT_STREAM_H__
#define __G_DATA_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gfilteroutputstream.h>
#define G_TYPE_DATA_OUTPUT_STREAM (g_data_output_stream_get_type ())
#define G_DATA_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStream))
#define G_DATA_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStreamClass))
#define G_IS_DATA_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DATA_OUTPUT_STREAM))
#define G_IS_DATA_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DATA_OUTPUT_STREAM))
#define G_DATA_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStreamClass))
#endif
