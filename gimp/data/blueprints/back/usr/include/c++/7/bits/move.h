// GGHASH:VMgipxzdgQE9.tCq6agTxQRYYACLCzloBX7PgGtnFS_w000019fd
#ifndef _MOVE_H
#define _MOVE_H 1
#include <bits/c++config.h>
#include <bits/concept_check.h>
#if __cplusplus >= 201103L
#include <type_traits>
#if __cplusplus > 201402L
#define __cpp_lib_addressof_constexpr 201603
#endif
#define _GLIBCXX_MOVE(__val) std::move(__val)
#define _GLIBCXX_FORWARD(_Tp,__val) std::forward<_Tp>(__val)
#else
#define _GLIBCXX_MOVE(__val) (__val)
#define _GLIBCXX_FORWARD(_Tp,__val) (__val)
#endif
#if __cplusplus >= 201103L
#else
#endif
#if __cplusplus >= 201103L
#else
#endif
#endif
