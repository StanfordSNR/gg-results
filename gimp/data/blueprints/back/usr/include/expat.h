// GGHASH:VJ56VeBTgi0QeLyCk0Pu8FGq7frHFy.zND6_VOUfJ_ho0000a9f8
#ifndef Expat_INCLUDED
#define Expat_INCLUDED 1
#ifdef __VMS
#define XML_SetProcessingInstructionHandler XML_SetProcessingInstrHandler
#define XML_SetUnparsedEntityDeclHandler XML_SetUnparsedEntDeclHandler
#define XML_SetStartNamespaceDeclHandler XML_SetStartNamespcDeclHandler
#define XML_SetExternalEntityRefHandlerArg XML_SetExternalEntRefHandlerArg
#endif
#include <stdlib.h>
#include "expat_external.h"
#ifdef __cplusplus
#endif
#define XML_TRUE ((XML_Bool) 1)
#define XML_FALSE ((XML_Bool) 0)
#define XML_STATUS_ERROR XML_STATUS_ERROR
#define XML_STATUS_OK XML_STATUS_OK
#define XML_STATUS_SUSPENDED XML_STATUS_SUSPENDED
#define XML_GetUserData(parser) (*(void **)(parser))
#ifdef XML_ATTR_INFO
#endif
#define XML_GetErrorLineNumber XML_GetCurrentLineNumber
#define XML_GetErrorColumnNumber XML_GetCurrentColumnNumber
#define XML_GetErrorByteIndex XML_GetCurrentByteIndex
#define XML_MAJOR_VERSION 2
#define XML_MINOR_VERSION 2
#define XML_MICRO_VERSION 5
#ifdef __cplusplus
#endif
#endif
