// GGHASH:VPxezvaE9dOIjK1QD0PRkHCBEKARiKr0bkAPcliCtOIg000078aa
#ifndef _XKBPROTO_H_
#define _XKBPROTO_H_ 
#include <X11/Xmd.h>
#include <X11/extensions/XKB.h>
#define Window CARD32
#define Atom CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32
#define XkbPaddedSize(n) ((((unsigned int)(n)+3) >> 2) << 2)
#define sz_xkbUseExtensionReq 8
#define sz_xkbUseExtensionReply 32
#define sz_xkbSelectEventsReq 16
#define sz_xkbBellReq 28
#define sz_xkbGetStateReq 8
#define sz_xkbGetStateReply 32
#define sz_xkbLatchLockStateReq 16
#define sz_xkbGetControlsReq 8
#define sz_xkbGetControlsReply 92
#define sz_xkbSetControlsReq 100
#define sz_xkbKTMapEntryWireDesc 8
#define sz_xkbKTSetMapEntryWireDesc 4
#define sz_xkbModsWireDesc 4
#define sz_xkbKeyTypeWireDesc 8
#define sz_xkbSymMapWireDesc 8
#define sz_xkbVModMapWireDesc 4
#define sz_xkbBehaviorWireDesc 4
#define sz_xkbActionWireDesc 8
#define sz_xkbGetMapReq 28
#define sz_xkbGetMapReply 40
#define XkbSetMapResizeTypes (1L<<0)
#define XkbSetMapRecomputeActions (1L<<1)
#define XkbSetMapAllFlags (0x3)
#define sz_xkbSetMapReq 36
#define sz_xkbSymInterpretWireDesc 16
#define sz_xkbGetCompatMapReq 12
#define sz_xkbGetCompatMapReply 32
#define sz_xkbSetCompatMapReq 16
#define sz_xkbGetIndicatorStateReq 8
#define sz_xkbGetIndicatorStateReply 32
#define sz_xkbGetIndicatorMapReq 12
#define sz_xkbGetIndicatorMapReply 32
#define sz_xkbIndicatorMapWireDesc 12
#define sz_xkbSetIndicatorMapReq 12
#define sz_xkbGetNamedIndicatorReq 16
#define sz_xkbGetNamedIndicatorReply 32
#define sz_xkbSetNamedIndicatorReq 32
#define sz_xkbGetNamesReq 12
#define sz_xkbGetNamesReply 32
#define sz_xkbSetNamesReq 28
#define sz_xkbPointWireDesc 4
#define sz_xkbOutlineWireDesc 4
#define sz_xkbShapeWireDesc 8
#define sz_xkbSectionWireDesc 20
#define sz_xkbRowWireDesc 8
#define sz_xkbKeyWireDesc 8
#define sz_xkbOverlayWireDesc 8
#define sz_xkbOverlayRowWireDesc 4
#define sz_xkbOverlayKeyWireDesc 8
#define sz_xkbShapeDoodadWireDesc 20
#define sz_xkbTextDoodadWireDesc 20
#define sz_xkbIndicatorDoodadWireDesc 20
#define sz_xkbLogoDoodadWireDesc 20
#define sz_xkbAnyDoodadWireDesc 20
#define sz_xkbDoodadWireDesc 20
#define sz_xkbGetGeometryReq 12
#define sz_xkbGetGeometryReply 32
#define sz_xkbSetGeometryReq 28
#define sz_xkbPerClientFlagsReq 28
#define sz_xkbPerClientFlagsReply 32
#define sz_xkbListComponentsReq 8
#define sz_xkbListComponentsReply 32
#define sz_xkbGetKbdByNameReq 12
#define sz_xkbGetKbdByNameReply 32
#define sz_xkbDeviceLedsWireDesc 20
#define sz_xkbGetDeviceInfoReq 16
#define sz_xkbGetDeviceInfoReply 32
#define sz_xkbSetDeviceInfoReq 12
#define sz_xkbSetDebuggingFlagsReq 24
#define sz_xkbSetDebuggingFlagsReply 32
#define sz_xkbAnyEvent 32
#define sz_xkbNewKeyboardNotify 32
#define sz_xkbMapNotify 32
#define sz_xkbStateNotify 32
#define sz_xkbControlsNotify 32
#define sz_xkbIndicatorNotify 32
#define sz_xkbNamesNotify 32
#define sz_xkbCompatMapNotify 32
#define sz_xkbBellNotify 32
#define sz_xkbActionMessage 32
#define sz_xkbAccessXNotify 32
#define sz_xkbExtensionDeviceNotify 32
#define sz_xkbEvent 32
#undef Window
#undef Atom
#undef Time
#undef KeyCode
#undef KeySym
#endif
