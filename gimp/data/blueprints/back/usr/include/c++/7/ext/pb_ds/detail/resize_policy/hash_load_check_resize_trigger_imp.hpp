// GGHASH:VDFVaGdloLTDfohxyypZFAeNaLcdX4dxgkWV_B0s_7.I00001e48
#define PB_DS_ASSERT_VALID(X) _GLIBCXX_DEBUG_ONLY(X.assert_valid(__FILE__, __LINE__);)
#ifdef PB_DS_HT_MAP_RESIZE_TRACE_
#endif
#ifdef PB_DS_HT_MAP_RESIZE_TRACE_
#endif
#ifdef _GLIBCXX_DEBUG
#define PB_DS_DEBUG_VERIFY(_Cond) _GLIBCXX_DEBUG_VERIFY_AT(_Cond, _M_message(#_Cond" assertion from %1;:%2;") ._M_string(__FILE__)._M_integer(__LINE__) ,__file,__line)
#undef PB_DS_DEBUG_VERIFY
#endif
#undef PB_DS_ASSERT_VALID
