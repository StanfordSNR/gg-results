// GGHASH:VwC.vGVdRSwZZcUsc4k_uvLPtiUakr46KYdRfHJlM_fw00000d5f
#ifndef _CONCEPT_CHECK_H
#define _CONCEPT_CHECK_H 1
#include <bits/c++config.h>
#if !defined(_GLIBCXX_CONCEPT_CHECKS) || !_GLIBCXX_HOSTED
#define __glibcxx_function_requires(...) 
#define __glibcxx_class_requires(_a,_b) 
#define __glibcxx_class_requires2(_a,_b,_c) 
#define __glibcxx_class_requires3(_a,_b,_c,_d) 
#define __glibcxx_class_requires4(_a,_b,_c,_d,_e) 
#else
#include <bits/boost_concept_check.h>
#define __glibcxx_function_requires(...) __gnu_cxx::__function_requires< __gnu_cxx::__VA_ARGS__ >();
#define __glibcxx_class_requires(_a,_C) _GLIBCXX_CLASS_REQUIRES(_a, __gnu_cxx, _C);
#define __glibcxx_class_requires2(_a,_b,_C) _GLIBCXX_CLASS_REQUIRES2(_a, _b, __gnu_cxx, _C);
#define __glibcxx_class_requires3(_a,_b,_c,_C) _GLIBCXX_CLASS_REQUIRES3(_a, _b, _c, __gnu_cxx, _C);
#define __glibcxx_class_requires4(_a,_b,_c,_d,_C) _GLIBCXX_CLASS_REQUIRES4(_a, _b, _c, _d, __gnu_cxx, _C);
#endif
#endif
