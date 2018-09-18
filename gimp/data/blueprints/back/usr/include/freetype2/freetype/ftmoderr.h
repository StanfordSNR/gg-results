// GGHASH:VIgCLX_hdTy7orGgubec_ewOS003_3BUCjOehne0JPlQ000028b1
#ifndef FTMODERR_H_
#define FTMODERR_H_ 
#undef FT_NEED_EXTERN_C
#ifndef FT_MODERRDEF
#ifdef FT_CONFIG_OPTION_USE_MODULE_ERRORS
#define FT_MODERRDEF(e,v,s) FT_Mod_Err_ ## e = v,
#else
#define FT_MODERRDEF(e,v,s) FT_Mod_Err_ ## e = 0,
#endif
#define FT_MODERR_START_LIST enum {
#define FT_MODERR_END_LIST FT_Mod_Err_Max };
#ifdef __cplusplus
#define FT_NEED_EXTERN_C 
#endif
#endif
#ifdef FT_MODERR_START_LIST
#endif
#ifdef FT_MODERR_END_LIST
#endif
#ifdef FT_NEED_EXTERN_C
#endif
#undef FT_MODERR_START_LIST
#undef FT_MODERR_END_LIST
#undef FT_MODERRDEF
#undef FT_NEED_EXTERN_C
#endif
