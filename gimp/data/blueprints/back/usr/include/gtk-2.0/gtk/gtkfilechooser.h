// GGHASH:VZYKQzz7lzYq4gpVKcbV3wV_7e50o7X58iXPd0GrWpJE00002e99
#ifndef __GTK_FILE_CHOOSER_H__
#define __GTK_FILE_CHOOSER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkfilefilter.h>
#include <gtk/gtkwidget.h>
#define GTK_TYPE_FILE_CHOOSER (gtk_file_chooser_get_type ())
#define GTK_FILE_CHOOSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER, GtkFileChooser))
#define GTK_IS_FILE_CHOOSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER))
#define GTK_FILE_CHOOSER_ERROR (gtk_file_chooser_error_quark ())
#ifdef G_OS_WIN32
#define gtk_file_chooser_get_filename gtk_file_chooser_get_filename_utf8
#define gtk_file_chooser_set_filename gtk_file_chooser_set_filename_utf8
#define gtk_file_chooser_select_filename gtk_file_chooser_select_filename_utf8
#define gtk_file_chooser_unselect_filename gtk_file_chooser_unselect_filename_utf8
#define gtk_file_chooser_get_filenames gtk_file_chooser_get_filenames_utf8
#define gtk_file_chooser_set_current_folder gtk_file_chooser_set_current_folder_utf8
#define gtk_file_chooser_get_current_folder gtk_file_chooser_get_current_folder_utf8
#define gtk_file_chooser_get_preview_filename gtk_file_chooser_get_preview_filename_utf8
#define gtk_file_chooser_add_shortcut_folder gtk_file_chooser_add_shortcut_folder_utf8
#define gtk_file_chooser_remove_shortcut_folder gtk_file_chooser_remove_shortcut_folder_utf8
#define gtk_file_chooser_list_shortcut_folders gtk_file_chooser_list_shortcut_folders_utf8
#endif
#endif
