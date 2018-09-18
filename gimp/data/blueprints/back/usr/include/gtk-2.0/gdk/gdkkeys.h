// GGHASH:VkkQWFYiKYClBEl15exbbUcoACsJU54G.Ffrt_3Js0l800001495
#ifndef __GDK_KEYS_H__
#define __GDK_KEYS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_KEYMAP (gdk_keymap_get_type ())
#define GDK_KEYMAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_KEYMAP, GdkKeymap))
#define GDK_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_KEYMAP, GdkKeymapClass))
#define GDK_IS_KEYMAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_KEYMAP))
#define GDK_IS_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_KEYMAP))
#define GDK_KEYMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_KEYMAP, GdkKeymapClass))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
