// GGHASH:VoBiVmrhxTmmpuHj8W7M_2K6PAywt95VCnjgavDxh8WY000010df
#ifndef PB_DS_TYPE_UTILS_HPP
#define PB_DS_TYPE_UTILS_HPP 
#include <cstddef>
#include <utility>
#include <tr1/type_traits>
#include <ext/type_traits.h>
#include <ext/numeric_traits.h>
#if __cplusplus >= 201103L
#define PB_DS_STATIC_ASSERT(UNIQUE,E) static_assert(E, #UNIQUE)
#else
#define PB_DS_STATIC_ASSERT(UNIQUE,E) typedef __gnu_pbds::detail::__static_assert_dumclass<sizeof(__gnu_pbds::detail::__static_assert<bool(E)>)> UNIQUE ##__static_assert_type
#endif
#endif
