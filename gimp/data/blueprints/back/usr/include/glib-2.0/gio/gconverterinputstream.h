// GGHASH:VblgYMcFki1eQ.19mUNnmfbwdyO5FXql3Noqai9KycBs00000bc7
#ifndef __G_CONVERTER_INPUT_STREAM_H__
#define __G_CONVERTER_INPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gfilterinputstream.h>
#include <gio/gconverter.h>
#define G_TYPE_CONVERTER_INPUT_STREAM (g_converter_input_stream_get_type ())
#define G_CONVERTER_INPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStream))
#define G_CONVERTER_INPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStreamClass))
#define G_IS_CONVERTER_INPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CONVERTER_INPUT_STREAM))
#define G_IS_CONVERTER_INPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CONVERTER_INPUT_STREAM))
#define G_CONVERTER_INPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStreamClass))
#endif
