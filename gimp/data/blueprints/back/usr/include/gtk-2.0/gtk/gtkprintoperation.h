// GGHASH:VAxqcXqd1zG6f3yhpRujIb8hwJ_QCkBBRq.CguGDg104000024c6
#ifndef __GTK_PRINT_OPERATION_H__
#define __GTK_PRINT_OPERATION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <cairo.h>
#include <gtk/gtkmain.h>
#include <gtk/gtkwindow.h>
#include <gtk/gtkpagesetup.h>
#include <gtk/gtkprintsettings.h>
#include <gtk/gtkprintcontext.h>
#include <gtk/gtkprintoperationpreview.h>
#define GTK_TYPE_PRINT_OPERATION (gtk_print_operation_get_type ())
#define GTK_PRINT_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_OPERATION, GtkPrintOperation))
#define GTK_PRINT_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PRINT_OPERATION, GtkPrintOperationClass))
#define GTK_IS_PRINT_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_OPERATION))
#define GTK_IS_PRINT_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PRINT_OPERATION))
#define GTK_PRINT_OPERATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PRINT_OPERATION, GtkPrintOperationClass))
#define GTK_PRINT_ERROR gtk_print_error_quark ()
#endif
