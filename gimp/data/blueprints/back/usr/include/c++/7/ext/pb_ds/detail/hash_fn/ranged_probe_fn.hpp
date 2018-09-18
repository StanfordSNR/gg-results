// GGHASH:VstvOHfpdFOaIG3r22hp_UpET3D1kNjolD18EY.9JhtE000028c4
#ifndef PB_DS_RANGED_PROBE_FN_HPP
#define PB_DS_RANGED_PROBE_FN_HPP 
#include <utility>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Key, typename Hash_Fn, typename _Alloc, typename Comb_Probe_Fn, typename Probe_Fn>
#define PB_DS_CLASS_C_DEC ranged_probe_fn<Key, Hash_Fn, _Alloc, Comb_Probe_Fn, Probe_Fn, false>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Key, typename Hash_Fn, typename _Alloc, typename Comb_Probe_Fn, typename Probe_Fn>
#define PB_DS_CLASS_C_DEC ranged_probe_fn<Key, Hash_Fn, _Alloc, Comb_Probe_Fn, Probe_Fn, true>
#ifdef _GLIBCXX_DEBUG
#else
#endif
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#endif
