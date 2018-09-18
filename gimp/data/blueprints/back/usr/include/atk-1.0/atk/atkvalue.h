// GGHASH:Vm8.qM72yH0dlNJ.aITnJEuEDFWyss_QsiDIXYeFzTrE00001826
#ifndef __ATK_VALUE_H__
#define __ATK_VALUE_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atkrange.h>
#define ATK_TYPE_VALUE (atk_value_get_type ())
#define ATK_IS_VALUE(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_VALUE)
#define ATK_VALUE(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_VALUE, AtkValue)
#define ATK_VALUE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_VALUE, AtkValueIface))
#ifndef _TYPEDEF_ATK_VALUE_
#define _TYPEDEF_ATK_VALUE__ 
#endif
#endif
