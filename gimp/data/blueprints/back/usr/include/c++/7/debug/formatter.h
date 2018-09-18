// GGHASH:VZbajdEhJck5l_GBCjQ9k_cv1zGR8DkBQxkpl8BdcBAg00003759
#ifndef _GLIBCXX_DEBUG_FORMATTER_H
#define _GLIBCXX_DEBUG_FORMATTER_H 1
#include <bits/c++config.h>
#include <bits/cpp_type_traits.h>
#if __cpp_rtti
# include <typeinfo>
#define _GLIBCXX_TYPEID(_Type) &typeid(_Type)
#else
#define _GLIBCXX_TYPEID(_Type) 0
#endif
#undef _GLIBCXX_TYPEID
#endif
