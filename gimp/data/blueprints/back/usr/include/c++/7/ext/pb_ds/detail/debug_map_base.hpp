// GGHASH:VyVrjIZp7e1dz18ZlAmKYbwXqgtyGHQeAA.bBwaV.Sm4000021f9
#ifndef PB_DS_DEBUG_MAP_BASE_HPP
#define PB_DS_DEBUG_MAP_BASE_HPP 
#ifdef _GLIBCXX_DEBUG
#include <list>
#include <utility>
#include <cstdlib>
#include <iostream>
#include <ext/throw_allocator.h>
#include <debug/debug.h>
#define PB_DS_CLASS_T_DEC template<typename Key, typename Eq_Fn, typename Const_Key_Reference>
#define PB_DS_CLASS_C_DEC debug_map_base<Key, Eq_Fn, Const_Key_Reference>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#endif
#endif
