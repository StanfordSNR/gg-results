// GGHASH:VlHOZHwomb2Wr1xdbmHzny0mMmg3n1jQj_93jFk.ijqQ000037bc
#ifndef gserrors_INCLUDED
#define gserrors_INCLUDED 
#if !defined(DEBUG) || defined(GS_THREADSAFE)
#define gs_log_error(err,file,line) (err)
#endif
#ifdef GS_THREADSAFE
#define gs_note_error(err) (err)
#define return_error(err) return (err)
#else
#define gs_note_error(err) gs_log_error(err, __FILE__, __LINE__)
#define return_error(err) return gs_note_error(err)
#endif
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901L
# if defined(__GNUC__) && __GNUC__ >= 2
#define __func__ __FUNCTION__
# elif defined(__FUNCTION__)
#define __func__ __FUNCTION__
# elif defined(__FUNC__)
#define __func__ __FUNC__
# else
#define __func__ "<unknown>"
# endif
#endif
#ifndef __printflike
#if __GNUC__ > 2 || __GNUC__ == 2 && __GNUC_MINOR__ >= 7
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#else
#define __printflike(fmtarg,firstvararg) 
#endif
#endif
#ifdef GS_THREADSAFE
#define gs_throw_code(code) (code)
#define gs_throw(code,fmt) (code)
#define gs_throw1(code,fmt,arg1) (code)
#define gs_throw2(code,fmt,arg1,arg2) (code)
#define gs_throw3(code,fmt,arg1,arg2,arg3) (code)
#define gs_throw4(code,fmt,arg1,arg2,arg3,arg4) (code)
#define gs_throw5(code,fmt,arg1,arg2,arg3,arg4,arg5) (code)
#define gs_throw6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) (code)
#define gs_throw7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) (code)
#define gs_throw8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) (code)
#define gs_throw9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) (code)
#define gs_rethrow_code(code) (code)
#define gs_rethrow(code,fmt) (code)
#define gs_rethrow1(code,fmt,arg1) (code)
#define gs_rethrow2(code,fmt,arg1,arg2) (code)
#define gs_rethrow3(code,fmt,arg1,arg2,arg3) (code)
#define gs_rethrow4(code,fmt,arg1,arg2,arg3,arg4) (code)
#define gs_rethrow5(code,fmt,arg1,arg2,arg3,arg4,arg5) (code)
#define gs_rethrow6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) (code)
#define gs_rethrow7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) (code)
#define gs_rethrow8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) (code)
#define gs_rethrow9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) (code)
#define gs_catch(code,fmt) (code)
#define gs_catch1(code,fmt,arg1) (code)
#define gs_catch2(code,fmt,arg1,arg2) (code)
#define gs_catch3(code,fmt,arg1,arg2,arg3) (code)
#define gs_catch4(code,fmt,arg1,arg2,arg3,arg4) (code)
#define gs_catch5(code,fmt,arg1,arg2,arg3,arg4,arg5) (code)
#define gs_catch6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) (code)
#define gs_catch7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) (code)
#define gs_catch8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) (code)
#define gs_catch9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) (code)
#define gs_warn(fmt) DO_NOTHING
#define gs_warn1(fmt,arg1) DO_NOTHING
#define gs_warn2(fmt,arg1,arg2) DO_NOTHING
#define gs_warn3(fmt,arg1,arg2,arg3) DO_NOTHING
#define gs_warn4(fmt,arg1,arg2,arg3,arg4) DO_NOTHING
#define gs_warn5(fmt,arg1,arg2,arg3,arg4,arg5) DO_NOTHING
#define gs_warn6(fmt,arg1,arg2,arg3,arg4,arg5,arg6) DO_NOTHING
#define gs_warn7(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) DO_NOTHING
#define gs_warn8(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) DO_NOTHING
#define gs_warn9(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) DO_NOTHING
#else
#define gs_throw_code(code) gs_throw1((code), "%s", gs_errstr((code)))
#define gs_throw(code,fmt) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt)
#define gs_throw1(code,fmt,arg1) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1)
#define gs_throw2(code,fmt,arg1,arg2) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2)
#define gs_throw3(code,fmt,arg1,arg2,arg3) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3)
#define gs_throw4(code,fmt,arg1,arg2,arg3,arg4) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4)
#define gs_throw5(code,fmt,arg1,arg2,arg3,arg4,arg5) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4, arg5)
#define gs_throw6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6)
#define gs_throw7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define gs_throw8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define gs_throw9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) gs_throw_imp(__func__, __FILE__, __LINE__, 0, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define gs_rethrow_code(code) gs_rethrow1((code), "%s", gs_errstr((code)))
#define gs_rethrow(code,fmt) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt)
#define gs_rethrow1(code,fmt,arg1) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1)
#define gs_rethrow2(code,fmt,arg1,arg2) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2)
#define gs_rethrow3(code,fmt,arg1,arg2,arg3) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3)
#define gs_rethrow4(code,fmt,arg1,arg2,arg3,arg4) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4)
#define gs_rethrow5(code,fmt,arg1,arg2,arg3,arg4,arg5) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4, arg5)
#define gs_rethrow6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6)
#define gs_rethrow7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define gs_rethrow8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define gs_rethrow9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) gs_throw_imp(__func__, __FILE__, __LINE__, 1, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define gs_catch(code,fmt) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt)
#define gs_catch1(code,fmt,arg1) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1)
#define gs_catch2(code,fmt,arg1,arg2) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2)
#define gs_catch3(code,fmt,arg1,arg2,arg3) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3)
#define gs_catch4(code,fmt,arg1,arg2,arg3,arg4) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4)
#define gs_catch5(code,fmt,arg1,arg2,arg3,arg4,arg5) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4, arg5)
#define gs_catch6(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6)
#define gs_catch7(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define gs_catch8(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define gs_catch9(code,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) gs_throw_imp(__func__, __FILE__, __LINE__, 2, code, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#define gs_warn(fmt) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt)
#define gs_warn1(fmt,arg1) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1)
#define gs_warn2(fmt,arg1,arg2) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2)
#define gs_warn3(fmt,arg1,arg2,arg3) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3)
#define gs_warn4(fmt,arg1,arg2,arg3,arg4) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4)
#define gs_warn5(fmt,arg1,arg2,arg3,arg4,arg5) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4, arg5)
#define gs_warn6(fmt,arg1,arg2,arg3,arg4,arg5,arg6) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4, arg5, arg6)
#define gs_warn7(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
#define gs_warn8(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
#define gs_warn9(fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) (void)gs_throw_imp(__func__, __FILE__, __LINE__, 3, 0, fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
#endif
#define gs_okay 0
#endif
