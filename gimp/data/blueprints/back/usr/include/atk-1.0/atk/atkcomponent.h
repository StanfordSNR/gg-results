// GGHASH:V9vTlxO_rKrHsjKgPusJchCDuSzcLGWHIRtd8sqSSBLQ00002b2b
#ifndef __ATK_COMPONENT_H__
#define __ATK_COMPONENT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atkutil.h>
#define ATK_TYPE_COMPONENT (atk_component_get_type ())
#define ATK_IS_COMPONENT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_COMPONENT)
#define ATK_COMPONENT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_COMPONENT, AtkComponent)
#define ATK_COMPONENT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_COMPONENT, AtkComponentIface))
#ifndef _TYPEDEF_ATK_COMPONENT_
#define _TYPEDEF_ATK_COMPONENT_ 
#endif
#define ATK_TYPE_RECTANGLE (atk_rectangle_get_type ())
#endif
