// GGHASH:VAbUpBQpGGXpOIPk98fS60z2MOYhX.0vxH_PA9wF7cgA00000c4a
#ifndef QUADMATH_WEAK_H
#define QUADMATH_WEAK_H 
#include "quadmath.h"
#if SUPPORTS_WEAK
#define __qmath2(name,name2,type) static __typeof(type) name __attribute__ ((__weakref__(#name2)));
#define __qmath_(name) __qmath_ ## name
#else
#define __qmath2(name,name2,type) 
#define __qmath_(name) name
#endif
#define __qmath3(name) __qmath2(__qmath_ ## name,name,name)
#endif
