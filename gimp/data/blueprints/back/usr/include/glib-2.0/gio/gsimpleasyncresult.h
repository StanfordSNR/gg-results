// GGHASH:VdHqqmAaBbnKnX.W.A4iHWFfLVpa2cpf7H3CIwWsz7DM00001e81
#ifndef __G_SIMPLE_ASYNC_RESULT_H__
#define __G_SIMPLE_ASYNC_RESULT_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SIMPLE_ASYNC_RESULT (g_simple_async_result_get_type ())
#define G_SIMPLE_ASYNC_RESULT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResult))
#define G_SIMPLE_ASYNC_RESULT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResultClass))
#define G_IS_SIMPLE_ASYNC_RESULT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SIMPLE_ASYNC_RESULT))
#define G_IS_SIMPLE_ASYNC_RESULT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SIMPLE_ASYNC_RESULT))
#define G_SIMPLE_ASYNC_RESULT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResultClass))
#endif
