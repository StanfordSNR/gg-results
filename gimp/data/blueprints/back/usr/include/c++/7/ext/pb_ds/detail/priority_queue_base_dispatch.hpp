// GGHASH:VCZi2x4QAtEqCnJ.Hhn5YQNtQYwthaO5tm8N7jErPJBI0000102c
#ifndef PB_DS_PRIORITY_QUEUE_BASE_DS_DISPATCHER_HPP
#define PB_DS_PRIORITY_QUEUE_BASE_DS_DISPATCHER_HPP 
#define PB_DS_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.assert_valid(__FILE__, __LINE__);)
#define PB_DS_DEBUG_VERIFY(_Cond) _GLIBCXX_DEBUG_VERIFY_AT(_Cond, _M_message(#_Cond" assertion from %1;:%2;") ._M_string(__FILE__)._M_integer(__LINE__) ,__file,__line)
#include <ext/pb_ds/detail/pairing_heap_/pairing_heap_.hpp>
#include <ext/pb_ds/detail/binomial_heap_/binomial_heap_.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/rc_binomial_heap_.hpp>
#include <ext/pb_ds/detail/binary_heap_/binary_heap_.hpp>
#include <ext/pb_ds/detail/thin_heap_/thin_heap_.hpp>
#undef PB_DS_DEBUG_VERIFY
#undef PB_DS_ASSERT_VALID
#endif
