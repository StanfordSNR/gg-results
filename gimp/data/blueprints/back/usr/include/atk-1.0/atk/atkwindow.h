// GGHASH:VkmXhtwVK.PuN0FZrUsc09nCDzb_5jC8v.k7QNZo0nA80000071d
#ifndef __ATK_WINDOW_H__
#define __ATK_WINDOW_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_WINDOW (atk_window_get_type ())
#define ATK_IS_WINDOW(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_WINDOW)
#define ATK_WINDOW(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_WINDOW, AtkWindow)
#define ATK_WINDOW_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_WINDOW, AtkWindowIface))
#endif
