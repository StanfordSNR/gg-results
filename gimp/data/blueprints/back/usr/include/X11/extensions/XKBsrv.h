// GGHASH:VycHAFF1W0no7SQRCx.Ki5.tC9n.cTgds8ixaFZY0O5k00006d7d
#ifndef _XKBSRV_H_
#define _XKBSRV_H_ 
#ifdef XKB_IN_SERVER
#define XkbAllocClientMap SrvXkbAllocClientMap
#define XkbAllocServerMap SrvXkbAllocServerMap
#define XkbChangeTypesOfKey SrvXkbChangeTypesOfKey
#define XkbAddKeyType SrvXkbAddKeyType
#define XkbCopyKeyType SrvXkbCopyKeyType
#define XkbCopyKeyTypes SrvXkbCopyKeyTypes
#define XkbFreeClientMap SrvXkbFreeClientMap
#define XkbFreeServerMap SrvXkbFreeServerMap
#define XkbInitCanonicalKeyTypes SrvXkbInitCanonicalKeyTypes
#define XkbKeyTypesForCoreSymbols SrvXkbKeyTypesForCoreSymbols
#define XkbApplyCompatMapToKey SrvXkbApplyCompatMapToKey
#define XkbUpdateMapFromCore SrvXkbUpdateMapFromCore
#define XkbResizeKeyActions SrvXkbResizeKeyActions
#define XkbResizeKeySyms SrvXkbResizeKeySyms
#define XkbResizeKeyType SrvXkbResizeKeyType
#define XkbAllocCompatMap SrvXkbAllocCompatMap
#define XkbAllocControls SrvXkbAllocControls
#define XkbAllocIndicatorMaps SrvXkbAllocIndicatorMaps
#define XkbAllocKeyboard SrvXkbAllocKeyboard
#define XkbAllocNames SrvXkbAllocNames
#define XkbFreeCompatMap SrvXkbFreeCompatMap
#define XkbFreeControls SrvXkbFreeControls
#define XkbFreeIndicatorMaps SrvXkbFreeIndicatorMaps
#define XkbFreeKeyboard SrvXkbFreeKeyboard
#define XkbFreeNames SrvXkbFreeNames
#define XkbAddDeviceLedInfo SrvXkbAddDeviceLedInfo
#define XkbAllocDeviceInfo SrvXkbAllocDeviceInfo
#define XkbFreeDeviceInfo SrvXkbFreeDeviceInfo
#define XkbResizeDeviceButtonActions SrvXkbResizeDeviceButtonActions
#define XkbLatchModifiers SrvXkbLatchModifiers
#define XkbLatchGroup SrvXkbLatchGroup
#define XkbVirtualModsToReal SrvXkbVirtualModsToReal
#define XkbChangeKeycodeRange SrvXkbChangeKeycodeRange
#define XkbApplyVirtualModChanges SrvXkbApplyVirtualModChanges
#define XkbUpdateActionVirtualMods SrvXkbUpdateActionVirtualMods
#define XkbUpdateKeyTypeVirtualMods SrvXkbUpdateKeyTypeVirtualMods
#endif
#include <X11/extensions/XKBstr.h>
#include <X11/extensions/XKBproto.h>
#include "inputstr.h"
#define XkbSetCauseKey(c,k,e) { (c)->kc= (k),(c)->event= (e), (c)->mjr= (c)->mnr= 0; (c)->client= NULL; }
#define XkbSetCauseReq(c,j,n,cl) { (c)->kc= (c)->event= 0, (c)->mjr= (j),(c)->mnr= (n); (c)->client= (cl); }
#define XkbSetCauseCoreReq(c,e,cl) XkbSetCauseReq(c,e,0,cl)
#define XkbSetCauseXkbReq(c,e,cl) XkbSetCauseReq(c,XkbReqCode,e,cl)
#define XkbSetCauseUnknown(c) XkbSetCauseKey(c,0,0)
#define _OFF_TIMER 0
#define _KRG_WARN_TIMER 1
#define _KRG_TIMER 2
#define _SK_TIMEOUT_TIMER 3
#define _ALL_TIMEOUT_TIMER 4
#define _BEEP_NONE 0
#define _BEEP_FEATURE_ON 1
#define _BEEP_FEATURE_OFF 2
#define _BEEP_FEATURE_CHANGE 3
#define _BEEP_SLOW_WARN 4
#define _BEEP_SLOW_PRESS 5
#define _BEEP_SLOW_ACCEPT 6
#define _BEEP_SLOW_REJECT 7
#define _BEEP_SLOW_RELEASE 8
#define _BEEP_STICKY_LATCH 9
#define _BEEP_STICKY_LOCK 10
#define _BEEP_STICKY_UNLOCK 11
#define _BEEP_LED_ON 12
#define _BEEP_LED_OFF 13
#define _BEEP_LED_CHANGE 14
#define _BEEP_BOUNCE_REJECT 15
#define XkbSLI_IsDefault (1L<<0)
#define XkbSLI_HasOwnState (1L<<1)
#define _XkbClientInitialized (1<<15)
#define _XkbWantsDetectableAutoRepeat(c) ((c)->xkbClientFlags&XkbPCF_DetectableAutoRepeatMask)
#define _XkbStateNotifyInProgress (1<<0)
#define WRAP_PROCESS_INPUT_PROC(device,oldprocs,proc,unwrapproc) device->public.processInputProc = proc; oldprocs->processInputProc = oldprocs->realInputProc = device->public.realInputProc; device->public.realInputProc = proc; oldprocs->unwrapProc = device->unwrapProc; device->unwrapProc = unwrapproc;
#define COND_WRAP_PROCESS_INPUT_PROC(device,oldprocs,proc,unwrapproc) if (device->public.processInputProc == device->public.realInputProc) device->public.processInputProc = proc; oldprocs->processInputProc = oldprocs->realInputProc = device->public.realInputProc; device->public.realInputProc = proc; oldprocs->unwrapProc = device->unwrapProc; device->unwrapProc = unwrapproc;
#define UNWRAP_PROCESS_INPUT_PROC(device,oldprocs) device->public.processInputProc = oldprocs->processInputProc; device->public.realInputProc = oldprocs->realInputProc; device->unwrapProc = oldprocs->unwrapProc;
#define XKBDEVICEINFO(dev) ((xkbDeviceInfoPtr) (dev)->devPrivates[xkbDevicePrivateIndex].ptr)
#define XkbAX_KRGMask (XkbSlowKeysMask|XkbBounceKeysMask)
#define XkbAllFilteredEventsMask (XkbAccessXKeysMask|XkbRepeatKeysMask|XkbMouseKeysAccelMask|XkbAX_KRGMask)
#define _XkbAlloc(s) xalloc((s))
#define _XkbCalloc(n,s) Xcalloc((n)*(s))
#define _XkbRealloc(o,s) Xrealloc((o),(s))
#define _XkbTypedAlloc(t) ((t *)xalloc(sizeof(t)))
#define _XkbTypedCalloc(n,t) ((t *)Xcalloc((n)*sizeof(t)))
#define _XkbTypedRealloc(o,n,t) ((o)?(t *)Xrealloc((o),(n)*sizeof(t)):_XkbTypedCalloc(n,t))
#define _XkbClearElems(a,f,l,t) bzero(&(a)[f],((l)-(f)+1)*sizeof(t))
#define _XkbFree(p) Xfree(p)
#define _XkbLibError(c,l,d) { _XkbErrCode= (c); _XkbErrLocation= (l); _XkbErrData= (d); }
#define _XkbErrCode2(a,b) ((XID)((((unsigned int)(a))<<24)|((b)&0xffffff)))
#define _XkbErrCode3(a,b,c) _XkbErrCode2(a,(((unsigned int)(b))<<16)|(c))
#define _XkbErrCode4(a,b,c,d) _XkbErrCode3(a,b,((((unsigned int)(c))<<8)|(d)))
#ifdef XINPUT
#define _XkbIsPressEvent(t) (((t)==KeyPress)||((t)==DeviceKeyPress))
#define _XkbIsReleaseEvent(t) (((t)==KeyRelease)||((t)==DeviceKeyRelease))
#else
#define _XkbIsPressEvent(t) ((t)==KeyPress)
#define _XkbIsReleaseEvent(t) ((t)==KeyRelease)
#endif
#define _XkbCoreKeycodeInRange(c,k) (((k)>=(c)->curKeySyms.minKeyCode)&& ((k)<=(c)->curKeySyms.maxKeyCode))
#define _XkbCoreNumKeys(c) ((c)->curKeySyms.maxKeyCode- (c)->curKeySyms.minKeyCode+1)
#define XConvertCase(s,l,u) XkbConvertCase(s,l,u)
#undef IsKeypadKey
#define IsKeypadKey(s) XkbKSIsKeypad(s)
#ifndef True
#define True 1
#define False 0
#endif
#ifndef PATH_MAX
#ifdef MAXPATHLEN
#define PATH_MAX MAXPATHLEN
#else
#define PATH_MAX 1024
#endif
#endif
#ifdef XKBSRV_NEED_FILE_FUNCS
#include <X11/extensions/XKMformat.h>
#include <X11/extensions/XKBfile.h>
#include <X11/extensions/XKBrules.h>
#define _XkbListKeymaps 0
#define _XkbListKeycodes 1
#define _XkbListTypes 2
#define _XkbListCompat 3
#define _XkbListSymbols 4
#define _XkbListGeometry 5
#define _XkbListNumComponents 6
#endif
#define XkbAtomGetString(d,s) NameForAtom(s)
#endif
