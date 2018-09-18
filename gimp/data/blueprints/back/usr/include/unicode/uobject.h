// GGHASH:VgwtND1TvdaH0XHdrwLHBhK5Y7hy6SyEQk2IEoo.FqT800002adf
#ifndef __UOBJECT_H__
#define __UOBJECT_H__ 
#include "unicode/utypes.h"
#ifndef U_NO_THROW
#define U_NO_THROW throw()
#endif
#ifdef SHAPER_MEMORY_DEBUG
#endif
#if U_OVERRIDE_CXX_ALLOCATION
#if U_HAVE_PLACEMENT_NEW
#endif
#if U_HAVE_DEBUG_LOCATION_NEW
#endif
#endif
#if 0
#endif
#ifndef U_HIDE_INTERNAL_API
#define UOBJECT_DEFINE_RTTI_IMPLEMENTATION(myClass) UClassID U_EXPORT2 myClass::getStaticClassID() { static char classID = 0; return (UClassID)&classID; } UClassID myClass::getDynamicClassID() const { return myClass::getStaticClassID(); }
#define UOBJECT_DEFINE_ABSTRACT_RTTI_IMPLEMENTATION(myClass) UClassID U_EXPORT2 myClass::getStaticClassID() { static char classID = 0; return (UClassID)&classID; }
#endif
#endif
