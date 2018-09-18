// GGHASH:VgVgMKg2Pogz93nJnJqon2_hnJqGVoyTODiyXEqupvu400000d2a
#ifndef __GTK_PRINT_OPERATION_PREVIEW_H__
#define __GTK_PRINT_OPERATION_PREVIEW_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <cairo.h>
#include <gtk/gtkprintcontext.h>
#define GTK_TYPE_PRINT_OPERATION_PREVIEW (gtk_print_operation_preview_get_type ())
#define GTK_PRINT_OPERATION_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW, GtkPrintOperationPreview))
#define GTK_IS_PRINT_OPERATION_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW))
#define GTK_PRINT_OPERATION_PREVIEW_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW, GtkPrintOperationPreviewIface))
#endif
