// GGHASH:Vus1uk0Q7WVKm5bQE.0B5m50KgThlsmAUwSKeQFKoYps00000b3b
#ifndef __G_FILTER_OUTPUT_STREAM_H__
#define __G_FILTER_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/goutputstream.h>
#define G_TYPE_FILTER_OUTPUT_STREAM (g_filter_output_stream_get_type ())
#define G_FILTER_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStream))
#define G_FILTER_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStreamClass))
#define G_IS_FILTER_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILTER_OUTPUT_STREAM))
#define G_IS_FILTER_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILTER_OUTPUT_STREAM))
#define G_FILTER_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStreamClass))
#endif
