// GGHASH:VZh4yO.RGKqMvrJheXywfbDbhAmSArIwCkQh11ke9hjM00000849
#ifndef __ATK_PLUG_H__
#define __ATK_PLUG_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkversion.h>
#define ATK_TYPE_PLUG (atk_plug_get_type ())
#define ATK_PLUG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_PLUG, AtkPlug))
#define ATK_IS_PLUG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_PLUG))
#define ATK_PLUG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_PLUG, AtkPlugClass))
#define ATK_IS_PLUG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_PLUG))
#define ATK_PLUG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_PLUG, AtkPlugClass))
#endif
