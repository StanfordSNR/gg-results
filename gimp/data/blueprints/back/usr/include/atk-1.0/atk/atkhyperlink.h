// GGHASH:VLYYTUWoYuOMX_75rkAd6mrz6oqj08hp64ZANfjL4uZ80000103d
#ifndef __ATK_HYPERLINK_H__
#define __ATK_HYPERLINK_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkaction.h>
#define ATK_TYPE_HYPERLINK (atk_hyperlink_get_type ())
#define ATK_HYPERLINK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_HYPERLINK, AtkHyperlink))
#define ATK_HYPERLINK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_HYPERLINK, AtkHyperlinkClass))
#define ATK_IS_HYPERLINK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_HYPERLINK))
#define ATK_IS_HYPERLINK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_HYPERLINK))
#define ATK_HYPERLINK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_HYPERLINK, AtkHyperlinkClass))
#endif
