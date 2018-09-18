// GGHASH:V.QDcnuKj0j0ds9Tjt5HdtG_FBARuk5oCxsiPOVwIsMY00000d06
#ifndef __G_BUFFERED_OUTPUT_STREAM_H__
#define __G_BUFFERED_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gfilteroutputstream.h>
#define G_TYPE_BUFFERED_OUTPUT_STREAM (g_buffered_output_stream_get_type ())
#define G_BUFFERED_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStream))
#define G_BUFFERED_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStreamClass))
#define G_IS_BUFFERED_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_BUFFERED_OUTPUT_STREAM))
#define G_IS_BUFFERED_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_BUFFERED_OUTPUT_STREAM))
#define G_BUFFERED_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStreamClass))
#endif
