// GGHASH:VMjm32.DbHvthmacnlEMPuLCKN2OEC9lFMEUWgKdVgFI00001bbf
#ifdef GTK_ENABLE_BROKEN
#ifndef __GTK_TEXT_H__
#define __GTK_TEXT_H__ 
#include <gtk/gtkoldeditable.h>
#define GTK_TYPE_TEXT (gtk_text_get_type ())
#define GTK_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT, GtkText))
#define GTK_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT, GtkTextClass))
#define GTK_IS_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT))
#define GTK_IS_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT))
#define GTK_TEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT, GtkTextClass))
#define GTK_TEXT_INDEX(t,index) (((t)->use_wchar) ? ((index) < (t)->gap_position ? (t)->text.wc[index] : (t)->text.wc[(index)+(t)->gap_size]) : ((index) < (t)->gap_position ? (t)->text.ch[index] : (t)->text.ch[(index)+(t)->gap_size]))
#endif
#endif
