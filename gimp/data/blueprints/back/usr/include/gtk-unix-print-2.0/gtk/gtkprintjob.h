// GGHASH:VaBWxr5vh.xbU1NcNu2uL1xZwCxQBlkU.xerwzkhKXFU00001232
#ifndef __GTK_PRINT_JOB_H__
#define __GTK_PRINT_JOB_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_UNIX_PRINT_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtkunixprint.h> can be included directly."
#endif
#include <cairo.h>
#include <gtk/gtk.h>
#include <gtk/gtkprinter.h>
#define GTK_TYPE_PRINT_JOB (gtk_print_job_get_type ())
#define GTK_PRINT_JOB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_JOB, GtkPrintJob))
#define GTK_PRINT_JOB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PRINT_JOB, GtkPrintJobClass))
#define GTK_IS_PRINT_JOB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_JOB))
#define GTK_IS_PRINT_JOB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PRINT_JOB))
#define GTK_PRINT_JOB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PRINT_JOB, GtkPrintJobClass))
#endif
