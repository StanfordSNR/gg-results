// GGHASH:V5EsctHcmkCxIFSR7UAk.eTz1iwkEfBGpG7LHSpE30cs0000176d
#ifndef __GTK_PRINTER_H__
#define __GTK_PRINTER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_UNIX_PRINT_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtkunixprint.h> can be included directly."
#endif
#include <cairo.h>
#include <gtk/gtk.h>
#define GTK_TYPE_PRINT_CAPABILITIES (gtk_print_capabilities_get_type ())
#define GTK_TYPE_PRINTER (gtk_printer_get_type ())
#define GTK_PRINTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINTER, GtkPrinter))
#define GTK_PRINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PRINTER, GtkPrinterClass))
#define GTK_IS_PRINTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINTER))
#define GTK_IS_PRINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PRINTER))
#define GTK_PRINTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PRINTER, GtkPrinterClass))
#endif
