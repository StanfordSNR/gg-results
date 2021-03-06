// GGHASH:V8PhCPwmSj9S97k3tu4Fx1HzsZF9NyrU6nHPgQHyBPJ000000bee
#ifndef __G_CONVERTER_OUTPUT_STREAM_H__
#define __G_CONVERTER_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gfilteroutputstream.h>
#include <gio/gconverter.h>
#define G_TYPE_CONVERTER_OUTPUT_STREAM (g_converter_output_stream_get_type ())
#define G_CONVERTER_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStream))
#define G_CONVERTER_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStreamClass))
#define G_IS_CONVERTER_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CONVERTER_OUTPUT_STREAM))
#define G_IS_CONVERTER_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CONVERTER_OUTPUT_STREAM))
#define G_CONVERTER_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStreamClass))
#endif
