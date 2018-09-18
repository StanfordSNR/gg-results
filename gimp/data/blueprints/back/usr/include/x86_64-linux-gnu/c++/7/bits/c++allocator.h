// GGHASH:V6eRNCERRn7WwI2bLgdeCRtS8lRXThC3RpKuwPArMDes00000739
#ifndef _GLIBCXX_CXX_ALLOCATOR_H
#define _GLIBCXX_CXX_ALLOCATOR_H 1
#include <ext/new_allocator.h>
#if __cplusplus >= 201103L
#else
#define __allocator_base __gnu_cxx::new_allocator
#endif
#endif
