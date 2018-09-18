// GGHASH:Vt1K8JxgiEZo83qMifSVnwwpDO7qo40qTQsYgfm8su2g00002984
#ifndef _X11_XRESOURCE_H_
#define _X11_XRESOURCE_H_ 
#ifndef _XP_PRINT_SERVER_
#include <X11/Xlib.h>
#endif
#define NULLQUARK ((XrmQuark) 0)
#define NULLSTRING ((XrmString) 0)
#define XrmStringsEqual(a1,a2) (strcmp(a1, a2) == 0)
#define XrmNameToString(name) XrmQuarkToString(name)
#define XrmStringToName(string) XrmStringToQuark(string)
#define XrmStringToNameList(str,name) XrmStringToQuarkList(str, name)
#define XrmClassToString(c_class) XrmQuarkToString(c_class)
#define XrmStringToClass(c_class) XrmStringToQuark(c_class)
#define XrmStringToClassList(str,c_class) XrmStringToQuarkList(str, c_class)
#define XrmStringToRepresentation(string) XrmStringToQuark(string)
#define XrmRepresentationToString(type) XrmQuarkToString(type)
#ifndef _XP_PRINT_SERVER_
#endif
#define XrmEnumAllLevels 0
#define XrmEnumOneLevel 1
#endif
