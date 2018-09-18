// GGHASH:VoAQLaZCJqUd_rSkWMOVDlZsFOcKVgQ65APtpJo3fEAU00001f16
#ifndef __GTK_CLIPBOARD_H__
#define __GTK_CLIPBOARD_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkselection.h>
#define GTK_TYPE_CLIPBOARD (gtk_clipboard_get_type ())
#define GTK_CLIPBOARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CLIPBOARD, GtkClipboard))
#define GTK_IS_CLIPBOARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CLIPBOARD))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
