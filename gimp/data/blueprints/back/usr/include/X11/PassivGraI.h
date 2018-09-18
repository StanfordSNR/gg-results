// GGHASH:VnWPqCleUMW9P0vxj8NA5A5fXsvB1HYi8YA71w8HQAj000001579
#ifndef _PDI_h_
#define _PDI_h_ 
#define KEYBOARD TRUE
#define POINTER FALSE
#define GRABEXT(p) ((XtServerGrabExtPtr)((p)+1))
#define XtMyAncestor 0
#define XtMyDescendant 1
#define XtMyCousin 2
#define XtMySelf 3
#define XtUnrelated 4
#define IsServerGrab(g) ((g == XtPassiveServerGrab) || (g == XtActiveServerGrab))
#define IsAnyGrab(g) ((g == XtPassiveServerGrab) || (g == XtActiveServerGrab) || (g == XtPseudoPassiveServerGrab))
#define IsEitherPassiveGrab(g) ((g == XtPassiveServerGrab) || (g == XtPseudoPassiveServerGrab))
#define IsPseudoGrab(g) ((g == XtPseudoPassiveServerGrab))
#define _XtGetGrabList(pdi) (&(pdi)->grabList)
#endif
