// GGHASH:VwbYw6Z9YmX.zqsbD0qofGmG0Oo92ZJurt_ODlGU_VTA0000109a
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_FILESEL_H__
#define __GTK_FILESEL_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_FILE_SELECTION (gtk_file_selection_get_type ())
#define GTK_FILE_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_SELECTION, GtkFileSelection))
#define GTK_FILE_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_SELECTION, GtkFileSelectionClass))
#define GTK_IS_FILE_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_SELECTION))
#define GTK_IS_FILE_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_SELECTION))
#define GTK_FILE_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_SELECTION, GtkFileSelectionClass))
#ifdef G_OS_WIN32
#define gtk_file_selection_get_filename gtk_file_selection_get_filename_utf8
#define gtk_file_selection_set_filename gtk_file_selection_set_filename_utf8
#define gtk_file_selection_get_selections gtk_file_selection_get_selections_utf8
#endif
#endif
#endif
