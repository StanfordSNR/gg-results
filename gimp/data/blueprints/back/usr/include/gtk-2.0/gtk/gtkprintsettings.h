// GGHASH:VDv1Eq9EJgGQDGDoG3YA8a3DIjyOZRr9uLEN5XllG1Tw0000340e
#ifndef __GTK_PRINT_SETTINGS_H__
#define __GTK_PRINT_SETTINGS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkpapersize.h>
#define GTK_TYPE_PRINT_SETTINGS (gtk_print_settings_get_type ())
#define GTK_PRINT_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_SETTINGS, GtkPrintSettings))
#define GTK_IS_PRINT_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_SETTINGS))
#define GTK_PRINT_SETTINGS_PRINTER "printer"
#define GTK_PRINT_SETTINGS_ORIENTATION "orientation"
#define GTK_PRINT_SETTINGS_PAPER_FORMAT "paper-format"
#define GTK_PRINT_SETTINGS_PAPER_WIDTH "paper-width"
#define GTK_PRINT_SETTINGS_PAPER_HEIGHT "paper-height"
#define GTK_PRINT_SETTINGS_N_COPIES "n-copies"
#define GTK_PRINT_SETTINGS_DEFAULT_SOURCE "default-source"
#define GTK_PRINT_SETTINGS_QUALITY "quality"
#define GTK_PRINT_SETTINGS_RESOLUTION "resolution"
#define GTK_PRINT_SETTINGS_USE_COLOR "use-color"
#define GTK_PRINT_SETTINGS_DUPLEX "duplex"
#define GTK_PRINT_SETTINGS_COLLATE "collate"
#define GTK_PRINT_SETTINGS_REVERSE "reverse"
#define GTK_PRINT_SETTINGS_MEDIA_TYPE "media-type"
#define GTK_PRINT_SETTINGS_DITHER "dither"
#define GTK_PRINT_SETTINGS_SCALE "scale"
#define GTK_PRINT_SETTINGS_PRINT_PAGES "print-pages"
#define GTK_PRINT_SETTINGS_PAGE_RANGES "page-ranges"
#define GTK_PRINT_SETTINGS_PAGE_SET "page-set"
#define GTK_PRINT_SETTINGS_FINISHINGS "finishings"
#define GTK_PRINT_SETTINGS_NUMBER_UP "number-up"
#define GTK_PRINT_SETTINGS_NUMBER_UP_LAYOUT "number-up-layout"
#define GTK_PRINT_SETTINGS_OUTPUT_BIN "output-bin"
#define GTK_PRINT_SETTINGS_RESOLUTION_X "resolution-x"
#define GTK_PRINT_SETTINGS_RESOLUTION_Y "resolution-y"
#define GTK_PRINT_SETTINGS_PRINTER_LPI "printer-lpi"
#define GTK_PRINT_SETTINGS_OUTPUT_FILE_FORMAT "output-file-format"
#define GTK_PRINT_SETTINGS_OUTPUT_URI "output-uri"
#define GTK_PRINT_SETTINGS_WIN32_DRIVER_VERSION "win32-driver-version"
#define GTK_PRINT_SETTINGS_WIN32_DRIVER_EXTRA "win32-driver-extra"
#endif
