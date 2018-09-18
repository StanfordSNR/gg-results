// GGHASH:VhB2hNv5iAS6xZW2JNcp9uQ2e7zBx_CAYlU.y7I_nWZo00000997
#pragma once
#include <stddef.h>
#if defined _WIN32 || defined __CYGWIN__
  #if defined GRAPHITE2_STATIC
    #define GR2_API
  #elif defined GRAPHITE2_EXPORTING
    #if defined __GNUC__
      #define GR2_API __attribute__((dllexport))
    #else
      #define GR2_API __declspec(dllexport)
    #endif
  #else
    #if defined __GNUC__
      #define GR2_API __attribute__((dllimport))
    #else
      #define GR2_API __declspec(dllimport)
    #endif
  #endif
  #define GR2_LOCAL
#elif __GNUC__ >= 4
  #if defined GRAPHITE2_STATIC
    #define GR2_API __attribute__ ((visibility("hidden")))
  #else
    #define GR2_API __attribute__ ((visibility("default")))
  #endif
  #define GR2_LOCAL __attribute__ ((visibility("hidden")))
#else
  #define GR2_API
  #define GR2_LOCAL
#endif
