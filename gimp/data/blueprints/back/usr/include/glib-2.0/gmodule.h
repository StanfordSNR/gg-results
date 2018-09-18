// GGHASH:VLxOPo6XR16AQw8oQ2_5IDs9BQa52EvlRdSd_LLWtNmo000010de
#ifndef __GMODULE_H__
#define __GMODULE_H__ 
#include <glib.h>
#define G_MODULE_IMPORT extern
#ifdef G_PLATFORM_WIN32
#define G_MODULE_EXPORT __declspec(dllexport)
#elif __GNUC__ >= 4
#define G_MODULE_EXPORT __attribute__((visibility("default")))
#else
#define G_MODULE_EXPORT 
#endif
#endif
