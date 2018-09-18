// GGHASH:Vn3amsN33LFIG_xWIPxOqjf5KSyh7cB6QWlKWtprsruQ000012f8
#ifndef __ATK_STREAMABLE_CONTENT_H__
#define __ATK_STREAMABLE_CONTENT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_STREAMABLE_CONTENT (atk_streamable_content_get_type ())
#define ATK_IS_STREAMABLE_CONTENT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_STREAMABLE_CONTENT)
#define ATK_STREAMABLE_CONTENT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_STREAMABLE_CONTENT, AtkStreamableContent)
#define ATK_STREAMABLE_CONTENT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_STREAMABLE_CONTENT, AtkStreamableContentIface))
#ifndef _TYPEDEF_ATK_STREAMABLE_CONTENT
#define _TYPEDEF_ATK_STREAMABLE_CONTENT 
#endif
#endif
