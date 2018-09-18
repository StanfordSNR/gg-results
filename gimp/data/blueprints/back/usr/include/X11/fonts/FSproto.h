// GGHASH:VX8mMvVxB8hiMh7gj2fLMBW91v41FMjKdes2nG.0h4eM00005013
#ifndef _FS_PROTO_H_
#define _FS_PROTO_H_ 
#include <X11/fonts/FS.h>
#define sz_fsPropOffset 20
#define sz_fsPropInfo 8
#define sz_fsResolution 6
#define sz_fsChar2b 2
#define sz_fsChar2b_version1 2
#define sz_fsOffset32 8
#define sz_fsRange 4
#define sz_fsXCharInfo 12
#define sz_fsXFontInfoHeader 40
#define sz_fsConnClientPrefix 8
#define sz_fsConnSetup 12
#define sz_fsConnSetupExtra 8
#define sz_fsConnSetupAccept 12
#define sz_fsReq 4
#define sz_fsListExtensionsReq 4
#define sz_fsResourceReq 8
#define sz_fsNoopReq 4
#define sz_fsListExtensionReq 4
#define sz_fsQueryExtensionReq 4
#define sz_fsListCataloguesReq 12
#define sz_fsSetCataloguesReq 4
#define sz_fsGetCataloguesReq 4
#define sz_fsSetEventMaskReq 8
#define sz_fsGetEventMaskReq 4
#define sz_fsCreateACReq 8
#define sz_fsFreeACReq 8
#define sz_fsSetAuthorizationReq 8
#define sz_fsSetResolutionReq 4
#define sz_fsGetResolutionReq 4
#define sz_fsListFontsReq 12
#define sz_fsListFontsWithXInfoReq 12
#define sz_fsOpenBitmapFontReq 16
#define sz_fsQueryXInfoReq 8
#define sz_fsQueryXExtents8Req 12
#define sz_fsQueryXExtents16Req 12
#define sz_fsQueryXBitmaps8Req 16
#define sz_fsQueryXBitmaps16Req 16
#define sz_fsCloseReq 8
#define sz_fsReply 8
#define sz_fsGenericReply 8
#define sz_fsListExtensionsReply 8
#define sz_fsQueryExtensionReply 20
#define sz_fsListCataloguesReply 16
#define sz_fsGetCataloguesReply 8
#define sz_fsGetEventMaskReply 12
#define sz_fsCreateACReply 12
#define sz_fsGetResolutionReply 8
#define sz_fsListFontsReply 16
#define sz_fsListFontsWithXInfoReply (12 + sz_fsXFontInfoHeader)
#define sz_fsOpenBitmapFontReply 16
#define sz_fsQueryXInfoReply (8 + sz_fsXFontInfoHeader)
#define sz_fsQueryXExtents8Reply 12
#define sz_fsQueryXExtents16Reply 12
#define sz_fsQueryXBitmaps8Reply 20
#define sz_fsQueryXBitmaps16Reply 20
#define sz_fsError 16
#define sz_fsEvent 12
#define sz_fsKeepAliveEvent 12
#define fsTrue 1
#define fsFalse 0
#define Mask CARD32
#define Font CARD32
#define AccContext CARD32
#ifdef NOTDEF
#endif
#define sz_fsBitmapFormat 4
#define FS_Reply 0
#define FS_Error 1
#define FS_Event 2
#define FS_Noop 0
#define FS_ListExtensions 1
#define FS_QueryExtension 2
#define FS_ListCatalogues 3
#define FS_SetCatalogues 4
#define FS_GetCatalogues 5
#define FS_SetEventMask 6
#define FS_GetEventMask 7
#define FS_CreateAC 8
#define FS_FreeAC 9
#define FS_SetAuthorization 10
#define FS_SetResolution 11
#define FS_GetResolution 12
#define FS_ListFonts 13
#define FS_ListFontsWithXInfo 14
#define FS_OpenBitmapFont 15
#define FS_QueryXInfo 16
#define FS_QueryXExtents8 17
#define FS_QueryXExtents16 18
#define FS_QueryXBitmaps8 19
#define FS_QueryXBitmaps16 20
#define FS_CloseFont 21
#undef Mask
#undef Font
#undef AccContext
#endif
