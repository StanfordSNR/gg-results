// GGHASH:V8zM3czA_ym5NHdS6Bd_mfADmPFcfwIQhCzUFOMB60eA000014b7
#include <ext/pb_ds/detail/cond_dealtor.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/binomial_heap_base_/binomial_heap_base_.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/rc.hpp>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Value_Type, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC rc_binomial_heap<Value_Type, Cmp_Fn, _Alloc>
#define PB_DS_RC_C_DEC rc<typename binomial_heap_base<Value_Type, Cmp_Fn, _Alloc>::node, _Alloc>
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef PB_DS_RC_BINOMIAL_HEAP_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#include <ext/pb_ds/detail/rc_binomial_heap_/constructors_destructor_fn_imps.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/debug_fn_imps.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/erase_fn_imps.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/trace_fn_imps.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/insert_fn_imps.hpp>
#include <ext/pb_ds/detail/rc_binomial_heap_/split_join_fn_imps.hpp>
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_RC_C_DEC
