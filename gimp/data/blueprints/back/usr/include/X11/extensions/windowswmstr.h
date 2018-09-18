// GGHASH:VdlMRdwaHyO2PlLVH4NfuGB1Zmh_hctUmILA2VbUIJk000001443
#ifndef _WINDOWSWMSTR_H_
#define _WINDOWSWMSTR_H_ 
#include <X11/extensions/windowswm.h>
#include <X11/X.h>
#include <X11/Xmd.h>
#define WINDOWSWMNAME "Windows-WM"
#define WINDOWS_WM_MAJOR_VERSION 1
#define WINDOWS_WM_MINOR_VERSION 0
#define WINDOWS_WM_PATCH_VERSION 0
#define sz_xWindowsWMQueryVersionReq 4
#define sz_xWindowsWMQueryVersionReply 32
#define sz_xWindowsWMDisableUpdateReq 8
#define sz_xWindowsWMReenableUpdateReq 8
#define sz_xWindowsWMSelectInputReq 8
#define sz_xWindowsWMNotifyEvent 28
#define sz_xWindowsWMSetFrontProcessReq 4
#define sz_xWindowsWMFrameGetRectReq 24
#define sz_xWindowsWMFrameGetRectReply 32
#define sz_xWindowsWMFrameDrawReq 28
#define sz_xWindowsWMFrameSetTitleReq 16
#endif
