// GGHASH:V8d121kYlrCz8h9Yc8PIss7agSYCOYsN0jEt19qvR0AY0000082d
#ifndef HB_H_IN
#error "Include <hb.h> instead."
#endif
#ifndef HB_VERSION_H
#define HB_VERSION_H 
#include "hb-common.h"
#define HB_VERSION_MAJOR 1
#define HB_VERSION_MINOR 7
#define HB_VERSION_MICRO 2
#define HB_VERSION_STRING "1.7.2"
#define HB_VERSION_ATLEAST(major,minor,micro) ((major)*10000+(minor)*100+(micro) <= HB_VERSION_MAJOR*10000+HB_VERSION_MINOR*100+HB_VERSION_MICRO)
#define HB_VERSION_CHECK(major,minor,micro) ((major)*10000+(minor)*100+(micro) >= HB_VERSION_MAJOR*10000+HB_VERSION_MINOR*100+HB_VERSION_MICRO)
#endif
