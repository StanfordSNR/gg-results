// GGHASH:VeyV67hd6I8OhlI823F9I1NsA4zlkpOMsy6VaKZTX6iM000184cc
#ifndef _X11_XLIB_H_
#define _X11_XLIB_H_ 
#define XlibSpecificationRelease 6
#include <sys/types.h>
#if defined(__SCO__) || defined(__UNIXWARE__)
#include <stdint.h>
#endif
#include <X11/X.h>
#include <X11/Xfuncproto.h>
#include <X11/Xosdefs.h>
#ifndef X_WCHAR
#include <stddef.h>
#else
#ifdef __UNIXOS2__
#include <stdlib.h>
#else
#endif
#endif
#define X_HAVE_UTF8_STRING 1
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#endif
#define Bool int
#define Status int
#define True 1
#define False 0
#define QueuedAlready 0
#define QueuedAfterReading 1
#define QueuedAfterFlush 2
#define ConnectionNumber(dpy) (((_XPrivDisplay)(dpy))->fd)
#define RootWindow(dpy,scr) (ScreenOfDisplay(dpy,scr)->root)
#define DefaultScreen(dpy) (((_XPrivDisplay)(dpy))->default_screen)
#define DefaultRootWindow(dpy) (ScreenOfDisplay(dpy,DefaultScreen(dpy))->root)
#define DefaultVisual(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_visual)
#define DefaultGC(dpy,scr) (ScreenOfDisplay(dpy,scr)->default_gc)
#define BlackPixel(dpy,scr) (ScreenOfDisplay(dpy,scr)->black_pixel)
#define WhitePixel(dpy,scr) (ScreenOfDisplay(dpy,scr)->white_pixel)
#define AllPlanes ((unsigned long)~0L)
#define QLength(dpy) (((_XPrivDisplay)(dpy))->qlen)
#define DisplayWidth(dpy,scr) (ScreenOfDisplay(dpy,scr)->width)
#define DisplayHeight(dpy,scr) (ScreenOfDisplay(dpy,scr)->height)
#define DisplayWidthMM(dpy,scr) (ScreenOfDisplay(dpy,scr)->mwidth)
#define DisplayHeightMM(dpy,scr) (ScreenOfDisplay(dpy,scr)->mheight)
#define DisplayPlanes(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_depth)
#define DisplayCells(dpy,scr) (DefaultVisual(dpy,scr)->map_entries)
#define ScreenCount(dpy) (((_XPrivDisplay)(dpy))->nscreens)
#define ServerVendor(dpy) (((_XPrivDisplay)(dpy))->vendor)
#define ProtocolVersion(dpy) (((_XPrivDisplay)(dpy))->proto_major_version)
#define ProtocolRevision(dpy) (((_XPrivDisplay)(dpy))->proto_minor_version)
#define VendorRelease(dpy) (((_XPrivDisplay)(dpy))->release)
#define DisplayString(dpy) (((_XPrivDisplay)(dpy))->display_name)
#define DefaultDepth(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_depth)
#define DefaultColormap(dpy,scr) (ScreenOfDisplay(dpy,scr)->cmap)
#define BitmapUnit(dpy) (((_XPrivDisplay)(dpy))->bitmap_unit)
#define BitmapBitOrder(dpy) (((_XPrivDisplay)(dpy))->bitmap_bit_order)
#define BitmapPad(dpy) (((_XPrivDisplay)(dpy))->bitmap_pad)
#define ImageByteOrder(dpy) (((_XPrivDisplay)(dpy))->byte_order)
#define NextRequest(dpy) (((_XPrivDisplay)(dpy))->request + 1)
#define LastKnownRequestProcessed(dpy) (((_XPrivDisplay)(dpy))->last_request_read)
#define ScreenOfDisplay(dpy,scr) (&((_XPrivDisplay)(dpy))->screens[scr])
#define DefaultScreenOfDisplay(dpy) ScreenOfDisplay(dpy,DefaultScreen(dpy))
#define DisplayOfScreen(s) ((s)->display)
#define RootWindowOfScreen(s) ((s)->root)
#define BlackPixelOfScreen(s) ((s)->black_pixel)
#define WhitePixelOfScreen(s) ((s)->white_pixel)
#define DefaultColormapOfScreen(s) ((s)->cmap)
#define DefaultDepthOfScreen(s) ((s)->root_depth)
#define DefaultGCOfScreen(s) ((s)->default_gc)
#define DefaultVisualOfScreen(s) ((s)->root_visual)
#define WidthOfScreen(s) ((s)->width)
#define HeightOfScreen(s) ((s)->height)
#define WidthMMOfScreen(s) ((s)->mwidth)
#define HeightMMOfScreen(s) ((s)->mheight)
#define PlanesOfScreen(s) ((s)->root_depth)
#define CellsOfScreen(s) (DefaultVisualOfScreen((s))->map_entries)
#define MinCmapsOfScreen(s) ((s)->min_maps)
#define MaxCmapsOfScreen(s) ((s)->max_maps)
#define DoesSaveUnders(s) ((s)->save_unders)
#define DoesBackingStore(s) ((s)->backing_store)
#define EventMaskOfScreen(s) ((s)->root_input_mask)
#ifdef XLIB_ILLEGAL_ACCESS
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#ifndef XLIB_ILLEGAL_ACCESS
#endif
#ifdef XLIB_ILLEGAL_ACCESS
#endif
#ifdef XLIB_ILLEGAL_ACCESS
#endif
#undef _XEVENT_
#ifndef _XEVENT_
#if defined(__cplusplus) || defined(c_plusplus)
#else
#endif
#endif
#define XAllocID(dpy) ((*((_XPrivDisplay)(dpy))->resource_alloc)((dpy)))
#define XNRequiredCharSet "requiredCharSet"
#define XNQueryOrientation "queryOrientation"
#define XNBaseFontName "baseFontName"
#define XNOMAutomatic "omAutomatic"
#define XNMissingCharSet "missingCharSet"
#define XNDefaultString "defaultString"
#define XNOrientation "orientation"
#define XNDirectionalDependentDrawing "directionalDependentDrawing"
#define XNContextualDrawing "contextualDrawing"
#define XNFontInfo "fontInfo"
#define XIMPreeditArea 0x0001L
#define XIMPreeditCallbacks 0x0002L
#define XIMPreeditPosition 0x0004L
#define XIMPreeditNothing 0x0008L
#define XIMPreeditNone 0x0010L
#define XIMStatusArea 0x0100L
#define XIMStatusCallbacks 0x0200L
#define XIMStatusNothing 0x0400L
#define XIMStatusNone 0x0800L
#define XNVaNestedList "XNVaNestedList"
#define XNQueryInputStyle "queryInputStyle"
#define XNClientWindow "clientWindow"
#define XNInputStyle "inputStyle"
#define XNFocusWindow "focusWindow"
#define XNResourceName "resourceName"
#define XNResourceClass "resourceClass"
#define XNGeometryCallback "geometryCallback"
#define XNDestroyCallback "destroyCallback"
#define XNFilterEvents "filterEvents"
#define XNPreeditStartCallback "preeditStartCallback"
#define XNPreeditDoneCallback "preeditDoneCallback"
#define XNPreeditDrawCallback "preeditDrawCallback"
#define XNPreeditCaretCallback "preeditCaretCallback"
#define XNPreeditStateNotifyCallback "preeditStateNotifyCallback"
#define XNPreeditAttributes "preeditAttributes"
#define XNStatusStartCallback "statusStartCallback"
#define XNStatusDoneCallback "statusDoneCallback"
#define XNStatusDrawCallback "statusDrawCallback"
#define XNStatusAttributes "statusAttributes"
#define XNArea "area"
#define XNAreaNeeded "areaNeeded"
#define XNSpotLocation "spotLocation"
#define XNColormap "colorMap"
#define XNStdColormap "stdColorMap"
#define XNForeground "foreground"
#define XNBackground "background"
#define XNBackgroundPixmap "backgroundPixmap"
#define XNFontSet "fontSet"
#define XNLineSpace "lineSpace"
#define XNCursor "cursor"
#define XNQueryIMValuesList "queryIMValuesList"
#define XNQueryICValuesList "queryICValuesList"
#define XNVisiblePosition "visiblePosition"
#define XNR6PreeditCallback "r6PreeditCallback"
#define XNStringConversionCallback "stringConversionCallback"
#define XNStringConversion "stringConversion"
#define XNResetState "resetState"
#define XNHotKey "hotKey"
#define XNHotKeyState "hotKeyState"
#define XNPreeditState "preeditState"
#define XNSeparatorofNestedList "separatorofNestedList"
#define XBufferOverflow -1
#define XLookupNone 1
#define XLookupChars 2
#define XLookupKeySym 3
#define XLookupBoth 4
#define XIMReverse 1L
#define XIMUnderline (1L<<1)
#define XIMHighlight (1L<<2)
#define XIMPrimary (1L<<5)
#define XIMSecondary (1L<<6)
#define XIMTertiary (1L<<7)
#define XIMVisibleToForward (1L<<8)
#define XIMVisibleToBackword (1L<<9)
#define XIMVisibleToCenter (1L<<10)
#define XIMPreeditUnKnown 0L
#define XIMPreeditEnable 1L
#define XIMPreeditDisable (1L<<1)
#define XIMInitialState 1L
#define XIMPreserveState (1L<<1)
#define XIMStringConversionLeftEdge (0x00000001)
#define XIMStringConversionRightEdge (0x00000002)
#define XIMStringConversionTopEdge (0x00000004)
#define XIMStringConversionBottomEdge (0x00000008)
#define XIMStringConversionConcealed (0x00000010)
#define XIMStringConversionWrapped (0x00000020)
#define XIMStringConversionBuffer (0x0001)
#define XIMStringConversionLine (0x0002)
#define XIMStringConversionWord (0x0003)
#define XIMStringConversionChar (0x0004)
#define XIMStringConversionSubstitution (0x0001)
#define XIMStringConversionRetrieval (0x0002)
#define XIMHotKeyStateON (0x0001L)
#define XIMHotKeyStateOFF (0x0002L)
#if defined(WIN32) && !defined(_XLIBINT_)
#define _Xdebug (*_Xdebug_p)
#endif
#if NeedWidePrototypes
#else
#endif
#if NeedWidePrototypes
#else
#endif
#if NeedWidePrototypes
#else
#endif
#if NeedWidePrototypes
#else
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif
