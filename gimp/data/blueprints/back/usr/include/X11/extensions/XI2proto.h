// GGHASH:V.R._lz6qREgBl7336xidKoOfS.gUX14QjS8P3dRPG0o0000928e
#ifndef _XI2PROTO_H_
#define _XI2PROTO_H_ 
#include <X11/Xproto.h>
#include <X11/X.h>
#include <X11/extensions/XI2.h>
#include <stdint.h>
#define Window uint32_t
#define Time uint32_t
#define Atom uint32_t
#define Cursor uint32_t
#define Barrier uint32_t
#define X_XIQueryPointer 40
#define X_XIWarpPointer 41
#define X_XIChangeCursor 42
#define X_XIChangeHierarchy 43
#define X_XISetClientPointer 44
#define X_XIGetClientPointer 45
#define X_XISelectEvents 46
#define X_XIQueryVersion 47
#define X_XIQueryDevice 48
#define X_XISetFocus 49
#define X_XIGetFocus 50
#define X_XIGrabDevice 51
#define X_XIUngrabDevice 52
#define X_XIAllowEvents 53
#define X_XIPassiveGrabDevice 54
#define X_XIPassiveUngrabDevice 55
#define X_XIListProperties 56
#define X_XIChangeProperty 57
#define X_XIDeleteProperty 58
#define X_XIGetProperty 59
#define X_XIGetSelectedEvents 60
#define X_XIBarrierReleasePointer 61
#define XI2REQUESTS (X_XIBarrierReleasePointer - X_XIQueryPointer + 1)
#define XI2EVENTS (XI_LASTEVENT + 1)
#define sz_xXIQueryVersionReq 8
#define sz_xXIQueryVersionReply 32
#define sz_xXIQueryDeviceReq 8
#define sz_xXIQueryDeviceReply 32
#define sz_xXISelectEventsReq 12
#define sz_xXIGetSelectedEventsReq 8
#define sz_xXIGetSelectedEventsReply 32
#define sz_xXIQueryPointerReq 12
#define sz_xXIQueryPointerReply 56
#define sz_xXIWarpPointerReq 36
#define sz_xXIChangeCursorReq 16
#define sz_xXIChangeHierarchyReq 8
#define sz_xXISetClientPointerReq 12
#define sz_xXIGetClientPointerReq 8
#define sz_xXIGetClientPointerReply 32
#define sz_xXISetFocusReq 16
#define sz_xXIGetFocusReq 8
#define sz_xXIGetFocusReply 32
#define sz_xXIGrabDeviceReq 24
#define sz_xXIGrabDeviceReply 32
#define sz_xXIUngrabDeviceReq 12
#define sz_xXIAllowEventsReq 12
#define sz_xXI2_2AllowEventsReq 20
#define sz_xXIPassiveGrabDeviceReq 32
#define sz_xXIPassiveGrabDeviceReply 32
#define sz_xXIPassiveUngrabDeviceReq 20
#define sz_xXIListPropertiesReq 8
#define sz_xXIListPropertiesReply 32
#define sz_xXIChangePropertyReq 20
#define sz_xXIDeletePropertyReq 12
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#define sz_xXIGetPropertyReq 24
#define sz_xXIGetPropertyReply 32
#define sz_xXIBarrierReleasePointerReq 8
#undef Window
#undef Time
#undef Atom
#undef Cursor
#undef Barrier
#endif
