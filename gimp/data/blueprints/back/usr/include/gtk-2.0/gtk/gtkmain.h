// GGHASH:Vahbu.n6QMTBW8k0qyFtJ4GMkwAXhVD34_IHPFodafvs00001ea2
#ifndef __GTK_MAIN_H__
#define __GTK_MAIN_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkwidget.h>
#ifdef G_PLATFORM_WIN32
#include <gtk/gtkbox.h>
#include <gtk/gtkwindow.h>
#endif
#define GTK_PRIORITY_RESIZE (G_PRIORITY_HIGH_IDLE + 10)
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_PRIORITY_REDRAW (G_PRIORITY_HIGH_IDLE + 20)
#define GTK_PRIORITY_HIGH G_PRIORITY_HIGH
#define GTK_PRIORITY_INTERNAL GTK_PRIORITY_REDRAW
#define GTK_PRIORITY_DEFAULT G_PRIORITY_DEFAULT_IDLE
#define GTK_PRIORITY_LOW G_PRIORITY_LOW
#endif
#ifdef G_PLATFORM_WIN32
#ifdef GTK_COMPILATION
#define GTKMAIN_C_VAR __declspec(dllexport)
#else
#define GTKMAIN_C_VAR extern __declspec(dllimport)
#endif
#else
#define GTKMAIN_C_VAR extern
#endif
#ifdef G_PLATFORM_WIN32
#define gtk_init(argc,argv) gtk_init_abi_check (argc, argv, 2, sizeof (GtkWindow), sizeof (GtkBox))
#define gtk_init_check(argc,argv) gtk_init_check_abi_check (argc, argv, 2, sizeof (GtkWindow), sizeof (GtkBox))
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#endif
