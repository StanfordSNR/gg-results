// GGHASH:VMdgxT7Q_slp063VECr29X7G1M0W59HkwFlbTVRlb_Ds0000218b
#ifndef XtCoreP_h
#define XtCoreP_h 
#include <X11/Core.h>
#define XtInheritTranslations ((String) &_XtInheritTranslations)
#define XtInheritRealize ((XtRealizeProc) _XtInherit)
#define XtInheritResize ((XtWidgetProc) _XtInherit)
#define XtInheritExpose ((XtExposeProc) _XtInherit)
#define XtInheritSetValuesAlmost ((XtAlmostProc) _XtInherit)
#define XtInheritAcceptFocus ((XtAcceptFocusProc) _XtInherit)
#define XtInheritQueryGeometry ((XtGeometryHandler) _XtInherit)
#define XtInheritDisplayAccelerator ((XtStringProc) _XtInherit)
#define coreClassRec widgetClassRec
#endif
