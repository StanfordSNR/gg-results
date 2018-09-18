// GGHASH:V58fHmLBqYAZw6go6mhf6snNjyZmfBRPTDjiLDFAiUHw0000de7f
#ifndef XPROTO_H
#define XPROTO_H 
#include <X11/Xmd.h>
#include <X11/Xprotostr.h>
#define sz_xSegment 8
#define sz_xPoint 4
#define sz_xRectangle 8
#define sz_xArc 12
#define sz_xConnClientPrefix 12
#define sz_xConnSetupPrefix 8
#define sz_xConnSetup 32
#define sz_xPixmapFormat 8
#define sz_xDepth 8
#define sz_xVisualType 24
#define sz_xWindowRoot 40
#define sz_xTimecoord 8
#define sz_xHostEntry 4
#define sz_xCharInfo 12
#define sz_xFontProp 8
#define sz_xTextElt 2
#define sz_xColorItem 12
#define sz_xrgb 8
#define sz_xGenericReply 32
#define sz_xGetWindowAttributesReply 44
#define sz_xGetGeometryReply 32
#define sz_xQueryTreeReply 32
#define sz_xInternAtomReply 32
#define sz_xGetAtomNameReply 32
#define sz_xGetPropertyReply 32
#define sz_xListPropertiesReply 32
#define sz_xGetSelectionOwnerReply 32
#define sz_xGrabPointerReply 32
#define sz_xQueryPointerReply 32
#define sz_xGetMotionEventsReply 32
#define sz_xTranslateCoordsReply 32
#define sz_xGetInputFocusReply 32
#define sz_xQueryKeymapReply 40
#define sz_xQueryFontReply 60
#define sz_xQueryTextExtentsReply 32
#define sz_xListFontsReply 32
#define sz_xGetFontPathReply 32
#define sz_xGetImageReply 32
#define sz_xListInstalledColormapsReply 32
#define sz_xAllocColorReply 32
#define sz_xAllocNamedColorReply 32
#define sz_xAllocColorCellsReply 32
#define sz_xAllocColorPlanesReply 32
#define sz_xQueryColorsReply 32
#define sz_xLookupColorReply 32
#define sz_xQueryBestSizeReply 32
#define sz_xQueryExtensionReply 32
#define sz_xListExtensionsReply 32
#define sz_xSetMappingReply 32
#define sz_xGetKeyboardControlReply 52
#define sz_xGetPointerControlReply 32
#define sz_xGetScreenSaverReply 32
#define sz_xListHostsReply 32
#define sz_xSetModifierMappingReply 32
#define sz_xError 32
#define sz_xEvent 32
#define sz_xKeymapEvent 32
#define sz_xReq 4
#define sz_xResourceReq 8
#define sz_xCreateWindowReq 32
#define sz_xChangeWindowAttributesReq 12
#define sz_xChangeSaveSetReq 8
#define sz_xReparentWindowReq 16
#define sz_xConfigureWindowReq 12
#define sz_xCirculateWindowReq 8
#define sz_xInternAtomReq 8
#define sz_xChangePropertyReq 24
#define sz_xDeletePropertyReq 12
#define sz_xGetPropertyReq 24
#define sz_xSetSelectionOwnerReq 16
#define sz_xConvertSelectionReq 24
#define sz_xSendEventReq 44
#define sz_xGrabPointerReq 24
#define sz_xGrabButtonReq 24
#define sz_xUngrabButtonReq 12
#define sz_xChangeActivePointerGrabReq 16
#define sz_xGrabKeyboardReq 16
#define sz_xGrabKeyReq 16
#define sz_xUngrabKeyReq 12
#define sz_xAllowEventsReq 8
#define sz_xGetMotionEventsReq 16
#define sz_xTranslateCoordsReq 16
#define sz_xWarpPointerReq 24
#define sz_xSetInputFocusReq 12
#define sz_xOpenFontReq 12
#define sz_xQueryTextExtentsReq 8
#define sz_xListFontsReq 8
#define sz_xSetFontPathReq 8
#define sz_xCreatePixmapReq 16
#define sz_xCreateGCReq 16
#define sz_xChangeGCReq 12
#define sz_xCopyGCReq 16
#define sz_xSetDashesReq 12
#define sz_xSetClipRectanglesReq 12
#define sz_xCopyAreaReq 28
#define sz_xCopyPlaneReq 32
#define sz_xPolyPointReq 12
#define sz_xPolySegmentReq 12
#define sz_xFillPolyReq 16
#define sz_xPutImageReq 24
#define sz_xGetImageReq 20
#define sz_xPolyTextReq 16
#define sz_xImageTextReq 16
#define sz_xCreateColormapReq 16
#define sz_xCopyColormapAndFreeReq 12
#define sz_xAllocColorReq 16
#define sz_xAllocNamedColorReq 12
#define sz_xAllocColorCellsReq 12
#define sz_xAllocColorPlanesReq 16
#define sz_xFreeColorsReq 12
#define sz_xStoreColorsReq 8
#define sz_xStoreNamedColorReq 16
#define sz_xQueryColorsReq 8
#define sz_xLookupColorReq 12
#define sz_xCreateCursorReq 32
#define sz_xCreateGlyphCursorReq 32
#define sz_xRecolorCursorReq 20
#define sz_xQueryBestSizeReq 12
#define sz_xQueryExtensionReq 8
#define sz_xChangeKeyboardControlReq 8
#define sz_xBellReq 4
#define sz_xChangePointerControlReq 12
#define sz_xSetScreenSaverReq 12
#define sz_xChangeHostsReq 8
#define sz_xListHostsReq 4
#define sz_xChangeModeReq 4
#define sz_xRotatePropertiesReq 12
#define sz_xReply 32
#define sz_xGrabKeyboardReply 32
#define sz_xListFontsWithInfoReply 60
#define sz_xSetPointerMappingReply 32
#define sz_xGetKeyboardMappingReply 32
#define sz_xGetPointerMappingReply 32
#define sz_xGetModifierMappingReply 32
#define sz_xListFontsWithInfoReq 8
#define sz_xPolyLineReq 12
#define sz_xPolyArcReq 12
#define sz_xPolyRectangleReq 12
#define sz_xPolyFillRectangleReq 12
#define sz_xPolyFillArcReq 12
#define sz_xPolyText8Req 16
#define sz_xPolyText16Req 16
#define sz_xImageText8Req 16
#define sz_xImageText16Req 16
#define sz_xSetPointerMappingReq 4
#define sz_xForceScreenSaverReq 4
#define sz_xSetCloseDownModeReq 4
#define sz_xClearAreaReq 16
#define sz_xSetAccessControlReq 4
#define sz_xGetKeyboardMappingReq 8
#define sz_xSetModifierMappingReq 4
#define sz_xPropIconSize 24
#define sz_xChangeKeyboardMappingReq 8
#define Window CARD32
#define Drawable CARD32
#define Font CARD32
#define Pixmap CARD32
#define Cursor CARD32
#define Colormap CARD32
#define GContext CARD32
#define Atom CARD32
#define VisualID CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32
#define X_TCP_PORT 6000
#define xTrue 1
#define xFalse 0
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define ELFlagFocus (1<<0)
#define ELFlagSameScreen (1<<1)
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define XEventSize (sizeof(xEvent))
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define X_Reply 1
#define X_Error 0
#define X_CreateWindow 1
#define X_ChangeWindowAttributes 2
#define X_GetWindowAttributes 3
#define X_DestroyWindow 4
#define X_DestroySubwindows 5
#define X_ChangeSaveSet 6
#define X_ReparentWindow 7
#define X_MapWindow 8
#define X_MapSubwindows 9
#define X_UnmapWindow 10
#define X_UnmapSubwindows 11
#define X_ConfigureWindow 12
#define X_CirculateWindow 13
#define X_GetGeometry 14
#define X_QueryTree 15
#define X_InternAtom 16
#define X_GetAtomName 17
#define X_ChangeProperty 18
#define X_DeleteProperty 19
#define X_GetProperty 20
#define X_ListProperties 21
#define X_SetSelectionOwner 22
#define X_GetSelectionOwner 23
#define X_ConvertSelection 24
#define X_SendEvent 25
#define X_GrabPointer 26
#define X_UngrabPointer 27
#define X_GrabButton 28
#define X_UngrabButton 29
#define X_ChangeActivePointerGrab 30
#define X_GrabKeyboard 31
#define X_UngrabKeyboard 32
#define X_GrabKey 33
#define X_UngrabKey 34
#define X_AllowEvents 35
#define X_GrabServer 36
#define X_UngrabServer 37
#define X_QueryPointer 38
#define X_GetMotionEvents 39
#define X_TranslateCoords 40
#define X_WarpPointer 41
#define X_SetInputFocus 42
#define X_GetInputFocus 43
#define X_QueryKeymap 44
#define X_OpenFont 45
#define X_CloseFont 46
#define X_QueryFont 47
#define X_QueryTextExtents 48
#define X_ListFonts 49
#define X_ListFontsWithInfo 50
#define X_SetFontPath 51
#define X_GetFontPath 52
#define X_CreatePixmap 53
#define X_FreePixmap 54
#define X_CreateGC 55
#define X_ChangeGC 56
#define X_CopyGC 57
#define X_SetDashes 58
#define X_SetClipRectangles 59
#define X_FreeGC 60
#define X_ClearArea 61
#define X_CopyArea 62
#define X_CopyPlane 63
#define X_PolyPoint 64
#define X_PolyLine 65
#define X_PolySegment 66
#define X_PolyRectangle 67
#define X_PolyArc 68
#define X_FillPoly 69
#define X_PolyFillRectangle 70
#define X_PolyFillArc 71
#define X_PutImage 72
#define X_GetImage 73
#define X_PolyText8 74
#define X_PolyText16 75
#define X_ImageText8 76
#define X_ImageText16 77
#define X_CreateColormap 78
#define X_FreeColormap 79
#define X_CopyColormapAndFree 80
#define X_InstallColormap 81
#define X_UninstallColormap 82
#define X_ListInstalledColormaps 83
#define X_AllocColor 84
#define X_AllocNamedColor 85
#define X_AllocColorCells 86
#define X_AllocColorPlanes 87
#define X_FreeColors 88
#define X_StoreColors 89
#define X_StoreNamedColor 90
#define X_QueryColors 91
#define X_LookupColor 92
#define X_CreateCursor 93
#define X_CreateGlyphCursor 94
#define X_FreeCursor 95
#define X_RecolorCursor 96
#define X_QueryBestSize 97
#define X_QueryExtension 98
#define X_ListExtensions 99
#define X_ChangeKeyboardMapping 100
#define X_GetKeyboardMapping 101
#define X_ChangeKeyboardControl 102
#define X_GetKeyboardControl 103
#define X_Bell 104
#define X_ChangePointerControl 105
#define X_GetPointerControl 106
#define X_SetScreenSaver 107
#define X_GetScreenSaver 108
#define X_ChangeHosts 109
#define X_ListHosts 110
#define X_SetAccessControl 111
#define X_SetCloseDownMode 112
#define X_KillClient 113
#define X_RotateProperties 114
#define X_ForceScreenSaver 115
#define X_SetPointerMapping 116
#define X_GetPointerMapping 117
#define X_SetModifierMapping 118
#define X_GetModifierMapping 119
#define X_NoOperation 127
#undef Window
#undef Drawable
#undef Font
#undef Pixmap
#undef Cursor
#undef Colormap
#undef GContext
#undef Atom
#undef VisualID
#undef Time
#undef KeyCode
#undef KeySym
#endif
