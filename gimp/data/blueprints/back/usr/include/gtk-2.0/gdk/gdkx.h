// GGHASH:V597T.843ltfsX.USmZzLO859Cj4B0iPhRuvSZT6H_lQ00002db5
#ifndef __GDK_X_H__
#define __GDK_X_H__ 
#include <gdk/gdkprivate.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#if (!defined (GDK_DISABLE_DEPRECATED) && !defined (GDK_MULTIHEAD_SAFE)) || defined (GDK_COMPILATION)
#endif
#if !defined(GDK_DISABLE_DEPRECATED) || defined(GDK_COMPILATION)
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#define GDK_COLORMAP_XDISPLAY(cmap) (gdk_x11_colormap_get_xdisplay (cmap))
#define GDK_COLORMAP_XCOLORMAP(cmap) (gdk_x11_colormap_get_xcolormap (cmap))
#define GDK_CURSOR_XDISPLAY(cursor) (gdk_x11_cursor_get_xdisplay (cursor))
#define GDK_CURSOR_XCURSOR(cursor) (gdk_x11_cursor_get_xcursor (cursor))
#define GDK_IMAGE_XDISPLAY(image) (gdk_x11_image_get_xdisplay (image))
#define GDK_IMAGE_XIMAGE(image) (gdk_x11_image_get_ximage (image))
#if (!defined (GDK_DISABLE_DEPRECATED) && !defined (GDK_MULTIHEAD_SAFE)) || defined (GDK_COMPILATION)
#define GDK_DISPLAY() gdk_display
#endif
#ifdef GDK_COMPILATION
#include "gdkprivate-x11.h"
#include "gdkscreen-x11.h"
#define GDK_DISPLAY_XDISPLAY(display) (GDK_DISPLAY_X11(display)->xdisplay)
#define GDK_WINDOW_XDISPLAY(win) (GDK_SCREEN_X11 (GDK_WINDOW_SCREEN (win))->xdisplay)
#define GDK_WINDOW_XID(win) (GDK_DRAWABLE_IMPL_X11(((GdkWindowObject *)win)->impl)->xid)
#define GDK_PIXMAP_XDISPLAY(pix) (GDK_SCREEN_X11 (GDK_PIXMAP_SCREEN (pix))->xdisplay)
#define GDK_PIXMAP_XID(pix) (GDK_DRAWABLE_IMPL_X11(((GdkPixmapObject *)pix)->impl)->xid)
#define GDK_DRAWABLE_XDISPLAY(win) (GDK_IS_WINDOW (win) ? GDK_WINDOW_XDISPLAY (win) : GDK_PIXMAP_XDISPLAY (win))
#define GDK_DRAWABLE_XID(win) (GDK_IS_WINDOW (win) ? GDK_WINDOW_XID (win) : GDK_PIXMAP_XID (win))
#define GDK_GC_XDISPLAY(gc) (GDK_SCREEN_XDISPLAY(GDK_GC_X11(gc)->screen))
#define GDK_GC_XGC(gc) (GDK_GC_X11(gc)->xgc)
#define GDK_SCREEN_XDISPLAY(screen) (GDK_SCREEN_X11 (screen)->xdisplay)
#define GDK_SCREEN_XSCREEN(screen) (GDK_SCREEN_X11 (screen)->xscreen)
#define GDK_SCREEN_XNUMBER(screen) (GDK_SCREEN_X11 (screen)->screen_num)
#define GDK_VISUAL_XVISUAL(vis) (((GdkVisualPrivate *) vis)->xvisual)
#define GDK_GC_GET_XGC(gc) (GDK_GC_X11(gc)->dirty_mask ? _gdk_x11_gc_flush (gc) : ((GdkGCX11 *)(gc))->xgc)
#define GDK_WINDOW_XWINDOW GDK_DRAWABLE_XID
#else
#ifndef GDK_MULTIHEAD_SAFE
#define GDK_ROOT_WINDOW() (gdk_x11_get_default_root_xwindow ())
#endif
#define GDK_DISPLAY_XDISPLAY(display) (gdk_x11_display_get_xdisplay (display))
#define GDK_WINDOW_XDISPLAY(win) (gdk_x11_drawable_get_xdisplay (gdk_x11_window_get_drawable_impl (win)))
#define GDK_WINDOW_XID(win) (gdk_x11_drawable_get_xid (win))
#define GDK_WINDOW_XWINDOW(win) (gdk_x11_drawable_get_xid (win))
#define GDK_PIXMAP_XDISPLAY(win) (gdk_x11_drawable_get_xdisplay (gdk_x11_pixmap_get_drawable_impl (win)))
#define GDK_PIXMAP_XID(win) (gdk_x11_drawable_get_xid (win))
#define GDK_DRAWABLE_XDISPLAY(win) (gdk_x11_drawable_get_xdisplay (win))
#define GDK_DRAWABLE_XID(win) (gdk_x11_drawable_get_xid (win))
#define GDK_GC_XDISPLAY(gc) (gdk_x11_gc_get_xdisplay (gc))
#define GDK_GC_XGC(gc) (gdk_x11_gc_get_xgc (gc))
#define GDK_SCREEN_XDISPLAY(screen) (gdk_x11_display_get_xdisplay (gdk_screen_get_display (screen)))
#define GDK_SCREEN_XSCREEN(screen) (gdk_x11_screen_get_xscreen (screen))
#define GDK_SCREEN_XNUMBER(screen) (gdk_x11_screen_get_screen_number (screen))
#define GDK_VISUAL_XVISUAL(visual) (gdk_x11_visual_get_xvisual (visual))
#endif
#ifndef GDK_DISABLE_DEPRECATED
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
#ifdef GDK_ENABLE_BROKEN
#endif
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#ifndef GDK_MULTIHEAD_SAFE
#ifndef GDK_DISABLE_DEPRECATED
#endif
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#if !defined(GDK_DISABLE_DEPRECATED) || defined(GDK_COMPILATION)
#define GDK_FONT_XFONT(font) (gdk_x11_font_get_xfont (font))
#define gdk_font_lookup_for_display(display,xid) ((GdkFont*) gdk_xid_table_lookup_for_display (display, ((xid)|XID_FONT_BIT)))
#endif
#ifndef GDK_DISABLE_DEPRECATED
#define GDK_FONT_XDISPLAY(font) (gdk_x11_font_get_xdisplay (font))
#ifndef GDK_MULTIHEAD_SAFE
#define gdk_font_lookup(xid) ((GdkFont*) gdk_xid_table_lookup (xid))
#endif
#endif
#endif
