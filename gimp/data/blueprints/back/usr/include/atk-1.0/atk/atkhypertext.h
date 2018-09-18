// GGHASH:VMSRA50qLKK.0YOPuCilqp.HX32WxpjDgFMW_RtliTTs00000b7f
#ifndef __ATK_HYPERTEXT_H__
#define __ATK_HYPERTEXT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atkhyperlink.h>
#define ATK_TYPE_HYPERTEXT (atk_hypertext_get_type ())
#define ATK_IS_HYPERTEXT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_HYPERTEXT)
#define ATK_HYPERTEXT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_HYPERTEXT, AtkHypertext)
#define ATK_HYPERTEXT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_HYPERTEXT, AtkHypertextIface))
#ifndef _TYPEDEF_ATK_HYPERTEXT_
#define _TYPEDEF_ATK_HYPERTEXT_ 
#endif
#endif
