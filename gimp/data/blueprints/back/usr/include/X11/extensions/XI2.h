// GGHASH:VuHm7OE278VEJn7KARN76XqjIMrvW2riuDs4PQQ_hnwg0000292e
#ifndef _XI2_H_
#define _XI2_H_ 
#define XInput_2_0 7
#define XI_2_Major 2
#define XI_2_Minor 3
#define XIPropertyDeleted 0
#define XIPropertyCreated 1
#define XIPropertyModified 2
#define XIPropModeReplace 0
#define XIPropModePrepend 1
#define XIPropModeAppend 2
#define XIAnyPropertyType 0L
#define XINotifyNormal 0
#define XINotifyGrab 1
#define XINotifyUngrab 2
#define XINotifyWhileGrabbed 3
#define XINotifyPassiveGrab 4
#define XINotifyPassiveUngrab 5
#define XINotifyAncestor 0
#define XINotifyVirtual 1
#define XINotifyInferior 2
#define XINotifyNonlinear 3
#define XINotifyNonlinearVirtual 4
#define XINotifyPointer 5
#define XINotifyPointerRoot 6
#define XINotifyDetailNone 7
#define XIGrabModeSync 0
#define XIGrabModeAsync 1
#define XIGrabModeTouch 2
#define XIGrabSuccess 0
#define XIAlreadyGrabbed 1
#define XIGrabInvalidTime 2
#define XIGrabNotViewable 3
#define XIGrabFrozen 4
#define XIOwnerEvents True
#define XINoOwnerEvents False
#define XIGrabtypeButton 0
#define XIGrabtypeKeycode 1
#define XIGrabtypeEnter 2
#define XIGrabtypeFocusIn 3
#define XIGrabtypeTouchBegin 4
#define XIAnyModifier (1U << 31)
#define XIAnyButton 0
#define XIAnyKeycode 0
#define XIAsyncDevice 0
#define XISyncDevice 1
#define XIReplayDevice 2
#define XIAsyncPairedDevice 3
#define XIAsyncPair 4
#define XISyncPair 5
#define XIAcceptTouch 6
#define XIRejectTouch 7
#define XISlaveSwitch 1
#define XIDeviceChange 2
#define XIMasterAdded (1 << 0)
#define XIMasterRemoved (1 << 1)
#define XISlaveAdded (1 << 2)
#define XISlaveRemoved (1 << 3)
#define XISlaveAttached (1 << 4)
#define XISlaveDetached (1 << 5)
#define XIDeviceEnabled (1 << 6)
#define XIDeviceDisabled (1 << 7)
#define XIAddMaster 1
#define XIRemoveMaster 2
#define XIAttachSlave 3
#define XIDetachSlave 4
#define XIAttachToMaster 1
#define XIFloating 2
#define XIModeRelative 0
#define XIModeAbsolute 1
#define XIMasterPointer 1
#define XIMasterKeyboard 2
#define XISlavePointer 3
#define XISlaveKeyboard 4
#define XIFloatingSlave 5
#define XIKeyClass 0
#define XIButtonClass 1
#define XIValuatorClass 2
#define XIScrollClass 3
#define XITouchClass 8
#define XIScrollTypeVertical 1
#define XIScrollTypeHorizontal 2
#define XIScrollFlagNoEmulation (1 << 0)
#define XIScrollFlagPreferred (1 << 1)
#define XIKeyRepeat (1 << 16)
#define XIPointerEmulated (1 << 16)
#define XITouchPendingEnd (1 << 16)
#define XITouchEmulatingPointer (1 << 17)
#define XIBarrierPointerReleased (1 << 0)
#define XIBarrierDeviceIsGrabbed (1 << 1)
#define XIDirectTouch 1
#define XIDependentTouch 2
#define XISetMask(ptr,event) (((unsigned char*)(ptr))[(event)>>3] |= (1 << ((event) & 7)))
#define XIClearMask(ptr,event) (((unsigned char*)(ptr))[(event)>>3] &= ~(1 << ((event) & 7)))
#define XIMaskIsSet(ptr,event) (((unsigned char*)(ptr))[(event)>>3] & (1 << ((event) & 7)))
#define XIMaskLen(event) (((event) >> 3) + 1)
#define XIAllDevices 0
#define XIAllMasterDevices 1
#define XI_DeviceChanged 1
#define XI_KeyPress 2
#define XI_KeyRelease 3
#define XI_ButtonPress 4
#define XI_ButtonRelease 5
#define XI_Motion 6
#define XI_Enter 7
#define XI_Leave 8
#define XI_FocusIn 9
#define XI_FocusOut 10
#define XI_HierarchyChanged 11
#define XI_PropertyEvent 12
#define XI_RawKeyPress 13
#define XI_RawKeyRelease 14
#define XI_RawButtonPress 15
#define XI_RawButtonRelease 16
#define XI_RawMotion 17
#define XI_TouchBegin 18
#define XI_TouchUpdate 19
#define XI_TouchEnd 20
#define XI_TouchOwnership 21
#define XI_RawTouchBegin 22
#define XI_RawTouchUpdate 23
#define XI_RawTouchEnd 24
#define XI_BarrierHit 25
#define XI_BarrierLeave 26
#define XI_LASTEVENT XI_BarrierLeave
#define XI_DeviceChangedMask (1 << XI_DeviceChanged)
#define XI_KeyPressMask (1 << XI_KeyPress)
#define XI_KeyReleaseMask (1 << XI_KeyRelease)
#define XI_ButtonPressMask (1 << XI_ButtonPress)
#define XI_ButtonReleaseMask (1 << XI_ButtonRelease)
#define XI_MotionMask (1 << XI_Motion)
#define XI_EnterMask (1 << XI_Enter)
#define XI_LeaveMask (1 << XI_Leave)
#define XI_FocusInMask (1 << XI_FocusIn)
#define XI_FocusOutMask (1 << XI_FocusOut)
#define XI_HierarchyChangedMask (1 << XI_HierarchyChanged)
#define XI_PropertyEventMask (1 << XI_PropertyEvent)
#define XI_RawKeyPressMask (1 << XI_RawKeyPress)
#define XI_RawKeyReleaseMask (1 << XI_RawKeyRelease)
#define XI_RawButtonPressMask (1 << XI_RawButtonPress)
#define XI_RawButtonReleaseMask (1 << XI_RawButtonRelease)
#define XI_RawMotionMask (1 << XI_RawMotion)
#define XI_TouchBeginMask (1 << XI_TouchBegin)
#define XI_TouchEndMask (1 << XI_TouchEnd)
#define XI_TouchOwnershipChangedMask (1 << XI_TouchOwnership)
#define XI_TouchUpdateMask (1 << XI_TouchUpdate)
#define XI_RawTouchBeginMask (1 << XI_RawTouchBegin)
#define XI_RawTouchEndMask (1 << XI_RawTouchEnd)
#define XI_RawTouchUpdateMask (1 << XI_RawTouchUpdate)
#define XI_BarrierHitMask (1 << XI_BarrierHit)
#define XI_BarrierLeaveMask (1 << XI_BarrierLeave)
#endif
