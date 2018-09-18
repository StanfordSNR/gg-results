// GGHASH:VbB42Ngcauy7oC96vqpiXJkFLK34wdgvu2VLaHyqnuBA00001bfb
#ifndef _WINDOWSWM_H_
#define _WINDOWSWM_H_ 
#include <X11/Xfuncproto.h>
#define X_WindowsWMQueryVersion 0
#define X_WindowsWMFrameGetRect 1
#define X_WindowsWMFrameDraw 2
#define X_WindowsWMFrameSetTitle 3
#define X_WindowsWMDisableUpdate 4
#define X_WindowsWMReenableUpdate 5
#define X_WindowsWMSelectInput 6
#define X_WindowsWMSetFrontProcess 7
#define WindowsWMControllerNotify 0
#define WindowsWMActivationNotify 1
#define WindowsWMNumberEvents 2
#define WindowsWMControllerNotifyMask (1L << 0)
#define WindowsWMActivationNotifyMask (1L << 1)
#define WindowsWMMinimizeWindow 0
#define WindowsWMMaximizeWindow 1
#define WindowsWMRestoreWindow 2
#define WindowsWMCloseWindow 3
#define WindowsWMBringAllToFront 4
#define WindowsWMHideWindow 5
#define WindowsWMMoveWindow 6
#define WindowsWMResizeWindow 7
#define WindowsWMActivateWindow 8
#define WindowsWMIsActive 0
#define WindowsWMIsInactive 1
#define WindowsWMClientNotLocal 0
#define WindowsWMOperationNotSupported 1
#define WindowsWMNumberErrors (WindowsWMOperationNotSupported + 1)
#define WindowsWMFrameRectTitleBar 1
#define WindowsWMFrameRectTracking 2
#define WindowsWMFrameRectGrowBox 3
#define WindowsWMFrameStyleBorder 0x800000
#define WindowsWMFrameStyleCaption 0xc00000
#define WindowsWMFrameStyleChild 0x40000000
#define WindowsWMFrameStyleChildWindow 0x40000000
#define WindowsWMFrameStyleClipChildren 0x2000000
#define WindowsWMFrameStyleClipSiblings 0x4000000
#define WindowsWMFrameStyleDisabled 0x8000000
#define WindowsWMFrameStyleDlgFrame 0x400000
#define WindowsWMFrameStyleGroup 0x20000
#define WindowsWMFrameStyleHScroll 0x100000
#define WindowsWMFrameStyleIconic 0x20000000
#define WindowsWMFrameStyleMaximize 0x1000000
#define WindowsWMFrameStyleMaximizeBox 0x10000
#define WindowsWMFrameStyleMinimize 0x20000000
#define WindowsWMFrameStyleMinimizeBox 0x20000
#define WindowsWMFrameStyleOverlapped 0
#define WindowsWMFrameStyleOverlappedWindow 0xcf0000
#define WindowsWMFrameStylePopup 0x80000000
#define WindowsWMFrameStylePopupWindow 0x80880000
#define WindowsWMFrameStyleSizeBox 0x40000
#define WindowsWMFrameStyleSysMenu 0x80000
#define WindowsWMFrameStyleTabStop 0x10000
#define WindowsWMFrameStyleThickFrame 0x40000
#define WindowsWMFrameStyleTiled 0
#define WindowsWMFrameStyleTiledWindow 0xcf0000
#define WindowsWMFrameStyleVisible 0x10000000
#define WindowsWMFrameStyleVScroll 0x200000
#define WindowsWMFrameStyleExAcceptFiles 16
#define WindowsWMFrameStyleExAppWindow 0x40000
#define WindowsWMFrameStyleExClientEdge 512
#define WindowsWMFrameStyleExComposited 0x2000000
#define WindowsWMFrameStyleExContextHelp 0x400
#define WindowsWMFrameStyleExControlParent 0x10000
#define WindowsWMFrameStyleExDlgModalFrame 1
#define WindowsWMFrameStyleExLayered 0x80000
#define WindowsWMFrameStyleExLayoutRtl 0x400000
#define WindowsWMFrameStyleExLeft 0
#define WindowsWMFrameStyleExLeftScrollBar 0x4000
#define WindowsWMFrameStyleExLtrReading 0
#define WindowsWMFrameStyleExMDIChild 64
#define WindowsWMFrameStyleExNoActivate 0x8000000
#define WindowsWMFrameStyleExNoInheritLayout 0x100000
#define WindowsWMFrameStyleExNoParentNotify 4
#define WindowsWMFrameStyleExOverlappedWindow 0x300
#define WindowsWMFrameStyleExPaletteWindow 0x188
#define WindowsWMFrameStyleExRight 0x1000
#define WindowsWMFrameStyleExRightScrollBar 0
#define WindowsWMFrameStyleExRtlReading 0x2000
#define WindowsWMFrameStyleExStaticEdge 0x20000
#define WindowsWMFrameStyleExToolWindow 128
#define WindowsWMFrameStyleExTopMost 8
#define WindowsWMFrameStyleExTransparent 32
#define WindowsWMFrameStyleExWindowEdge 256
#define WINDOWSWM_RAISE_ON_CLICK "_WINDOWSWM_RAISE_ON_CLICK"
#define WINDOWSWM_MOUSE_ACTIVATE "_WINDOWSWM_MOUSE_ACTIVATE"
#define WINDOWSWM_CLIENT_WINDOW "_WINDOWSWM_CLIENT_WINDOW"
#define WINDOWSWM_NATIVE_HWND "_WINDOWSWM_NATIVE_HWND"
#ifndef _WINDOWSWM_SERVER_
#endif
#endif
