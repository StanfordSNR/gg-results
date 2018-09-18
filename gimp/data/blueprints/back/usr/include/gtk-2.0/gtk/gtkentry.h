// GGHASH:VwD42p2Mbp51P7S1_HvYORpl2bWEcb4pQJRp.Y0xjQoM00003b00
#ifndef __GTK_ENTRY_H__
#define __GTK_ENTRY_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkeditable.h>
#include <gtk/gtkimcontext.h>
#include <gtk/gtkmenu.h>
#include <gtk/gtkentrybuffer.h>
#include <gtk/gtkentrycompletion.h>
#include <gtk/gtkimage.h>
#include <gtk/gtkselection.h>
#define GTK_TYPE_ENTRY (gtk_entry_get_type ())
#define GTK_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY, GtkEntry))
#define GTK_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY, GtkEntryClass))
#define GTK_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY))
#define GTK_IS_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY))
#define GTK_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY, GtkEntryClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
