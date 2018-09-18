// GGHASH:V2b78bRlO4yLD3sYWSclBMLRKcl3QAPCJsnIUR1QesE000005362
#ifndef _X11_XCMS_H_
#define _X11_XCMS_H_ 
#include <X11/Xlib.h>
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#endif
#define XcmsFailure 0
#define XcmsSuccess 1
#define XcmsSuccessWithCompression 2
#define XcmsUndefinedFormat (XcmsColorFormat)0x00000000
#define XcmsCIEXYZFormat (XcmsColorFormat)0x00000001
#define XcmsCIEuvYFormat (XcmsColorFormat)0x00000002
#define XcmsCIExyYFormat (XcmsColorFormat)0x00000003
#define XcmsCIELabFormat (XcmsColorFormat)0x00000004
#define XcmsCIELuvFormat (XcmsColorFormat)0x00000005
#define XcmsTekHVCFormat (XcmsColorFormat)0x00000006
#define XcmsRGBFormat (XcmsColorFormat)0x80000000
#define XcmsRGBiFormat (XcmsColorFormat)0x80000001
#define XcmsInitNone 0x00
#define XcmsInitSuccess 0x01
#define XcmsInitFailure 0xff
#define DisplayOfCCC(ccc) ((ccc)->dpy)
#define ScreenNumberOfCCC(ccc) ((ccc)->screenNumber)
#define VisualOfCCC(ccc) ((ccc)->visual)
#define ClientWhitePointOfCCC(ccc) (&(ccc)->clientWhitePt)
#define ScreenWhitePointOfCCC(ccc) (&(ccc)->pPerScrnInfo->screenWhitePt)
#define FunctionSetOfCCC(ccc) ((ccc)->pPerScrnInfo->functionSet)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif
