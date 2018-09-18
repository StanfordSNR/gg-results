// GGHASH:VEmWItVuYKVXUAegtbNMvBxCku30lqo2sL10TY9wPL7g00008cae
#ifndef _XINPUT_H_
#define _XINPUT_H_ 
#include <X11/Xlib.h>
#include <X11/extensions/XI.h>
#define _deviceKeyPress 0
#define _deviceKeyRelease 1
#define _deviceButtonPress 0
#define _deviceButtonRelease 1
#define _deviceMotionNotify 0
#define _deviceFocusIn 0
#define _deviceFocusOut 1
#define _proximityIn 0
#define _proximityOut 1
#define _deviceStateNotify 0
#define _deviceMappingNotify 1
#define _changeDeviceNotify 2
#define _propertyNotify 6
#define FindTypeAndClass(d,type,_class,classid,offset) { int _i; XInputClassInfo *_ip; type = 0; _class = 0; for (_i=0, _ip= ((XDevice *) d)->classes; _i< ((XDevice *) d)->num_classes; _i++, _ip++) if (_ip->input_class == classid) {type = _ip->event_type_base + offset; _class = ((XDevice *) d)->device_id << 8 | type;}}
#define DeviceKeyPress(d,type,_class) FindTypeAndClass(d, type, _class, KeyClass, _deviceKeyPress)
#define DeviceKeyRelease(d,type,_class) FindTypeAndClass(d, type, _class, KeyClass, _deviceKeyRelease)
#define DeviceButtonPress(d,type,_class) FindTypeAndClass(d, type, _class, ButtonClass, _deviceButtonPress)
#define DeviceButtonRelease(d,type,_class) FindTypeAndClass(d, type, _class, ButtonClass, _deviceButtonRelease)
#define DeviceMotionNotify(d,type,_class) FindTypeAndClass(d, type, _class, ValuatorClass, _deviceMotionNotify)
#define DeviceFocusIn(d,type,_class) FindTypeAndClass(d, type, _class, FocusClass, _deviceFocusIn)
#define DeviceFocusOut(d,type,_class) FindTypeAndClass(d, type, _class, FocusClass, _deviceFocusOut)
#define ProximityIn(d,type,_class) FindTypeAndClass(d, type, _class, ProximityClass, _proximityIn)
#define ProximityOut(d,type,_class) FindTypeAndClass(d, type, _class, ProximityClass, _proximityOut)
#define DeviceStateNotify(d,type,_class) FindTypeAndClass(d, type, _class, OtherClass, _deviceStateNotify)
#define DeviceMappingNotify(d,type,_class) FindTypeAndClass(d, type, _class, OtherClass, _deviceMappingNotify)
#define ChangeDeviceNotify(d,type,_class) FindTypeAndClass(d, type, _class, OtherClass, _changeDeviceNotify)
#define DevicePropertyNotify(d,type,_class) FindTypeAndClass(d, type, _class, OtherClass, _propertyNotify)
#define DevicePointerMotionHint(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _devicePointerMotionHint;}
#define DeviceButton1Motion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButton1Motion;}
#define DeviceButton2Motion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButton2Motion;}
#define DeviceButton3Motion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButton3Motion;}
#define DeviceButton4Motion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButton4Motion;}
#define DeviceButton5Motion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButton5Motion;}
#define DeviceButtonMotion(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButtonMotion;}
#define DeviceOwnerGrabButton(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceOwnerGrabButton;}
#define DeviceButtonPressGrab(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _deviceButtonGrab;}
#define NoExtensionEvent(d,type,_class) { _class = ((XDevice *) d)->device_id << 8 | _noExtensionEvent;}
#if defined(__cplusplus) || defined(c_plusplus)
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#endif
#define DevicePresence(dpy,type,_class) { type = _XiGetDevicePresenceNotifyEvent(dpy); _class = (0x10000 | _devicePresence); }
#define BadDevice(dpy,error) _xibaddevice(dpy, &error)
#define BadClass(dpy,error) _xibadclass(dpy, &error)
#define BadEvent(dpy,error) _xibadevent(dpy, &error)
#define BadMode(dpy,error) _xibadmode(dpy, &error)
#define DeviceBusy(dpy,error) _xidevicebusy(dpy, &error)
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if NeedWidePrototypes
#else
#endif
#endif
