// GGHASH:VvZ4wQO7VYQmx0ksxX4i8UwgpocfQ5DLg._rD52Owopw00001370
#ifndef __ATK_DOCUMENT_H__
#define __ATK_DOCUMENT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atkutil.h>
#define ATK_TYPE_DOCUMENT (atk_document_get_type ())
#define ATK_IS_DOCUMENT(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_DOCUMENT)
#define ATK_DOCUMENT(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_DOCUMENT, AtkDocument)
#define ATK_DOCUMENT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_DOCUMENT, AtkDocumentIface))
#ifndef _TYPEDEF_ATK_DOCUMENT_
#define _TYPEDEF_ATK_DOCUMENT_ 
#endif
#endif
