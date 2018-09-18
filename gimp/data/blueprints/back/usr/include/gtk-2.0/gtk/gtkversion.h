// GGHASH:V8qkCTgHluur_NO78wwNTfO68rN95TjU3C0Rm6HvEdkg0000076c
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#ifndef __GTK_VERSION_H__
#define __GTK_VERSION_H__ 
#define GTK_MAJOR_VERSION (2)
#define GTK_MINOR_VERSION (24)
#define GTK_MICRO_VERSION (32)
#define GTK_BINARY_AGE (2432)
#define GTK_INTERFACE_AGE (32)
#define GTK_CHECK_VERSION(major,minor,micro) (GTK_MAJOR_VERSION > (major) || (GTK_MAJOR_VERSION == (major) && GTK_MINOR_VERSION > (minor)) || (GTK_MAJOR_VERSION == (major) && GTK_MINOR_VERSION == (minor) && GTK_MICRO_VERSION >= (micro)))
#endif
