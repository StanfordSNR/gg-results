// GGHASH:V1_Z4onNpMps8MGrILMsRZWQ1EN1Dz0XcoFJc9X.uvgQ00000aeb
#ifndef __GTK_PRINT_CONTEXT_H__
#define __GTK_PRINT_CONTEXT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <pango/pango.h>
#include <gtk/gtkpagesetup.h>
#define GTK_TYPE_PRINT_CONTEXT (gtk_print_context_get_type ())
#define GTK_PRINT_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_CONTEXT, GtkPrintContext))
#define GTK_IS_PRINT_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_CONTEXT))
#endif
