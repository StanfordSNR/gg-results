// GGHASH:VjBcsbb6NtflygPkJM8Y3DldbEwbRwsRYofOiKpeUT3Y0003b2ae
#ifndef H_PERL
#define H_PERL 1
#ifdef PERL_FOR_X2P
#undef MULTIPLICITY
#undef USE_STDIO
#define USE_STDIO 
#endif
#ifdef PERL_MICRO
# include "uconfig.h"
#else
# include "config.h"
#endif
#ifdef DEBUGGING
#define _pDEPTH ,U32 depth
#define _aDEPTH ,depth
#else
#define _pDEPTH 
#define _aDEPTH 
#endif
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || defined(_STDC_C99) || defined(__c99)
#define HAS_C99 1
#endif
#ifdef USE_ITHREADS
# if !defined(MULTIPLICITY)
#define MULTIPLICITY 
# endif
#endif
#ifdef PERL_GLOBAL_STRUCT_PRIVATE
# ifndef PERL_GLOBAL_STRUCT
#define PERL_GLOBAL_STRUCT 
# endif
#endif
#ifdef PERL_GLOBAL_STRUCT
# ifndef MULTIPLICITY
#define MULTIPLICITY 
# endif
#endif
#ifdef MULTIPLICITY
# ifndef PERL_IMPLICIT_CONTEXT
#define PERL_IMPLICIT_CONTEXT 
# endif
#endif
#ifdef __CYGWIN__
#undef WIN32
#undef _WIN32
#endif
#if defined(__SYMBIAN32__) || (defined(__VC32__) && defined(WINS))
# ifndef SYMBIAN
#define SYMBIAN 
# endif
#endif
#ifdef __SYMBIAN32__
# include "symbian/symbian_proto.h"
#endif
#if defined(__SYMBIAN32__)
#define USE_HEAP_INSTEAD_OF_STACK 
#endif
#if defined(USE_ITHREADS) && !defined(USE_REENTRANT_API) && !defined(NETWARE) && !defined(WIN32) && !defined(PERL_DARWIN)
#define USE_REENTRANT_API 
#endif
#if defined(WIN32) && defined(_MSC_VER) && _MSC_VER >= 1200 && _MSC_VER < 1300
#define USING_MSVC6 
#endif
#undef START_EXTERN_C
#undef END_EXTERN_C
#undef EXTERN_C
#ifdef __cplusplus
#define START_EXTERN_C extern "C" {
#define END_EXTERN_C }
#define EXTERN_C extern "C"
#else
#define START_EXTERN_C 
#define END_EXTERN_C 
#define EXTERN_C extern
#endif
#if !defined(PERL_STATIC_INLINE)
# ifdef HAS_STATIC_INLINE
#define PERL_STATIC_INLINE static inline
# else
#define PERL_STATIC_INLINE static
# endif
#endif
#ifdef PERL_GLOBAL_STRUCT
# ifndef PERL_GET_VARS
# ifdef PERL_GLOBAL_STRUCT_PRIVATE
#define PERL_GET_VARS() Perl_GetVarsPrivate()
# else
#define PERL_GET_VARS() PL_VarsPtr
# endif
# endif
#endif
#define PERLIO_FUNCS_CONST 
#define pVAR struct perl_vars* my_vars PERL_UNUSED_DECL
#ifdef PERL_GLOBAL_STRUCT
#define dVAR pVAR = (struct perl_vars*)PERL_GET_VARS()
#else
#define dVAR dNOOP
#endif
#ifdef PERL_IMPLICIT_CONTEXT
# ifndef MULTIPLICITY
#define MULTIPLICITY 
# endif
#define tTHX PerlInterpreter*
#define pTHX tTHX my_perl PERL_UNUSED_DECL
#define aTHX my_perl
#define aTHXa(a) aTHX = (tTHX)a
# ifdef PERL_GLOBAL_STRUCT
#define dTHXa(a) dVAR; pTHX = (tTHX)a
# else
#define dTHXa(a) pTHX = (tTHX)a
# endif
# ifdef PERL_GLOBAL_STRUCT
#define dTHX dVAR; pTHX = PERL_GET_THX
# else
#define dTHX pTHX = PERL_GET_THX
# endif
#define pTHX_ pTHX,
#define aTHX_ aTHX,
#define pTHX_1 2
#define pTHX_2 3
#define pTHX_3 4
#define pTHX_4 5
#define pTHX_5 6
#define pTHX_6 7
#define pTHX_7 8
#define pTHX_8 9
#define pTHX_9 10
#define pTHX_12 13
# if defined(DEBUGGING) && !defined(PERL_TRACK_MEMPOOL)
#define PERL_TRACK_MEMPOOL 
# endif
#else
#undef PERL_TRACK_MEMPOOL
#endif
#define STATIC static
#ifndef PERL_CORE
#define CPERLscope(x) x
#define CPERLarg void
#define CPERLarg_ 
#define _CPERLarg 
#define PERL_OBJECT_THIS 
#define _PERL_OBJECT_THIS 
#define PERL_OBJECT_THIS_ 
#define CALL_FPTR(fptr) (*fptr)
#define MEMBER_TO_FPTR(name) name
#endif
#define CALLRUNOPS PL_runops
#define CALLREGCOMP(sv,flags) Perl_pregcomp(aTHX_ (sv),(flags))
#define CALLREGCOMP_ENG(prog,sv,flags) (prog)->comp(aTHX_ sv, flags)
#define CALLREGEXEC(prog,stringarg,strend,strbeg,minend,sv,data,flags) RX_ENGINE(prog)->exec(aTHX_ (prog),(stringarg),(strend), (strbeg),(minend),(sv),(data),(flags))
#define CALLREG_INTUIT_START(prog,sv,strbeg,strpos,strend,flags,data) RX_ENGINE(prog)->intuit(aTHX_ (prog), (sv), (strbeg), (strpos), (strend),(flags),(data))
#define CALLREG_INTUIT_STRING(prog) RX_ENGINE(prog)->checkstr(aTHX_ (prog))
#define CALLREGFREE(prog) Perl_pregfree(aTHX_ (prog))
#define CALLREGFREE_PVT(prog) if(prog) RX_ENGINE(prog)->rxfree(aTHX_ (prog))
#define CALLREG_NUMBUF_FETCH(rx,paren,usesv) RX_ENGINE(rx)->numbered_buff_FETCH(aTHX_ (rx),(paren),(usesv))
#define CALLREG_NUMBUF_STORE(rx,paren,value) RX_ENGINE(rx)->numbered_buff_STORE(aTHX_ (rx),(paren),(value))
#define CALLREG_NUMBUF_LENGTH(rx,sv,paren) RX_ENGINE(rx)->numbered_buff_LENGTH(aTHX_ (rx),(sv),(paren))
#define CALLREG_NAMED_BUFF_FETCH(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), NULL, ((flags) | RXapif_FETCH))
#define CALLREG_NAMED_BUFF_STORE(rx,key,value,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), (value), ((flags) | RXapif_STORE))
#define CALLREG_NAMED_BUFF_DELETE(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx),(key), NULL, ((flags) | RXapif_DELETE))
#define CALLREG_NAMED_BUFF_CLEAR(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, ((flags) | RXapif_CLEAR))
#define CALLREG_NAMED_BUFF_EXISTS(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), NULL, ((flags) | RXapif_EXISTS))
#define CALLREG_NAMED_BUFF_FIRSTKEY(rx,flags) RX_ENGINE(rx)->named_buff_iter(aTHX_ (rx), NULL, ((flags) | RXapif_FIRSTKEY))
#define CALLREG_NAMED_BUFF_NEXTKEY(rx,lastkey,flags) RX_ENGINE(rx)->named_buff_iter(aTHX_ (rx), (lastkey), ((flags) | RXapif_NEXTKEY))
#define CALLREG_NAMED_BUFF_SCALAR(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, ((flags) | RXapif_SCALAR))
#define CALLREG_NAMED_BUFF_COUNT(rx) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, RXapif_REGNAMES_COUNT)
#define CALLREG_NAMED_BUFF_ALL(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, flags)
#define CALLREG_PACKAGE(rx) RX_ENGINE(rx)->qr_package(aTHX_ (rx))
#if defined(USE_ITHREADS)
#define CALLREGDUPE(prog,param) Perl_re_dup(aTHX_ (prog),(param))
#define CALLREGDUPE_PVT(prog,param) (prog ? RX_ENGINE(prog)->dupe(aTHX_ (prog),(param)) : (REGEXP *)NULL)
#endif
#if defined(__SYMBIAN32__) && defined(__GNUC__)
# ifdef __cplusplus
#define PERL_UNUSED_DECL 
# else
#define PERL_UNUSED_DECL __attribute__((unused))
# endif
#endif
#ifndef PERL_UNUSED_DECL
# if defined(HASATTRIBUTE_UNUSED) && (!defined(__cplusplus) || (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3)))
#define PERL_UNUSED_DECL __attribute__unused__
# else
#define PERL_UNUSED_DECL 
# endif
#endif
#ifndef PERL_UNUSED_ARG
#define PERL_UNUSED_ARG(x) ((void)sizeof(x))
#endif
#ifndef PERL_UNUSED_VAR
#define PERL_UNUSED_VAR(x) ((void)sizeof(x))
#endif
#if defined(USE_ITHREADS) || defined(PERL_GLOBAL_STRUCT)
#define PERL_UNUSED_CONTEXT PERL_UNUSED_ARG(my_perl)
#else
#define PERL_UNUSED_CONTEXT 
#endif
#if defined(PERL_GCC_PEDANTIC) || (defined(__GNUC__) && defined(__cplusplus) && ((__GNUC__ < 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ < 2))))
# ifndef PERL_GCC_BRACE_GROUPS_FORBIDDEN
#define PERL_GCC_BRACE_GROUPS_FORBIDDEN 
# endif
#endif
#ifndef PERL_UNUSED_RESULT
# if defined(__GNUC__) && defined(HASATTRIBUTE_WARN_UNUSED_RESULT)
#define PERL_UNUSED_RESULT(v) STMT_START { __typeof__(v) z = (v); (void)sizeof(z); } STMT_END
# else
#define PERL_UNUSED_RESULT(v) ((void)(v))
# endif
#endif
#if defined(__clang__) || defined(__clang) || (defined( __GNUC__) && ((__GNUC__ * 100) + __GNUC_MINOR__) >= 406)
#define GCC_DIAG_PRAGMA(x) _Pragma (#x)
#define GCC_DIAG_IGNORE(x) _Pragma("GCC diagnostic push") GCC_DIAG_PRAGMA(GCC diagnostic ignored #x)
#define GCC_DIAG_RESTORE _Pragma("GCC diagnostic pop")
#else
#define GCC_DIAG_IGNORE(w) 
#define GCC_DIAG_RESTORE 
#endif
#if defined(__clang__) || defined(__clang)
#define CLANG_DIAG_PRAGMA(x) _Pragma (#x)
#define CLANG_DIAG_IGNORE(x) _Pragma("clang diagnostic push") CLANG_DIAG_PRAGMA(clang diagnostic ignored #x)
#define CLANG_DIAG_RESTORE _Pragma("clang diagnostic pop")
#else
#define CLANG_DIAG_IGNORE(w) 
#define CLANG_DIAG_RESTORE 
#endif
#define NOOP (void)0
#ifdef __cplusplus
#define dNOOP (void)0
#else
#define dNOOP extern int Perl___notused(void)
#endif
#ifndef pTHX
#define pTHX void
#define pTHX_ 
#define aTHX 
#define aTHX_ 
#define aTHXa(a) NOOP
#define dTHXa(a) dNOOP
#define dTHX dNOOP
#define pTHX_1 1
#define pTHX_2 2
#define pTHX_3 3
#define pTHX_4 4
#define pTHX_5 5
#define pTHX_6 6
#define pTHX_7 7
#define pTHX_8 8
#define pTHX_9 9
#define pTHX_12 12
#endif
#ifndef dVAR
#define dVAR dNOOP
#endif
#if !defined(pTHXo) && !defined(PERL_CORE)
#define pTHXo pTHX
#define pTHXo_ pTHX_
#define aTHXo aTHX
#define aTHXo_ aTHX_
#define dTHXo dTHX
#define dTHXoa(x) dTHXa(x)
#endif
#ifndef pTHXx
#define pTHXx PerlInterpreter *my_perl
#define pTHXx_ pTHXx,
#define aTHXx my_perl
#define aTHXx_ aTHXx,
#define dTHXx dTHX
#endif
#ifdef PERL_IMPLICIT_SYS
# ifdef PERL_GLOBAL_STRUCT_PRIVATE
#define dTHXs dVAR; dTHX
# else
#define dTHXs dTHX
# endif
#else
# ifdef PERL_GLOBAL_STRUCT_PRIVATE
#define dTHXs dVAR
# else
#define dTHXs dNOOP
# endif
#endif
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN) && !defined(__cplusplus)
# ifndef PERL_USE_GCC_BRACE_GROUPS
#define PERL_USE_GCC_BRACE_GROUPS 
# endif
#endif
#if !(defined(STMT_START) && defined(STMT_END))
# ifdef PERL_USE_GCC_BRACE_GROUPS
#define STMT_START (void)(
#define STMT_END )
# else
#define STMT_START do
#define STMT_END while (0)
# endif
#endif
#ifndef BYTEORDER
#define BYTEORDER 0x1234
#endif
#ifndef CONSERVATIVE
#define LIBERAL 1
#endif
#if 'A' == 65 && 'I' == 73 && 'J' == 74 && 'Z' == 90
#define ASCIIish 
#else
#undef ASCIIish
#endif
#if defined(MSDOS) || defined(WIN32) || defined(NETWARE)
#define DOSISH 1
#endif
#if defined(__STDC__) || defined(_AIX) || defined(__stdc__) || defined(__cplusplus) || defined(NETWARE) || defined(__SYMBIAN32__)
#define STANDARD_C 1
#endif
#if defined(__cplusplus) || defined(WIN32) || defined(__sgi) || defined(__EMX__) || defined(__QNX__) || defined(NETWARE) || defined(PERL_MICRO)
#define DONT_DECLARE_STD 1
#endif
#if defined(HASVOLATILE) || defined(STANDARD_C)
#define VOL volatile
#else
#define VOL 
#endif
#if defined(SILENT_NO_TAINT_SUPPORT) && !defined(NO_TAINT_SUPPORT)
#define NO_TAINT_SUPPORT 1
#endif
#ifdef NO_TAINT_SUPPORT
#define TAINT NOOP
#define TAINT_NOT NOOP
#define TAINT_IF(c) NOOP
#define TAINT_ENV() NOOP
#define TAINT_PROPER(s) NOOP
#define TAINT_set(s) NOOP
#define TAINT_get 0
#define TAINTING_get 0
#define TAINTING_set(s) NOOP
#define TAINT_WARN_get 0
#define TAINT_WARN_set(s) NOOP
#else
#define TAINT (PL_tainted = PL_tainting)
#define TAINT_NOT (PL_tainted = FALSE)
#define TAINT_IF(c) if (UNLIKELY(c)) { PL_tainted = PL_tainting; }
#define TAINT_ENV() if (UNLIKELY(PL_tainting)) { taint_env(); }
#define TAINT_PROPER(s) if (UNLIKELY(PL_tainting)) { taint_proper(NULL, s); }
#define TAINT_set(s) (PL_tainted = (s))
#define TAINT_get (PL_tainted)
#define TAINTING_get (PL_tainting)
#define TAINTING_set(s) (PL_tainting = (s))
#define TAINT_WARN_get (PL_taint_warn)
#define TAINT_WARN_set(s) (PL_taint_warn = (s))
#endif
#ifdef PERL_CORE
#define SUBST_TAINT_STR 1
#define SUBST_TAINT_PAT 2
#define SUBST_TAINT_REPL 4
#define SUBST_TAINT_RETAINT 8
#define SUBST_TAINT_BOOLRET 16
#endif
#ifdef HAS_SETPGID
#define BSD_SETPGRP(pid,pgrp) setpgid((pid), (pgrp))
#else
# if defined(HAS_SETPGRP) && defined(USE_BSD_SETPGRP)
#define BSD_SETPGRP(pid,pgrp) setpgrp((pid), (pgrp))
# else
# ifdef HAS_SETPGRP2
#define BSD_SETPGRP(pid,pgrp) setpgrp2((pid), (pgrp))
# endif
# endif
#endif
#if defined(BSD_SETPGRP) && !defined(HAS_SETPGRP)
#define HAS_SETPGRP 
#endif
#ifdef HAS_GETPGID
#define BSD_GETPGRP(pid) getpgid((pid))
#else
# if defined(HAS_GETPGRP) && defined(USE_BSD_GETPGRP)
#define BSD_GETPGRP(pid) getpgrp((pid))
# else
# ifdef HAS_GETPGRP2
#define BSD_GETPGRP(pid) getpgrp2((pid))
# endif
# endif
#endif
#if defined(BSD_GETPGRP) && !defined(HAS_GETPGRP)
#define HAS_GETPGRP 
#endif
#if defined(USE_BSD_SETPGRP) || defined(USE_BSD_GETPGRP)
# ifndef USE_BSDPGRP
#define USE_BSDPGRP 
# endif
#endif
#if defined(USE_ITHREADS) && defined(PTHREAD_H_FIRST) && defined(I_PTHREAD)
# include <pthread.h>
#endif
#include <sys/types.h>
#ifdef __cplusplus
# ifndef I_STDARG
#define I_STDARG 1
# endif
#endif
#if defined(UNDER_CE) && (_MSC_VER < 1300)
#define MB_CUR_MAX 1
#endif
#ifdef I_STDARG
# include <stdarg.h>
#else
# ifdef I_VARARGS
# include <varargs.h>
# endif
#endif
#ifdef I_STDINT
# include <stdint.h>
#endif
#include <ctype.h>
#ifdef METHOD
#undef METHOD
#endif
#ifdef PERL_MICRO
#define NO_LOCALE 
#endif
#ifdef I_LOCALE
# include <locale.h>
#endif
#ifdef I_XLOCALE
# include <xlocale.h>
#endif
#if !defined(NO_LOCALE) && defined(HAS_SETLOCALE)
#define USE_LOCALE 
#define HAS_SKIP_LOCALE_INIT 
# if !defined(NO_LOCALE_COLLATE) && defined(LC_COLLATE) && defined(HAS_STRXFRM)
#define USE_LOCALE_COLLATE 
# endif
# if !defined(NO_LOCALE_CTYPE) && defined(LC_CTYPE)
#define USE_LOCALE_CTYPE 
# endif
# if !defined(NO_LOCALE_NUMERIC) && defined(LC_NUMERIC)
#define USE_LOCALE_NUMERIC 
# endif
# if !defined(NO_LOCALE_MESSAGES) && defined(LC_MESSAGES)
#define USE_LOCALE_MESSAGES 
# endif
# if !defined(NO_LOCALE_MONETARY) && defined(LC_MONETARY)
#define USE_LOCALE_MONETARY 
# endif
# if !defined(NO_LOCALE_TIME) && defined(LC_TIME)
#define USE_LOCALE_TIME 
# endif
# ifndef WIN32
#define my_setlocale(a,b) setlocale(a,b)
# endif
#endif
#include <setjmp.h>
#ifdef I_SYS_PARAM
# ifdef PARAM_NEEDS_TYPES
# include <sys/types.h>
# endif
# include <sys/param.h>
#endif
#if defined(BSD)
# ifndef BSDish
#define BSDish 
# endif
#endif
#if defined(STANDARD_C) && defined(I_STDLIB)
# include <stdlib.h>
#endif
#ifdef I_UNISTD
# if defined(__amigaos4__)
# ifdef I_NETINET_IN
# include <netinet/in.h>
# endif
# endif
# include <unistd.h>
# if defined(__amigaos4__)
#undef environ
#define environ myenviron
# endif
#endif
#ifdef I_SYS_WAIT
# include <sys/wait.h>
#endif
#ifdef __SYMBIAN32__
#undef _SC_ARG_MAX
#endif
#if defined(HAS_SYSCALL) && !defined(HAS_SYSCALL_PROTO)
#endif
#if defined(HAS_USLEEP) && !defined(HAS_USLEEP_PROTO)
#endif
#ifdef PERL_CORE
# if INTSIZE >= 2
#define U16_CONST(x) ((U16)x ##U)
# else
#define U16_CONST(x) ((U16)x ##UL)
# endif
# if INTSIZE >= 4
#define U32_CONST(x) ((U32)x ##U)
# else
#define U32_CONST(x) ((U32)x ##UL)
# endif
# ifdef HAS_QUAD
# if INTSIZE >= 8
#define U64_CONST(x) ((U64)x ##U)
# elif LONGSIZE >= 8
#define U64_CONST(x) ((U64)x ##UL)
# elif QUADKIND == QUAD_IS_LONG_LONG
#define U64_CONST(x) ((U64)x ##ULL)
# elif QUADKIND == QUAD_IS___INT64
#define U64_CONST(x) ((U64)x ##UI64)
# else
#define U64_CONST(x) ((U64)x ##UL)
# endif
# endif
#define _swab_16_(x) ((U16)( (((U16)(x) & U16_CONST(0x00ff)) << 8) | (((U16)(x) & U16_CONST(0xff00)) >> 8) ))
#define _swab_32_(x) ((U32)( (((U32)(x) & U32_CONST(0x000000ff)) << 24) | (((U32)(x) & U32_CONST(0x0000ff00)) << 8) | (((U32)(x) & U32_CONST(0x00ff0000)) >> 8) | (((U32)(x) & U32_CONST(0xff000000)) >> 24) ))
# ifdef HAS_QUAD
#define _swab_64_(x) ((U64)( (((U64)(x) & U64_CONST(0x00000000000000ff)) << 56) | (((U64)(x) & U64_CONST(0x000000000000ff00)) << 40) | (((U64)(x) & U64_CONST(0x0000000000ff0000)) << 24) | (((U64)(x) & U64_CONST(0x00000000ff000000)) << 8) | (((U64)(x) & U64_CONST(0x000000ff00000000)) >> 8) | (((U64)(x) & U64_CONST(0x0000ff0000000000)) >> 24) | (((U64)(x) & U64_CONST(0x00ff000000000000)) >> 40) | (((U64)(x) & U64_CONST(0xff00000000000000)) >> 56) ))
# endif
#ifndef PERL_ARENA_SIZE
#define PERL_ARENA_SIZE 4080
#endif
#ifndef PERL_SUB_DEPTH_WARN
#define PERL_SUB_DEPTH_WARN 100
#endif
#endif
#ifndef PERL_CREATE_GVSV
# ifndef PERL_DONT_CREATE_GVSV
#define PERL_DONT_CREATE_GVSV 
# endif
#endif
#if !defined(HAS_WAITPID) && !defined(HAS_WAIT4) || defined(HAS_WAITPID_RUNTIME)
#define PERL_USES_PL_PIDSTATUS 
#endif
#if !defined(OS2) && !defined(WIN32) && !defined(DJGPP) && !defined(__SYMBIAN32__)
#define PERL_DEFAULT_DO_EXEC3_IMPLEMENTATION 
#endif
#define MEM_SIZE Size_t
#ifndef PERL_STRLEN_ROUNDUP_QUANTUM
#define PERL_STRLEN_ROUNDUP_QUANTUM Size_t_size
#endif
#ifndef PERL_STRLEN_EXPAND_SHIFT
#define PERL_STRLEN_EXPAND_SHIFT 2
#endif
#if defined(STANDARD_C) && defined(I_STDDEF) && !defined(PERL_GCC_PEDANTIC)
# include <stddef.h>
#define STRUCT_OFFSET(s,m) offsetof(s,m)
#else
#define STRUCT_OFFSET(s,m) (Size_t)(&(((s *)0)->m))
#endif
#ifdef PERL_GCC_PEDANTIC
#undef HAS_PTRDIFF_T
#endif
#ifndef __SYMBIAN32__
# if defined(I_STRING) || defined(__cplusplus)
# include <string.h>
# else
# include <strings.h>
# endif
#endif
#ifdef MYMALLOC
# ifdef PERL_POLLUTE_MALLOC
# ifndef PERL_EXTMALLOC_DEF
#define Perl_malloc malloc
#define Perl_calloc calloc
#define Perl_realloc realloc
#define Perl_mfree free
# endif
# else
#define EMBEDMYMALLOC 
# endif
#define safemalloc Perl_malloc
#define safecalloc Perl_calloc
#define saferealloc Perl_realloc
#define safefree Perl_mfree
#define CHECK_MALLOC_TOO_LATE_FOR_(code) STMT_START { if (!PL_tainting && MallocCfg_ptr[MallocCfg_cfg_env_read]) code; } STMT_END
#define CHECK_MALLOC_TOO_LATE_FOR(ch) CHECK_MALLOC_TOO_LATE_FOR_(MALLOC_TOO_LATE_FOR(ch))
#define panic_write2(s) write(2, s, strlen(s))
#define CHECK_MALLOC_TAINT(newval) CHECK_MALLOC_TOO_LATE_FOR_( if (newval) { PERL_UNUSED_RESULT(panic_write2("panic: tainting with $ENV{PERL_MALLOC_OPT}\n")); exit(1); })
#define MALLOC_CHECK_TAINT(argc,argv,env) STMT_START { if (doing_taint(argc,argv,env)) { MallocCfg_ptr[MallocCfg_skip_cfg_env] = 1; }} STMT_END;
#else
#define safemalloc safesysmalloc
#define safecalloc safesyscalloc
#define saferealloc safesysrealloc
#define safefree safesysfree
#define CHECK_MALLOC_TOO_LATE_FOR(ch) ((void)0)
#define CHECK_MALLOC_TAINT(newval) ((void)0)
#define MALLOC_CHECK_TAINT(argc,argv,env) 
#endif
#define TOO_LATE_FOR_(ch,what) Perl_croak(aTHX_ "\"-%c\" is on the #! line, it must also be used on the command line%s", (char)(ch), what)
#define TOO_LATE_FOR(ch) TOO_LATE_FOR_(ch, "")
#define MALLOC_TOO_LATE_FOR(ch) TOO_LATE_FOR_(ch, " with $ENV{PERL_MALLOC_OPT}")
#define MALLOC_CHECK_TAINT2(argc,argv) MALLOC_CHECK_TAINT(argc,argv,NULL)
#if !defined(HAS_STRCHR) && defined(HAS_INDEX) && !defined(strchr)
#define strchr index
#define strrchr rindex
#endif
#ifdef I_MEMORY
# include <memory.h>
#endif
#ifdef HAS_MEMCPY
# if !defined(STANDARD_C) && !defined(I_STRING) && !defined(I_MEMORY)
# ifndef memcpy
# endif
# endif
#else
# ifndef memcpy
#define memcpy(d,s,l) my_bcopy(s,d,l)
# endif
#endif
#ifdef HAS_MEMSET
# if !defined(STANDARD_C) && !defined(I_STRING) && !defined(I_MEMORY)
# ifndef memset
# endif
# endif
#else
#undef memset
#define memset(d,c,l) my_memset(d,c,l)
#endif
#if !defined(HAS_MEMMOVE) && !defined(memmove)
# if defined(HAS_MEMCPY) && defined(HAS_SAFE_MEMCPY)
#define memmove(d,s,l) memcpy(d,s,l)
# else
#define memmove(d,s,l) my_bcopy(s,d,l)
# endif
#endif
#if defined(mips) && defined(ultrix) && !defined(__STDC__)
#undef HAS_MEMCMP
#endif
#if defined(HAS_MEMCMP) && defined(HAS_SANE_MEMCMP)
# if !defined(STANDARD_C) && !defined(I_STRING) && !defined(I_MEMORY)
# ifndef memcmp
# endif
# endif
#else
#undef memcmp
#define memcmp my_memcmp
#endif
#ifndef memzero
# ifdef HAS_MEMSET
#define memzero(d,l) memset(d,0,l)
# else
# ifdef HAS_BZERO
#define memzero(d,l) bzero(d,l)
# else
#define memzero(d,l) my_bzero(d,l)
# endif
# endif
#endif
#ifndef PERL_MICRO
#ifndef memchr
# ifndef HAS_MEMCHR
#define memchr(s,c,n) ninstr((char*)(s), ((char*)(s)) + n, &(c), &(c) + 1)
# endif
#endif
#endif
#ifndef HAS_BCMP
# ifndef bcmp
#define bcmp(s1,s2,l) memcmp(s1,s2,l)
# endif
#endif
#ifdef I_NETINET_IN
# include <netinet/in.h>
#endif
#ifdef I_ARPA_INET
# include <arpa/inet.h>
#endif
#ifdef I_SYS_STAT
# include <sys/stat.h>
#endif
#if !defined(S_IFIFO) && defined(_S_IFIFO)
#define S_IFIFO _S_IFIFO
#endif
#if defined(m88k) && defined(ghs)
#undef S_ISDIR
#undef S_ISCHR
#undef S_ISBLK
#undef S_ISREG
#undef S_ISFIFO
#undef S_ISLNK
#endif
#ifdef I_TIME
# include <time.h>
#endif
#ifdef I_SYS_TIME
# ifdef I_SYS_TIME_KERNEL
#define KERNEL 
# endif
# include <sys/time.h>
# ifdef I_SYS_TIME_KERNEL
#undef KERNEL
# endif
#endif
#if defined(HAS_TIMES) && defined(I_SYS_TIMES)
# include <sys/times.h>
#endif
#if defined(HAS_STRERROR) && (!defined(HAS_MKDIR) || !defined(HAS_RMDIR))
#undef HAS_STRERROR
#endif
#include <errno.h>
#if defined(WIN32) && defined(PERL_IMPLICIT_SYS)
#define WIN32SCK_IS_STDSCK 
#endif
#if defined(HAS_SOCKET) && !defined(WIN32)
# include <sys/socket.h>
# if defined(USE_SOCKS) && defined(I_SOCKS)
# if !defined(INCLUDE_PROTOTYPES)
#define INCLUDE_PROTOTYPES 
#define PERL_SOCKS_NEED_PROTOTYPES 
# endif
# include <socks.h>
# ifdef PERL_SOCKS_NEED_PROTOTYPES
#undef INCLUDE_PROTOTYPES
#undef PERL_SOCKS_NEED_PROTOTYPES
# endif
# endif
# ifdef I_NETDB
# ifdef NETWARE
# include<stdio.h>
# endif
# include <netdb.h>
# endif
# ifndef ENOTSOCK
# ifdef I_NET_ERRNO
# include <net/errno.h>
# endif
# endif
#endif
#if defined(HAS_SOCKATMARK) && !defined(HAS_SOCKATMARK_PROTO)
# if defined(__THROW) && defined(__GLIBC__)
# else
# endif
#endif
#if defined(__osf__) && defined(__cplusplus) && !defined(_XOPEN_SOURCE_EXTENDED)
#endif
#if defined(__SUNPRO_CC)
#endif
#if defined(__cplusplus)
# if defined(BSDish)
# elif defined(__CYGWIN__)
#endif
#endif
#ifdef SETERRNO
#undef SETERRNO
#endif
#ifdef VMS
#define SETERRNO(errcode,vmserrcode) STMT_START { set_errno(errcode); set_vaxc_errno(vmserrcode); } STMT_END
#define dSAVEDERRNO int saved_errno; unsigned saved_vms_errno
#define dSAVE_ERRNO int saved_errno = errno; unsigned saved_vms_errno = vaxc$errno
#define SAVE_ERRNO ( saved_errno = errno, saved_vms_errno = vaxc$errno )
#define RESTORE_ERRNO SETERRNO(saved_errno, saved_vms_errno)
#define LIB_INVARG LIB$_INVARG
#define RMS_DIR RMS$_DIR
#define RMS_FAC RMS$_FAC
#define RMS_FEX RMS$_FEX
#define RMS_FNF RMS$_FNF
#define RMS_IFI RMS$_IFI
#define RMS_ISI RMS$_ISI
#define RMS_PRV RMS$_PRV
#define SS_ACCVIO SS$_ACCVIO
#define SS_DEVOFFLINE SS$_DEVOFFLINE
#define SS_IVCHAN SS$_IVCHAN
#define SS_NORMAL SS$_NORMAL
#define SS_NOPRIV SS$_NOPRIV
#define SS_BUFFEROVF SS$_BUFFEROVF
#else
#define LIB_INVARG 0
#define RMS_DIR 0
#define RMS_FAC 0
#define RMS_FEX 0
#define RMS_FNF 0
#define RMS_IFI 0
#define RMS_ISI 0
#define RMS_PRV 0
#define SS_ACCVIO 0
#define SS_DEVOFFLINE 0
#define SS_IVCHAN 0
#define SS_NORMAL 0
#define SS_NOPRIV 0
#define SS_BUFFEROVF 0
#endif
#ifdef WIN32
#define dSAVEDERRNO int saved_errno; DWORD saved_win32_errno
#define dSAVE_ERRNO int saved_errno = errno; DWORD saved_win32_errno = GetLastError()
#define SAVE_ERRNO ( saved_errno = errno, saved_win32_errno = GetLastError() )
#define RESTORE_ERRNO ( errno = saved_errno, SetLastError(saved_win32_errno) )
#endif
#ifdef OS2
#define dSAVEDERRNO int saved_errno; unsigned long saved_os2_errno
#define dSAVE_ERRNO int saved_errno = errno; unsigned long saved_os2_errno = Perl_rc
#define SAVE_ERRNO ( saved_errno = errno, saved_os2_errno = Perl_rc )
#define RESTORE_ERRNO ( errno = saved_errno, Perl_rc = saved_os2_errno )
#endif
#ifndef SETERRNO
#define SETERRNO(errcode,vmserrcode) (errno = (errcode))
#endif
#ifndef dSAVEDERRNO
#define dSAVEDERRNO int saved_errno
#define dSAVE_ERRNO int saved_errno = errno
#define SAVE_ERRNO (saved_errno = errno)
#define RESTORE_ERRNO (errno = saved_errno)
#endif
#define ERRSV GvSVn(PL_errgv)
#define CLEAR_ERRSV() STMT_START { SV ** const svp = &GvSV(PL_errgv); if (!*svp) { *svp = newSVpvs(""); } else if (SvREADONLY(*svp)) { SvREFCNT_dec_NN(*svp); *svp = newSVpvs(""); } else { SV *const errsv = *svp; SvPVCLEAR(errsv); SvPOK_only(errsv); if (SvMAGICAL(errsv)) { mg_free(errsv); } } } STMT_END
#ifdef PERL_CORE
#define DEFSV (0 + GvSVn(PL_defgv))
#define DEFSV_set(sv) (SvREFCNT_dec(GvSV(PL_defgv)), GvSV(PL_defgv) = SvREFCNT_inc(sv))
#define SAVE_DEFSV ( save_gp(PL_defgv, 0), GvINTRO_off(PL_defgv), SAVEGENERICSV(GvSV(PL_defgv)), GvSV(PL_defgv) = NULL )
#else
#define DEFSV GvSVn(PL_defgv)
#define DEFSV_set(sv) (GvSV(PL_defgv) = (sv))
#define SAVE_DEFSV SAVESPTR(GvSV(PL_defgv))
#endif
#ifndef errno
#endif
#define UNKNOWN_ERRNO_MSG "(unknown)"
#ifdef HAS_STRERROR
# ifndef DONT_DECLARE_STD
# ifdef VMS
# else
# endif
# endif
# ifndef Strerror
#define Strerror strerror
# endif
#else
# ifdef HAS_SYS_ERRLIST
# ifndef Strerror
#define Strerror(e) ((e) < 0 || (e) >= sys_nerr ? UNKNOWN_ERRNO_MSG : sys_errlist[e])
# endif
# endif
#endif
#ifdef I_SYS_IOCTL
# ifndef _IOCTL_
# include <sys/ioctl.h>
# endif
#endif
#if defined(mc300) || defined(mc500) || defined(mc700) || defined(mc6000)
# ifdef HAS_SOCKETPAIR
#undef HAS_SOCKETPAIR
# endif
# ifdef I_NDBM
#undef I_NDBM
# endif
#endif
#ifndef HAS_SOCKETPAIR
# ifdef HAS_SOCKET
#define socketpair Perl_my_socketpair
# endif
#endif
#if INTSIZE == 2
#define htoni htons
#define ntohi ntohs
#else
#define htoni htonl
#define ntohi ntohl
#endif
#if defined(I_DIRENT)
# include <dirent.h>
#else
# ifdef I_SYS_NDIR
# include <sys/ndir.h>
# else
# ifdef I_SYS_DIR
# ifdef hp9000s500
# include <ndir.h>
# else
# include <sys/dir.h>
# endif
# endif
# endif
#endif
#if defined(I_SYSMODE)
#include <sys/mode.h>
#endif
#ifndef S_IFMT
# ifdef _S_IFMT
#define S_IFMT _S_IFMT
# else
#define S_IFMT 0170000
# endif
#endif
#ifndef S_ISDIR
#define S_ISDIR(m) ((m & S_IFMT) == S_IFDIR)
#endif
#ifndef S_ISCHR
#define S_ISCHR(m) ((m & S_IFMT) == S_IFCHR)
#endif
#ifndef S_ISBLK
# ifdef S_IFBLK
#define S_ISBLK(m) ((m & S_IFMT) == S_IFBLK)
# else
#define S_ISBLK(m) (0)
# endif
#endif
#ifndef S_ISREG
#define S_ISREG(m) ((m & S_IFMT) == S_IFREG)
#endif
#ifndef S_ISFIFO
# ifdef S_IFIFO
#define S_ISFIFO(m) ((m & S_IFMT) == S_IFIFO)
# else
#define S_ISFIFO(m) (0)
# endif
#endif
#ifndef S_ISLNK
# ifdef _S_ISLNK
#define S_ISLNK(m) _S_ISLNK(m)
# else
# ifdef _S_IFLNK
#define S_ISLNK(m) ((m & S_IFMT) == _S_IFLNK)
# else
# ifdef S_IFLNK
#define S_ISLNK(m) ((m & S_IFMT) == S_IFLNK)
# else
#define S_ISLNK(m) (0)
# endif
# endif
# endif
#endif
#ifndef S_ISSOCK
# ifdef _S_ISSOCK
#define S_ISSOCK(m) _S_ISSOCK(m)
# else
# ifdef _S_IFSOCK
#define S_ISSOCK(m) ((m & S_IFMT) == _S_IFSOCK)
# else
# ifdef S_IFSOCK
#define S_ISSOCK(m) ((m & S_IFMT) == S_IFSOCK)
# else
#define S_ISSOCK(m) (0)
# endif
# endif
# endif
#endif
#ifndef S_IRUSR
# ifdef S_IREAD
#define S_IRUSR S_IREAD
#define S_IWUSR S_IWRITE
#define S_IXUSR S_IEXEC
# else
#define S_IRUSR 0400
#define S_IWUSR 0200
#define S_IXUSR 0100
# endif
#endif
#ifndef S_IRGRP
# ifdef S_IRUSR
#define S_IRGRP (S_IRUSR>>3)
#define S_IWGRP (S_IWUSR>>3)
#define S_IXGRP (S_IXUSR>>3)
# else
#define S_IRGRP 0040
#define S_IWGRP 0020
#define S_IXGRP 0010
# endif
#endif
#ifndef S_IROTH
# ifdef S_IRUSR
#define S_IROTH (S_IRUSR>>6)
#define S_IWOTH (S_IWUSR>>6)
#define S_IXOTH (S_IXUSR>>6)
# else
#define S_IROTH 0040
#define S_IWOTH 0020
#define S_IXOTH 0010
# endif
#endif
#ifndef S_ISUID
#define S_ISUID 04000
#endif
#ifndef S_ISGID
#define S_ISGID 02000
#endif
#ifndef S_IRWXU
#define S_IRWXU (S_IRUSR|S_IWUSR|S_IXUSR)
#endif
#ifndef S_IRWXG
#define S_IRWXG (S_IRGRP|S_IWGRP|S_IXGRP)
#endif
#ifndef S_IRWXO
#define S_IRWXO (S_IROTH|S_IWOTH|S_IXOTH)
#endif
#if !defined(S_IREAD) && !defined(__HAIKU__)
#define S_IREAD S_IRUSR
#endif
#if !defined(S_IWRITE) && !defined(__HAIKU__)
#define S_IWRITE S_IWUSR
#endif
#ifndef S_IEXEC
#define S_IEXEC S_IXUSR
#endif
#if defined(cray) || defined(gould) || defined(i860) || defined(pyr)
#define SLOPPYDIVIDE 
#endif
#ifdef UV
#undef UV
#endif
#ifdef SPRINTF_RETURNS_STRLEN
#define my_sprintf sprintf
#else
#define my_sprintf Perl_my_sprintf
#endif
#define PERL_SNPRINTF_CHECK(len,max,api) STMT_START { if ((max) > 0 && (Size_t)len >= (max)) Perl_croak_nocontext("panic: %s buffer overflow", STRINGIFY(api)); } STMT_END
#ifdef USE_QUADMATH
#define my_snprintf Perl_my_snprintf
#define PERL_MY_SNPRINTF_GUARDED 
#else
#if defined(HAS_SNPRINTF) && defined(HAS_C99_VARIADIC_MACROS) && !(defined(DEBUGGING) && !defined(PERL_USE_GCC_BRACE_GROUPS)) && !defined(PERL_GCC_PEDANTIC)
# ifdef PERL_USE_GCC_BRACE_GROUPS
#define my_snprintf(buffer,max,...) ({ int len = snprintf(buffer, max, __VA_ARGS__); PERL_SNPRINTF_CHECK(len, max, snprintf); len; })
#define PERL_MY_SNPRINTF_GUARDED 
# else
#define my_snprintf(buffer,max,...) snprintf(buffer, max, __VA_ARGS__)
# endif
#else
#define my_snprintf Perl_my_snprintf
#define PERL_MY_SNPRINTF_GUARDED 
#endif
#endif
#if defined(HAS_VSNPRINTF) && defined(HAS_C99_VARIADIC_MACROS) && !(defined(DEBUGGING) && !defined(PERL_USE_GCC_BRACE_GROUPS)) && !defined(PERL_GCC_PEDANTIC)
# ifdef PERL_USE_GCC_BRACE_GROUPS
#define my_vsnprintf(buffer,max,...) ({ int len = vsnprintf(buffer, max, __VA_ARGS__); PERL_SNPRINTF_CHECK(len, max, vsnprintf); len; })
#define PERL_MY_VSNPRINTF_GUARDED 
# else
#define my_vsnprintf(buffer,max,...) vsnprintf(buffer, max, __VA_ARGS__)
# endif
#else
#define my_vsnprintf Perl_my_vsnprintf
#define PERL_MY_VSNPRINTF_GUARDED 
#endif
#ifndef PERL_MY_SNPRINTF_GUARDED
#define PERL_MY_SNPRINTF_POST_GUARD(len,max) PERL_SNPRINTF_CHECK(len, max, snprintf)
#else
#define PERL_MY_SNPRINTF_POST_GUARD(len,max) PERL_UNUSED_VAR(len)
#endif
#ifndef PERL_MY_VSNPRINTF_GUARDED
#define PERL_MY_VSNPRINTF_POST_GUARD(len,max) PERL_SNPRINTF_CHECK(len, max, vsnprintf)
#else
#define PERL_MY_VSNPRINTF_POST_GUARD(len,max) PERL_UNUSED_VAR(len)
#endif
#ifdef HAS_STRLCAT
#define my_strlcat strlcat
#else
#define my_strlcat Perl_my_strlcat
#endif
#ifdef HAS_STRLCPY
#define my_strlcpy strlcpy
#else
#define my_strlcpy Perl_my_strlcpy
#endif
#if defined(USE_64_BIT_INT) && defined(HAS_QUAD)
# if QUADKIND == QUAD_IS_INT64_T && defined(INT64_MAX)
#define IV_MAX INT64_MAX
#define IV_MIN INT64_MIN
#define UV_MAX UINT64_MAX
# ifndef UINT64_MIN
#define UINT64_MIN 0
# endif
#define UV_MIN UINT64_MIN
# else
#define IV_MAX PERL_QUAD_MAX
#define IV_MIN PERL_QUAD_MIN
#define UV_MAX PERL_UQUAD_MAX
#define UV_MIN PERL_UQUAD_MIN
# endif
#define IV_IS_QUAD 
#define UV_IS_QUAD 
#else
# if defined(INT32_MAX) && IVSIZE == 4
#define IV_MAX INT32_MAX
#define IV_MIN INT32_MIN
# ifndef UINT32_MAX_BROKEN
#define UV_MAX UINT32_MAX
# else
#define UV_MAX 4294967295U
# endif
# ifndef UINT32_MIN
#define UINT32_MIN 0
# endif
#define UV_MIN UINT32_MIN
# else
#define IV_MAX PERL_LONG_MAX
#define IV_MIN PERL_LONG_MIN
#define UV_MAX PERL_ULONG_MAX
#define UV_MIN PERL_ULONG_MIN
# endif
# if IVSIZE == 8
#define IV_IS_QUAD 
#define UV_IS_QUAD 
# ifndef HAS_QUAD
#define HAS_QUAD 
# endif
# else
#undef IV_IS_QUAD
#undef UV_IS_QUAD
#if !defined(PERL_CORE) || defined(USING_MSVC6)
#undef HAS_QUAD
#endif
# endif
#endif
#define Size_t_MAX (~(Size_t)0)
#define SSize_t_MAX (SSize_t)(~(Size_t)0 >> 1)
#define IV_DIG (BIT_DIGITS(IVSIZE * 8))
#define UV_DIG (BIT_DIGITS(UVSIZE * 8))
#ifndef NO_PERL_PRESERVE_IVUV
#define PERL_PRESERVE_IVUV 
#endif
#if (IVSIZE == PTRSIZE) && (UVSIZE == PTRSIZE)
#define PTRV UV
#define INT2PTR(any,d) (any)(d)
#else
# if PTRSIZE == LONGSIZE
#define PTRV unsigned long
#define PTR2ul(p) (unsigned long)(p)
# else
#define PTRV unsigned
# endif
#endif
#ifndef INT2PTR
#define INT2PTR(any,d) (any)(PTRV)(d)
#endif
#ifndef PTR2ul
#define PTR2ul(p) INT2PTR(unsigned long,p)
#endif
#define NUM2PTR(any,d) (any)(PTRV)(d)
#define PTR2IV(p) INT2PTR(IV,p)
#define PTR2UV(p) INT2PTR(UV,p)
#define PTR2NV(p) NUM2PTR(NV,p)
#define PTR2nat(p) (PTRV)(p)
#define DPTR2FPTR(t,p) ((t)PTR2nat(p))
#define FPTR2DPTR(t,p) ((t)PTR2nat(p))
#ifdef USE_LONG_DOUBLE
# if LONG_DOUBLESIZE == DOUBLESIZE
#define LONG_DOUBLE_EQUALS_DOUBLE 
#undef USE_LONG_DOUBLE
# endif
#endif
#ifdef OVR_DBL_DIG
# ifdef DBL_DIG
#undef DBL_DIG
# endif
#define DBL_DIG OVR_DBL_DIG
#else
#ifdef I_LIMITS
#include <limits.h>
#endif
#ifdef I_FLOAT
#include <float.h>
#endif
#ifndef HAS_DBL_DIG
#define DBL_DIG 15
#endif
#endif
#ifdef OVR_LDBL_DIG
# ifdef LDBL_DIG
#undef LDBL_DIG
# endif
#define LDBL_DIG OVR_LDBL_DIG
#else
# ifdef I_LIMITS
# include <limits.h>
# endif
# ifdef I_FLOAT
# include <float.h>
# endif
# ifndef HAS_LDBL_DIG
# if LONG_DOUBLESIZE == 10
#define LDBL_DIG 18
# else
# if LONG_DOUBLESIZE == 12
#define LDBL_DIG 18
# else
# if LONG_DOUBLESIZE == 16
#define LDBL_DIG 33
# else
# if LONG_DOUBLESIZE == DOUBLESIZE
#define LDBL_DIG DBL_DIG
# endif
# endif
# endif
# endif
# endif
#endif
#ifdef I_LIMITS
# include <limits.h>
#endif
#ifdef I_VALUES
# if !(defined(DBL_MIN) && defined(DBL_MAX) && defined(I_LIMITS))
# include <values.h>
# if defined(MAXDOUBLE) && !defined(DBL_MAX)
#define DBL_MAX MAXDOUBLE
# endif
# if defined(MINDOUBLE) && !defined(DBL_MIN)
#define DBL_MIN MINDOUBLE
# endif
# endif
#endif
#ifdef I_IEEEFP
# include <ieeefp.h>
#endif
#ifdef USING_MSVC6
#define NAN_COMPARE_BROKEN 
#endif
#if defined(__DECC) && defined(__osf__)
#define NAN_COMPARE_BROKEN 
#endif
#if defined(__sgi)
#define NAN_COMPARE_BROKEN 
#endif
#ifdef USE_LONG_DOUBLE
# ifdef I_SUNMATH
# include <sunmath.h>
# endif
# if defined(LDBL_DIG)
#define NV_DIG LDBL_DIG
# ifdef LDBL_MANT_DIG
#define NV_MANT_DIG LDBL_MANT_DIG
# endif
# ifdef LDBL_MIN
#define NV_MIN LDBL_MIN
# endif
# ifdef LDBL_MAX
#define NV_MAX LDBL_MAX
# endif
# ifdef LDBL_MIN_EXP
#define NV_MIN_EXP LDBL_MIN_EXP
# endif
# ifdef LDBL_MAX_EXP
#define NV_MAX_EXP LDBL_MAX_EXP
# endif
# ifdef LDBL_MIN_10_EXP
#define NV_MIN_10_EXP LDBL_MIN_10_EXP
# endif
# ifdef LDBL_MAX_10_EXP
#define NV_MAX_10_EXP LDBL_MAX_10_EXP
# endif
# ifdef LDBL_EPSILON
#define NV_EPSILON LDBL_EPSILON
# endif
# ifdef LDBL_MAX
#define NV_MAX LDBL_MAX
# else
# ifdef HUGE_VALL
#define NV_MAX HUGE_VALL
# endif
# endif
# endif
# if defined(HAS_SQRTL)
#define Perl_acos acosl
#define Perl_asin asinl
#define Perl_atan atanl
#define Perl_atan2 atan2l
#define Perl_ceil ceill
#define Perl_cos cosl
#define Perl_cosh coshl
#define Perl_exp expl
#define Perl_floor floorl
#define Perl_fmod fmodl
#define Perl_log logl
#define Perl_log10 log10l
#define Perl_pow powl
#define Perl_sin sinl
#define Perl_sinh sinhl
#define Perl_sqrt sqrtl
#define Perl_tan tanl
#define Perl_tanh tanhl
# endif
# ifndef Perl_modf
# ifdef HAS_MODFL
#define Perl_modf(x,y) modfl(x,y)
# ifndef HAS_MODFL_PROTO
# endif
# elif (defined(HAS_TRUNCL) || defined(HAS_AINTL)) && defined(HAS_COPYSIGNL)
#define Perl_modf(x,y) Perl_my_modfl(x,y)
# endif
# endif
# ifndef Perl_frexp
# ifdef HAS_FREXPL
#define Perl_frexp(x,y) frexpl(x,y)
# else
# if defined(HAS_ILOGBL) && defined(HAS_SCALBNL)
#define Perl_frexp(x,y) Perl_my_frexpl(x,y)
# endif
# endif
# endif
# ifndef Perl_ldexp
# ifdef HAS_LDEXPL
#define Perl_ldexp(x,y) ldexpl(x,y)
# else
# if defined(HAS_SCALBNL) && FLT_RADIX == 2
#define Perl_ldexp(x,y) scalbnl(x,y)
# endif
# endif
# endif
# ifndef Perl_isnan
# if defined(HAS_ISNANL) && !(defined(isnan) && defined(HAS_C99))
#define Perl_isnan(x) isnanl(x)
# elif defined(__sgi) && defined(__c99)
#define Perl_isnan(x) isnan(x)
# endif
# endif
# ifndef Perl_isinf
# if defined(HAS_ISINFL) && !(defined(isinf) && defined(HAS_C99))
#define Perl_isinf(x) isinfl(x)
# elif defined(__sgi) && defined(__c99)
#define Perl_isinf(x) isinf(x)
# elif defined(LDBL_MAX) && !defined(NAN_COMPARE_BROKEN)
#define Perl_isinf(x) ((x) > LDBL_MAX || (x) < -LDBL_MAX)
# endif
# endif
# ifndef Perl_isfinite
#define Perl_isfinite(x) Perl_isfinitel(x)
# endif
#elif defined(USE_QUADMATH) && defined(I_QUADMATH)
# include <quadmath.h>
#define NV_DIG FLT128_DIG
#define NV_MANT_DIG FLT128_MANT_DIG
#define NV_MIN FLT128_MIN
#define NV_MAX FLT128_MAX
#define NV_MIN_EXP FLT128_MIN_EXP
#define NV_MAX_EXP FLT128_MAX_EXP
#define NV_EPSILON FLT128_EPSILON
#define NV_MIN_10_EXP FLT128_MIN_10_EXP
#define NV_MAX_10_EXP FLT128_MAX_10_EXP
#define Perl_acos acosq
#define Perl_asin asinq
#define Perl_atan atanq
#define Perl_atan2 atan2q
#define Perl_ceil ceilq
#define Perl_cos cosq
#define Perl_cosh coshq
#define Perl_exp expq
#define Perl_floor floorq
#define Perl_fmod fmodq
#define Perl_log logq
#define Perl_log10 log10q
#define Perl_pow powq
#define Perl_sin sinq
#define Perl_sinh sinhq
#define Perl_sqrt sqrtq
#define Perl_tan tanq
#define Perl_tanh tanhq
#define Perl_modf(x,y) modfq(x,y)
#define Perl_frexp(x,y) frexpq(x,y)
#define Perl_ldexp(x,y) ldexpq(x,y)
#define Perl_isinf(x) isinfq(x)
#define Perl_isnan(x) isnanq(x)
#define Perl_isfinite(x) !(isnanq(x) || isinfq(x))
#define Perl_fp_class(x) ((x) == 0.0Q ? 0 : isinfq(x) ? 3 : isnanq(x) ? 4 : PERL_ABS(x) < FLT128_MIN ? 2 : 1)
#define Perl_fp_class_inf(x) (Perl_fp_class(x) == 3)
#define Perl_fp_class_nan(x) (Perl_fp_class(x) == 4)
#define Perl_fp_class_norm(x) (Perl_fp_class(x) == 1)
#define Perl_fp_class_denorm(x) (Perl_fp_class(x) == 2)
#define Perl_fp_class_zero(x) (Perl_fp_class(x) == 0)
#else
#define NV_DIG DBL_DIG
# ifdef DBL_MANT_DIG
#define NV_MANT_DIG DBL_MANT_DIG
# endif
# ifdef DBL_MIN
#define NV_MIN DBL_MIN
# endif
# ifdef DBL_MAX
#define NV_MAX DBL_MAX
# endif
# ifdef DBL_MIN_EXP
#define NV_MIN_EXP DBL_MIN_EXP
# endif
# ifdef DBL_MAX_EXP
#define NV_MAX_EXP DBL_MAX_EXP
# endif
# ifdef DBL_MIN_10_EXP
#define NV_MIN_10_EXP DBL_MIN_10_EXP
# endif
# ifdef DBL_MAX_10_EXP
#define NV_MAX_10_EXP DBL_MAX_10_EXP
# endif
# ifdef DBL_EPSILON
#define NV_EPSILON DBL_EPSILON
# endif
# ifdef DBL_MAX
#define NV_MAX DBL_MAX
#define NV_MIN DBL_MIN
# else
# ifdef HUGE_VAL
#define NV_MAX HUGE_VAL
# endif
# endif
#define Perl_acos acos
#define Perl_asin asin
#define Perl_atan atan
#define Perl_atan2 atan2
#define Perl_ceil ceil
#define Perl_cos cos
#define Perl_cosh cosh
#define Perl_exp exp
#define Perl_floor floor
#define Perl_fmod fmod
#define Perl_log log
#define Perl_log10 log10
#define Perl_pow pow
#define Perl_sin sin
#define Perl_sinh sinh
#define Perl_sqrt sqrt
#define Perl_tan tan
#define Perl_tanh tanh
#define Perl_modf(x,y) modf(x,y)
#define Perl_frexp(x,y) frexp(x,y)
#define Perl_ldexp(x,y) ldexp(x,y)
# ifndef Perl_isnan
# ifdef HAS_ISNAN
#define Perl_isnan(x) isnan(x)
# endif
# endif
# ifndef Perl_isinf
# if defined(HAS_ISINF)
#define Perl_isinf(x) isinf(x)
# elif defined(DBL_MAX) && !defined(NAN_COMPARE_BROKEN)
#define Perl_isinf(x) ((x) > DBL_MAX || (x) < -DBL_MAX)
# endif
# endif
# ifndef Perl_isfinite
# ifdef HAS_ISFINITE
#define Perl_isfinite(x) isfinite(x)
# elif defined(HAS_FINITE)
#define Perl_isfinite(x) finite(x)
# endif
# endif
#endif
#if !defined(Perl_fp_class) && defined(HAS_FPCLASSIFY)
# include <math.h>
# if defined(FP_INFINITE) && defined(FP_NAN)
#define Perl_fp_class(x) fpclassify(x)
#define Perl_fp_class_inf(x) (Perl_fp_class(x)==FP_INFINITE)
#define Perl_fp_class_nan(x) (Perl_fp_class(x)==FP_NAN)
#define Perl_fp_class_norm(x) (Perl_fp_class(x)==FP_NORMAL)
#define Perl_fp_class_denorm(x) (Perl_fp_class(x)==FP_SUBNORMAL)
#define Perl_fp_class_zero(x) (Perl_fp_class(x)==FP_ZERO)
# elif defined(FP_PLUS_INF) && defined(FP_QNAN)
#define Perl_fp_class(x) fpclassify(x)
#define Perl_fp_class_pinf(x) (Perl_fp_class(x)==FP_PLUS_INF)
#define Perl_fp_class_ninf(x) (Perl_fp_class(x)==FP_MINUS_INF)
#define Perl_fp_class_snan(x) (Perl_fp_class(x)==FP_SNAN)
#define Perl_fp_class_qnan(x) (Perl_fp_class(x)==FP_QNAN)
#define Perl_fp_class_pnorm(x) (Perl_fp_class(x)==FP_PLUS_NORM)
#define Perl_fp_class_nnorm(x) (Perl_fp_class(x)==FP_MINUS_NORM)
#define Perl_fp_class_pdenorm(x) (Perl_fp_class(x)==FP_PLUS_DENORM)
#define Perl_fp_class_ndenorm(x) (Perl_fp_class(x)==FP_MINUS_DENORM)
#define Perl_fp_class_pzero(x) (Perl_fp_class(x)==FP_PLUS_ZERO)
#define Perl_fp_class_nzero(x) (Perl_fp_class(x)==FP_MINUS_ZERO)
# else
#undef Perl_fp_class
# endif
#endif
#if !defined(Perl_fp_class) && defined(HAS_FP_CLASSIFY)
# include <math.h>
# ifdef __VMS
# include <fp.h>
#undef isnormal
#define isnormal(x) Perl_fp_class_norm(x)
# endif
# if defined(FP_INFINITE) && defined(FP_NAN)
#define Perl_fp_class(x) fp_classify(x)
#define Perl_fp_class_inf(x) (Perl_fp_class(x)==FP_INFINITE)
#define Perl_fp_class_nan(x) (Perl_fp_class(x)==FP_NAN)
#define Perl_fp_class_norm(x) (Perl_fp_class(x)==FP_NORMAL)
#define Perl_fp_class_denorm(x) (Perl_fp_class(x)==FP_SUBNORMAL)
#define Perl_fp_class_zero(x) (Perl_fp_class(x)==FP_ZERO)
# else
#undef Perl_fp_class
# endif
#endif
#if !defined(Perl_fp_class) && (defined(HAS_FPCLASS)||defined(HAS_FPCLASSL))
# if defined(__sun) || defined(__sgi)
#define FP_PINF FP_PINF
#define FP_QNAN FP_QNAN
# endif
# include <math.h>
# ifdef I_IEEFP
# include <ieeefp.h>
# endif
# ifdef I_FP
# include <fp.h>
# endif
# if defined(USE_LONG_DOUBLE) && defined(HAS_FPCLASSL)
#define Perl_fp_class(x) fpclassl(x)
# else
#define Perl_fp_class(x) fpclass(x)
# endif
# if defined(FP_CLASS_PINF) && defined(FP_CLASS_SNAN)
#define Perl_fp_class_snan(x) (Perl_fp_class(x)==FP_CLASS_SNAN)
#define Perl_fp_class_qnan(x) (Perl_fp_class(x)==FP_CLASS_QNAN)
#define Perl_fp_class_ninf(x) (Perl_fp_class(x)==FP_CLASS_NINF)
#define Perl_fp_class_pinf(x) (Perl_fp_class(x)==FP_CLASS_PINF)
#define Perl_fp_class_nnorm(x) (Perl_fp_class(x)==FP_CLASS_NNORM)
#define Perl_fp_class_pnorm(x) (Perl_fp_class(x)==FP_CLASS_PNORM)
#define Perl_fp_class_ndenorm(x) (Perl_fp_class(x)==FP_CLASS_NDENORM)
#define Perl_fp_class_pdenorm(x) (Perl_fp_class(x)==FP_CLASS_PDENORM)
#define Perl_fp_class_nzero(x) (Perl_fp_class(x)==FP_CLASS_NZERO)
#define Perl_fp_class_pzero(x) (Perl_fp_class(x)==FP_CLASS_PZERO)
# elif defined(FP_PINF) && defined(FP_QNAN)
#define Perl_fp_class_snan(x) (Perl_fp_class(x)==FP_SNAN)
#define Perl_fp_class_qnan(x) (Perl_fp_class(x)==FP_QNAN)
#define Perl_fp_class_ninf(x) (Perl_fp_class(x)==FP_NINF)
#define Perl_fp_class_pinf(x) (Perl_fp_class(x)==FP_PINF)
#define Perl_fp_class_nnorm(x) (Perl_fp_class(x)==FP_NNORM)
#define Perl_fp_class_pnorm(x) (Perl_fp_class(x)==FP_PNORM)
#define Perl_fp_class_ndenorm(x) (Perl_fp_class(x)==FP_NDENORM)
#define Perl_fp_class_pdenorm(x) (Perl_fp_class(x)==FP_PDENORM)
#define Perl_fp_class_nzero(x) (Perl_fp_class(x)==FP_NZERO)
#define Perl_fp_class_pzero(x) (Perl_fp_class(x)==FP_PZERO)
# else
#undef Perl_fp_class
# endif
#endif
#if !defined(Perl_fp_class) && (defined(HAS_FP_CLASS)||defined(HAS_FP_CLASSL))
# include <math.h>
# if !defined(FP_SNAN) && defined(I_FP_CLASS)
# include <fp_class.h>
# endif
# if defined(FP_POS_INF) && defined(FP_QNAN)
# ifdef __sgi
# ifdef USE_LONG_DOUBLE
#define Perl_fp_class(x) fp_class_l(x)
# else
#define Perl_fp_class(x) fp_class_d(x)
# endif
# else
# if defined(USE_LONG_DOUBLE) && defined(HAS_FP_CLASSL)
#define Perl_fp_class(x) fp_classl(x)
# else
#define Perl_fp_class(x) fp_class(x)
# endif
# endif
# if defined(FP_POS_INF) && defined(FP_QNAN)
#define Perl_fp_class_snan(x) (Perl_fp_class(x)==FP_SNAN)
#define Perl_fp_class_qnan(x) (Perl_fp_class(x)==FP_QNAN)
#define Perl_fp_class_ninf(x) (Perl_fp_class(x)==FP_NEG_INF)
#define Perl_fp_class_pinf(x) (Perl_fp_class(x)==FP_POS_INF)
#define Perl_fp_class_nnorm(x) (Perl_fp_class(x)==FP_NEG_NORM)
#define Perl_fp_class_pnorm(x) (Perl_fp_class(x)==FP_POS_NORM)
#define Perl_fp_class_ndenorm(x) (Perl_fp_class(x)==FP_NEG_DENORM)
#define Perl_fp_class_pdenorm(x) (Perl_fp_class(x)==FP_POS_DENORM)
#define Perl_fp_class_nzero(x) (Perl_fp_class(x)==FP_NEG_ZERO)
#define Perl_fp_class_pzero(x) (Perl_fp_class(x)==FP_POS_ZERO)
# else
#undef Perl_fp_class
# endif
# endif
#endif
#if !defined(Perl_fp_class) && defined(HAS_CLASS)
# include <math.h>
# if defined(FP_PLUS_NORM) && defined(FP_PLUS_INF)
# ifndef _cplusplus
#define Perl_fp_class(x) class(x)
# else
#define Perl_fp_class(x) _class(x)
# endif
# if defined(FP_PLUS_INF) && defined(FP_NANQ)
#define Perl_fp_class_snan(x) (Perl_fp_class(x)==FP_NANS)
#define Perl_fp_class_qnan(x) (Perl_fp_class(x)==FP_NANQ)
#define Perl_fp_class_ninf(x) (Perl_fp_class(x)==FP_MINUS_INF)
#define Perl_fp_class_pinf(x) (Perl_fp_class(x)==FP_PLUS_INF)
#define Perl_fp_class_nnorm(x) (Perl_fp_class(x)==FP_MINUS_NORM)
#define Perl_fp_class_pnorm(x) (Perl_fp_class(x)==FP_PLUS_NORM)
#define Perl_fp_class_ndenorm(x) (Perl_fp_class(x)==FP_MINUS_DENORM)
#define Perl_fp_class_pdenorm(x) (Perl_fp_class(x)==FP_PLUS_DENORM)
#define Perl_fp_class_nzero(x) (Perl_fp_class(x)==FP_MINUS_ZERO)
#define Perl_fp_class_pzero(x) (Perl_fp_class(x)==FP_PLUS_ZERO)
# else
#undef Perl_fp_class
# endif
# endif
#endif
#ifdef WIN32
# ifndef Perl_isnan
#define Perl_isnan(x) _isnan(x)
# endif
# ifndef Perl_isfinite
#define Perl_isfinite(x) _finite(x)
# endif
# ifndef Perl_fp_class_snan
#define Perl_fp_class_snan(x) (_fpclass(x) & _FPCLASS_SNAN)
#define Perl_fp_class_qnan(x) (_fpclass(x) & _FPCLASS_QNAN)
#define Perl_fp_class_nan(x) (_fpclass(x) & (_FPCLASS_SNAN|_FPCLASS_QNAN))
#define Perl_fp_class_ninf(x) (_fpclass(x) & _FPCLASS_NINF))
#define Perl_fp_class_pinf(x) (_fpclass(x) & _FPCLASS_PINF))
#define Perl_fp_class_inf(x) (_fpclass(x) & (_FPCLASS_NINF|_FPCLASS_PINF))
#define Perl_fp_class_nnorm(x) (_fpclass(x) & _FPCLASS_NN)
#define Perl_fp_class_pnorm(x) (_fpclass(x) & _FPCLASS_PN)
#define Perl_fp_class_norm(x) (_fpclass(x) & (_FPCLASS_NN|_FPCLASS_PN))
#define Perl_fp_class_ndenorm(x) (_fpclass(x) & _FPCLASS_ND)
#define Perl_fp_class_pdenorm(x) (_fpclass(x) & _FPCLASS_PD)
#define Perl_fp_class_denorm(x) (_fpclass(x) & (_FPCLASS_ND|_FPCLASS_PD))
#define Perl_fp_class_nzero(x) (_fpclass(x) & _FPCLASS_NZ)
#define Perl_fp_class_pzero(x) (_fpclass(x) & _FPCLASS_PZ)
#define Perl_fp_class_zero(x) (_fpclass(x) & (_FPCLASS_NZ|_FPCLASS_PZ))
# endif
#endif
#if !defined(Perl_fp_class_inf) && defined(Perl_fp_class_pinf) && defined(Perl_fp_class_ninf)
#define Perl_fp_class_inf(x) (Perl_fp_class_pinf(x) || Perl_fp_class_ninf(x))
#endif
#if !defined(Perl_fp_class_nan) && defined(Perl_fp_class_snan) && defined(Perl_fp_class_qnan)
#define Perl_fp_class_nan(x) (Perl_fp_class_snan(x) || Perl_fp_class_qnan(x))
#endif
#if !defined(Perl_fp_class_zero) && defined(Perl_fp_class_pzero) && defined(Perl_fp_class_nzero)
#define Perl_fp_class_zero(x) (Perl_fp_class_pzero(x) || Perl_fp_class_nzero(x))
#endif
#if !defined(Perl_fp_class_norm) && defined(Perl_fp_class_pnorm) && defined(Perl_fp_class_nnorm)
#define Perl_fp_class_norm(x) (Perl_fp_class_pnorm(x) || Perl_fp_class_nnorm(x))
#endif
#if !defined(Perl_fp_class_denorm) && defined(Perl_fp_class_pdenorm) && defined(Perl_fp_class_ndenorm)
#define Perl_fp_class_denorm(x) (Perl_fp_class_pdenorm(x) || Perl_fp_class_ndenorm(x))
#endif
#ifdef UNDER_CE
#endif
#ifndef Perl_isnan
# ifdef Perl_fp_class_nan
#define Perl_isnan(x) Perl_fp_class_nan(x)
# else
# ifdef HAS_UNORDERED
#define Perl_isnan(x) unordered((x), 0.0)
# else
#define Perl_isnan(x) ((x)!=(x))
# endif
# endif
#endif
#ifndef Perl_isinf
# ifdef Perl_fp_class_inf
#define Perl_isinf(x) Perl_fp_class_inf(x)
# endif
#endif
#ifndef Perl_isfinite
# if defined(HAS_ISFINITE) && !defined(isfinite)
#define Perl_isfinite(x) isfinite((double)(x))
# elif defined(HAS_FINITE)
#define Perl_isfinite(x) finite((double)(x))
# elif defined(Perl_fp_class_finite)
#define Perl_isfinite(x) Perl_fp_class_finite(x)
# else
#define Perl_isfinite(x) (((x) * 0) == 0)
# endif
#endif
#ifndef Perl_isinf
# if defined(Perl_isfinite) && defined(Perl_isnan)
#define Perl_isinf(x) !(Perl_isfinite(x)||Perl_isnan(x))
# endif
#endif
#if defined(HAS_LONG_DOUBLE) && !defined(Perl_isfinitel)
# if defined(HAS_ISFINITE) && defined(isfinite) && defined(HAS_C99)
#define Perl_isfinitel(x) isfinite(x)
# elif defined(HAS_ISFINITEL)
#define Perl_isfinitel(x) isfinitel(x)
# elif defined(HAS_FINITEL)
#define Perl_isfinitel(x) finitel(x)
# elif defined(HAS_INFL) && defined(HAS_NANL)
#define Perl_isfinitel(x) !(isinfl(x)||isnanl(x))
# else
#define Perl_isfinitel(x) ((x) * 0 == 0)
# endif
#endif
#ifndef USE_PERL_ATOF
# ifndef _UNICOS
#define USE_PERL_ATOF 
# endif
#else
# if USE_PERL_ATOF == 0
#undef USE_PERL_ATOF
# endif
#endif
#ifdef USE_PERL_ATOF
#define Perl_atof(s) Perl_my_atof(s)
#define Perl_atof2(s,n) Perl_my_atof2(aTHX_ (s), &(n))
#else
#define Perl_atof(s) (NV)atof(s)
#define Perl_atof2(s,n) ((n) = atof(s))
#endif
#ifdef I_LIMITS
# include <limits.h>
#endif
#define PERL_UCHAR_MIN ((unsigned char)0)
#ifdef UCHAR_MAX
#define PERL_UCHAR_MAX ((unsigned char)UCHAR_MAX)
#else
# ifdef MAXUCHAR
#define PERL_UCHAR_MAX ((unsigned char)MAXUCHAR)
# else
#define PERL_UCHAR_MAX ((unsigned char)~(unsigned)0)
# endif
#endif
#define PERL_USHORT_MIN ((unsigned short)0)
#ifdef USHORT_MAX
#define PERL_USHORT_MAX ((unsigned short)USHORT_MAX)
#else
# ifdef MAXUSHORT
#define PERL_USHORT_MAX ((unsigned short)MAXUSHORT)
# else
# ifdef USHRT_MAX
#define PERL_USHORT_MAX ((unsigned short)USHRT_MAX)
# else
#define PERL_USHORT_MAX ((unsigned short)~(unsigned)0)
# endif
# endif
#endif
#ifdef SHORT_MAX
#define PERL_SHORT_MAX ((short)SHORT_MAX)
#else
# ifdef MAXSHORT
#define PERL_SHORT_MAX ((short)MAXSHORT)
# else
# ifdef SHRT_MAX
#define PERL_SHORT_MAX ((short)SHRT_MAX)
# else
#define PERL_SHORT_MAX ((short) (PERL_USHORT_MAX >> 1))
# endif
# endif
#endif
#ifdef SHORT_MIN
#define PERL_SHORT_MIN ((short)SHORT_MIN)
#else
# ifdef MINSHORT
#define PERL_SHORT_MIN ((short)MINSHORT)
# else
# ifdef SHRT_MIN
#define PERL_SHORT_MIN ((short)SHRT_MIN)
# else
#define PERL_SHORT_MIN (-PERL_SHORT_MAX - ((3 & -1) == 3))
# endif
# endif
#endif
#ifdef UINT_MAX
#define PERL_UINT_MAX ((unsigned int)UINT_MAX)
#else
# ifdef MAXUINT
#define PERL_UINT_MAX ((unsigned int)MAXUINT)
# else
#define PERL_UINT_MAX (~(unsigned int)0)
# endif
#endif
#define PERL_UINT_MIN ((unsigned int)0)
#ifdef INT_MAX
#define PERL_INT_MAX ((int)INT_MAX)
#else
# ifdef MAXINT
#define PERL_INT_MAX ((int)MAXINT)
# else
#define PERL_INT_MAX ((int)(PERL_UINT_MAX >> 1))
# endif
#endif
#ifdef INT_MIN
#define PERL_INT_MIN ((int)INT_MIN)
#else
# ifdef MININT
#define PERL_INT_MIN ((int)MININT)
# else
#define PERL_INT_MIN (-PERL_INT_MAX - ((3 & -1) == 3))
# endif
#endif
#ifdef ULONG_MAX
#define PERL_ULONG_MAX ((unsigned long)ULONG_MAX)
#else
# ifdef MAXULONG
#define PERL_ULONG_MAX ((unsigned long)MAXULONG)
# else
#define PERL_ULONG_MAX (~(unsigned long)0)
# endif
#endif
#define PERL_ULONG_MIN ((unsigned long)0L)
#ifdef LONG_MAX
#define PERL_LONG_MAX ((long)LONG_MAX)
#else
# ifdef MAXLONG
#define PERL_LONG_MAX ((long)MAXLONG)
# else
#define PERL_LONG_MAX ((long) (PERL_ULONG_MAX >> 1))
# endif
#endif
#ifdef LONG_MIN
#define PERL_LONG_MIN ((long)LONG_MIN)
#else
# ifdef MINLONG
#define PERL_LONG_MIN ((long)MINLONG)
# else
#define PERL_LONG_MIN (-PERL_LONG_MAX - ((3 & -1) == 3))
# endif
#endif
#ifdef UV_IS_QUAD
#define PERL_UQUAD_MAX (~(UV)0)
#define PERL_UQUAD_MIN ((UV)0)
#define PERL_QUAD_MAX ((IV) (PERL_UQUAD_MAX >> 1))
#define PERL_QUAD_MIN (-PERL_QUAD_MAX - ((3 & -1) == 3))
#endif
#ifdef PERL_CORE
#endif
#if defined(__sgi)
#define STRUCT_SV perl_sv
#else
#define STRUCT_SV sv
#endif
#if !defined(PERL_OP_PARENT) && !defined(PERL_NO_OP_PARENT)
#define PERL_OP_PARENT 
#endif
#if !defined(PERL_COPY_ON_WRITE) && !defined(PERL_NO_COW)
#define PERL_COPY_ON_WRITE 
#endif
#ifdef PERL_COPY_ON_WRITE
#define PERL_ANY_COW 
#else
#define PERL_SAWAMPERSAND 
#endif
#if defined(PERL_DEBUG_READONLY_OPS) && !defined(USE_ITHREADS)
# error PERL_DEBUG_READONLY_OPS only works with ithreads
#endif
#include "handy.h"
#include "charclass_invlists.h"
#if defined(USE_LARGE_FILES) && !defined(NO_64_BIT_RAWIO)
# if LSEEKSIZE == 8 && !defined(USE_64_BIT_RAWIO)
#define USE_64_BIT_RAWIO 
# endif
#endif
#ifndef FSEEKSIZE
# ifdef HAS_FSEEKO
#define FSEEKSIZE LSEEKSIZE
# else
#define FSEEKSIZE LONGSIZE
# endif
#endif
#if defined(USE_LARGE_FILES) && !defined(NO_64_BIT_STDIO)
# if FSEEKSIZE == 8 && !defined(USE_64_BIT_STDIO)
#define USE_64_BIT_STDIO 
# endif
#endif
#ifdef USE_64_BIT_RAWIO
# ifdef HAS_OFF64_T
#undef Off_t
#define Off_t off64_t
#undef LSEEKSIZE
#define LSEEKSIZE 8
# endif
# if defined(USE_OPEN64)
#define open open64
# endif
# if defined(USE_LSEEK64)
#define lseek lseek64
# else
# if defined(USE_LLSEEK)
#define lseek llseek
# endif
# endif
# if defined(USE_STAT64)
#define stat stat64
# endif
# if defined(USE_FSTAT64)
#define fstat fstat64
# endif
# if defined(USE_LSTAT64)
#define lstat lstat64
# endif
# if defined(USE_FLOCK64)
#define flock flock64
# endif
# if defined(USE_LOCKF64)
#define lockf lockf64
# endif
# if defined(USE_FCNTL64)
#define fcntl fcntl64
# endif
# if defined(USE_TRUNCATE64)
#define truncate truncate64
# endif
# if defined(USE_FTRUNCATE64)
#define ftruncate ftruncate64
# endif
#endif
#ifdef USE_64_BIT_STDIO
# ifdef HAS_FPOS64_T
#undef Fpos_t
#define Fpos_t fpos64_t
# endif
# if defined(USE_FOPEN64)
#define fopen fopen64
# endif
# if defined(USE_FSEEK64)
#define fseek fseek64
# endif
# if defined(USE_FTELL64)
#define ftell ftell64
# endif
# if defined(USE_FSETPOS64)
#define fsetpos fsetpos64
# endif
# if defined(USE_FGETPOS64)
#define fgetpos fgetpos64
# endif
# if defined(USE_TMPFILE64)
#define tmpfile tmpfile64
# endif
# if defined(USE_FREOPEN64)
#define freopen freopen64
# endif
#endif
#if defined(OS2)
# include "iperlsys.h"
#endif
#ifdef DOSISH
# if defined(OS2)
# include "os2ish.h"
# else
# include "dosish.h"
# endif
#elif defined(VMS)
# include "vmsish.h"
#elif defined(PLAN9)
# include "./plan9/plan9ish.h"
#elif defined(__VOS__)
# ifdef __GNUC__
# include "./vos/vosish.h"
# else
# include "vos/vosish.h"
# endif
#elif defined(__SYMBIAN32__)
# include "symbian/symbianish.h"
#elif defined(__HAIKU__)
# include "haiku/haikuish.h"
#else
# include "unixish.h"
#endif
#ifdef __amigaos4__
# include "amigaos.h"
#undef FD_CLOEXEC
#endif
#ifndef NSIG
# ifdef _NSIG
#define NSIG (_NSIG)
# endif
#endif
#ifndef NSIG
# ifdef SIGMAX
#define NSIG (SIGMAX+1)
# endif
#endif
#ifndef NSIG
# ifdef SIG_MAX
#define NSIG (SIG_MAX+1)
# endif
#endif
#ifndef NSIG
# ifdef _SIG_MAX
#define NSIG (_SIG_MAX+1)
# endif
#endif
#ifndef NSIG
# ifdef MAXSIG
#define NSIG (MAXSIG+1)
# endif
#endif
#ifndef NSIG
# ifdef MAX_SIG
#define NSIG (MAX_SIG+1)
# endif
#endif
#ifndef NSIG
# ifdef SIGARRAYSIZE
#define NSIG SIGARRAYSIZE
# endif
#endif
#ifndef NSIG
# ifdef _sys_nsig
#define NSIG (_sys_nsig)
# endif
#endif
#ifndef NSIG
#define NSIG 50
#endif
#ifndef NO_ENVIRON_ARRAY
#define USE_ENVIRON_ARRAY 
#endif
#ifndef PERL_FPU_INIT
# ifdef HAS_FPSETMASK
# if HAS_FLOATINGPOINT_H
# include <floatingpoint.h>
# endif
#define PERL_FPU_INIT (void)fpsetmask(0)
# else
# if defined(SIGFPE) && defined(SIG_IGN) && !defined(PERL_MICRO)
#define PERL_FPU_INIT PL_sigfpe_saved = (Sighandler_t) signal(SIGFPE, SIG_IGN)
#define PERL_FPU_PRE_EXEC { Sigsave_t xfpe; rsignal_save(SIGFPE, PL_sigfpe_saved, &xfpe);
#define PERL_FPU_POST_EXEC rsignal_restore(SIGFPE, &xfpe); }
# else
#define PERL_FPU_INIT 
# endif
# endif
#endif
#ifndef PERL_FPU_PRE_EXEC
#define PERL_FPU_PRE_EXEC {
#define PERL_FPU_POST_EXEC }
#endif
#ifdef __osf__
# include <machine/fpu.h>
#define PERL_SYS_FPU_INIT STMT_START { ieee_set_fp_control(IEEE_TRAP_ENABLE_INV); signal(SIGFPE, SIG_IGN); } STMT_END
#endif
#ifdef __sgi
# include <sys/fpu.h>
#define PERL_SYS_FPU_INIT STMT_START { union fpc_csr csr; csr.fc_word = get_fpc_csr(); csr.fc_struct.flush = 0; set_fpc_csr(csr.fc_word); } STMT_END
#endif
#ifndef PERL_SYS_FPU_INIT
#define PERL_SYS_FPU_INIT NOOP
#endif
#ifndef PERL_SYS_INIT3_BODY
#define PERL_SYS_INIT3_BODY(argvp,argcp,envp) PERL_SYS_INIT_BODY(argvp,argcp)
#endif
#define PERL_SYS_INIT(argc,argv) Perl_sys_init(argc, argv)
#define PERL_SYS_INIT3(argc,argv,env) Perl_sys_init3(argc, argv, env)
#define PERL_SYS_TERM() Perl_sys_term()
#ifndef PERL_WRITE_MSG_TO_CONSOLE
#define PERL_WRITE_MSG_TO_CONSOLE(io,msg,len) PerlIO_write(io, msg, len)
#endif
#ifndef MAXPATHLEN
# ifdef PATH_MAX
# ifdef _POSIX_PATH_MAX
# if PATH_MAX > _POSIX_PATH_MAX
#define MAXPATHLEN PATH_MAX
# else
#define MAXPATHLEN _POSIX_PATH_MAX
# endif
# else
#define MAXPATHLEN (PATH_MAX+1)
# endif
# else
#define MAXPATHLEN 1024
# endif
#endif
#ifndef PERL_MICRO
#if defined __GNUC__ && !defined(__INTEL_COMPILER)
# if __GNUC__ == 3 && __GNUC_MINOR__ >= 1 || __GNUC__ > 3
#define HASATTRIBUTE_DEPRECATED 
# endif
# if __GNUC__ >= 3
#define HASATTRIBUTE_FORMAT 
# if defined __MINGW32__
#define PRINTF_FORMAT_NULL_OK 
# endif
# endif
# if __GNUC__ >= 3
#define HASATTRIBUTE_MALLOC 
# endif
# if __GNUC__ == 3 && __GNUC_MINOR__ >= 3 || __GNUC__ > 3
#define HASATTRIBUTE_NONNULL 
# endif
# if __GNUC__ == 2 && __GNUC_MINOR__ >= 5 || __GNUC__ > 2
#define HASATTRIBUTE_NORETURN 
# endif
# if __GNUC__ >= 3
#define HASATTRIBUTE_PURE 
# endif
# if __GNUC__ == 3 && __GNUC_MINOR__ >= 4 || __GNUC__ > 3
#define HASATTRIBUTE_UNUSED 
# endif
# if __GNUC__ == 3 && __GNUC_MINOR__ == 3 && !defined(__cplusplus)
#define HASATTRIBUTE_UNUSED 
# endif
# if __GNUC__ == 3 && __GNUC_MINOR__ >= 4 || __GNUC__ > 3
#define HASATTRIBUTE_WARN_UNUSED_RESULT 
# endif
#endif
#endif
#if defined(USE_ITHREADS) && defined(I_PTHREAD) && defined(__clang__) && !defined(PERL_GLOBAL_STRUCT) && !defined(PERL_GLOBAL_STRUCT_PRIVATE) && !defined(SWIG) && ((!defined(__apple_build_version__) && ((__clang_major__ == 3 && __clang_minor__ >= 6) || (__clang_major__ >= 4))) || (defined(__apple_build_version__) && ((__clang_major__ == 6 && __clang_minor__ >= 1) || (__clang_major__ >= 7))))
#define PERL_TSA__(x) __attribute__((x))
#define PERL_TSA_ACTIVE 
#else
#define PERL_TSA__(x) 
#undef PERL_TSA_ACTIVE
#endif
#define PERL_TSA_CAPABILITY(x) PERL_TSA__(capability(x))
#define PERL_TSA_GUARDED_BY(x) PERL_TSA__(guarded_by(x))
#define PERL_TSA_PT_GUARDED_BY(x) PERL_TSA__(pt_guarded_by(x))
#define PERL_TSA_REQUIRES(x) PERL_TSA__(requires_capability(x))
#define PERL_TSA_EXCLUDES(x) PERL_TSA__(locks_excluded(x))
#define PERL_TSA_ACQUIRE(x) PERL_TSA__(acquire_capability(x))
#define PERL_TSA_RELEASE(x) PERL_TSA__(release_capability(x))
#define PERL_TSA_NO_TSA PERL_TSA__(no_thread_safety_analysis)
#if defined(USE_ITHREADS)
# ifdef NETWARE
# include <nw5thread.h>
# else
# ifdef WIN32
# include <win32thread.h>
# else
# ifdef OS2
# include "os2thread.h"
# else
# ifdef I_MACH_CTHREADS
# include <mach/cthreads.h>
# else
# ifdef I_PTHREAD
# include <pthread.h>
# endif
# endif
# endif
# endif
# endif
#endif
#ifdef PERL_TSA_ACTIVE
#endif
#if defined(WIN32)
# include "win32.h"
#endif
#ifdef NETWARE
# include "netware.h"
#endif
#define STATUS_UNIX PL_statusvalue
#ifdef VMS
#define STATUS_NATIVE PL_statusvalue_vms
# include <stsdef.h>
# include <ssdef.h>
#define child_offset_bits (8)
# ifndef C_FAC_POSIX
#define C_FAC_POSIX 0x35A000
# endif
#define STATUS_EXIT (((I32)PL_statusvalue_vms == -1 ? SS$_ABORT : PL_statusvalue_vms) | (VMSISH_HUSHED ? STS$M_INHIB_MSG : 0))
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { I32 evalue = (I32)n; if (evalue == EVMSERR) { PL_statusvalue_vms = vaxc$errno; PL_statusvalue = evalue; } else { PL_statusvalue_vms = evalue; if (evalue == -1) { PL_statusvalue = -1; PL_statusvalue_vms = SS$_ABORT; } else PL_statusvalue = Perl_vms_status_to_unix(evalue, 1); set_vaxc_errno(evalue); if ((PL_statusvalue_vms & C_FAC_POSIX) == C_FAC_POSIX) set_errno(EVMSERR); else set_errno(Perl_vms_status_to_unix(evalue, 0)); PL_statusvalue = PL_statusvalue << child_offset_bits; } } STMT_END
# ifdef VMSISH_STATUS
#define STATUS_CURRENT (VMSISH_STATUS ? STATUS_NATIVE : STATUS_UNIX)
# else
#define STATUS_CURRENT STATUS_UNIX
# endif
#define STATUS_UNIX_SET(n) STMT_START { I32 evalue = (I32)n; PL_statusvalue = evalue; if (PL_statusvalue != -1) { if (PL_statusvalue != EVMSERR) { PL_statusvalue &= 0xFFFF; if (MY_POSIX_EXIT) PL_statusvalue_vms=PL_statusvalue ? SS$_ABORT : SS$_NORMAL; else PL_statusvalue_vms = Perl_unix_status_to_vms(evalue); } else { PL_statusvalue_vms = vaxc$errno; } } else PL_statusvalue_vms = SS$_ABORT; set_vaxc_errno(PL_statusvalue_vms); } STMT_END
#define STATUS_UNIX_EXIT_SET(n) STMT_START { I32 evalue = (I32)n; PL_statusvalue = evalue; if (MY_POSIX_EXIT) { if (evalue <= 0xFF00) { if (evalue > 0xFF) evalue = (evalue >> child_offset_bits) & 0xFF; PL_statusvalue_vms = (C_FAC_POSIX | (evalue << 3 ) | ((evalue == 1) ? (STS$K_ERROR | STS$M_INHIB_MSG) : 1)); } else PL_statusvalue_vms = evalue; } else { if (evalue == 0) PL_statusvalue_vms = SS$_NORMAL; else if (evalue <= 0xFF00) PL_statusvalue_vms = SS$_ABORT; else { if (evalue != EVMSERR) PL_statusvalue_vms = evalue; else PL_statusvalue_vms = vaxc$errno; PL_statusvalue = EVMSERR; } set_vaxc_errno(PL_statusvalue_vms); } } STMT_END
#define STATUS_EXIT_SET(n) STMT_START { I32 evalue = (I32)n; PL_statusvalue = evalue; if (MY_POSIX_EXIT) if (evalue > 255) PL_statusvalue_vms = evalue; else { PL_statusvalue_vms = (C_FAC_POSIX | (evalue << 3 ) | ((evalue == 1) ? (STS$K_ERROR | STS$M_INHIB_MSG) : 1));} else PL_statusvalue_vms = evalue ? evalue : SS$_NORMAL; set_vaxc_errno(PL_statusvalue_vms); } STMT_END
#define STATUS_ALL_SUCCESS (PL_statusvalue = 0, PL_statusvalue_vms = SS$_NORMAL)
#define STATUS_ALL_FAILURE (PL_statusvalue = 1, vaxc$errno = PL_statusvalue_vms = MY_POSIX_EXIT ? (C_FAC_POSIX | (1 << 3) | STS$K_ERROR | STS$M_INHIB_MSG) : SS$_ABORT)
#elif defined(__amigaos4__)
#define STATUS_NATIVE PL_statusvalue_posix
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { PL_statusvalue_posix = (n); if (PL_statusvalue_posix < 0) { PL_statusvalue = -1; } else { PL_statusvalue = n << 8; } } STMT_END
#define STATUS_UNIX_SET(n) STMT_START { PL_statusvalue = (n); if (PL_statusvalue != -1) PL_statusvalue &= 0xFFFF; } STMT_END
#define STATUS_UNIX_EXIT_SET(n) STATUS_UNIX_SET(n)
#define STATUS_EXIT_SET(n) STATUS_UNIX_SET(n)
#define STATUS_CURRENT STATUS_UNIX
#define STATUS_EXIT STATUS_UNIX
#define STATUS_ALL_SUCCESS (PL_statusvalue = 0, PL_statusvalue_posix = 0)
#define STATUS_ALL_FAILURE (PL_statusvalue = 1, PL_statusvalue_posix = 1)
#else
#define STATUS_NATIVE PL_statusvalue_posix
# if defined(WCOREDUMP)
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { PL_statusvalue_posix = (n); if (PL_statusvalue_posix == -1) PL_statusvalue = -1; else { PL_statusvalue = (WIFEXITED(PL_statusvalue_posix) ? (WEXITSTATUS(PL_statusvalue_posix) << 8) : 0) | (WIFSIGNALED(PL_statusvalue_posix) ? (WTERMSIG(PL_statusvalue_posix) & 0x7F) : 0) | (WIFSIGNALED(PL_statusvalue_posix) && WCOREDUMP(PL_statusvalue_posix) ? 0x80 : 0); } } STMT_END
# elif defined(WIFEXITED)
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { PL_statusvalue_posix = (n); if (PL_statusvalue_posix == -1) PL_statusvalue = -1; else { PL_statusvalue = (WIFEXITED(PL_statusvalue_posix) ? (WEXITSTATUS(PL_statusvalue_posix) << 8) : 0) | (WIFSIGNALED(PL_statusvalue_posix) ? (WTERMSIG(PL_statusvalue_posix) & 0x7F) : 0); } } STMT_END
# else
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { PL_statusvalue_posix = (n); if (PL_statusvalue_posix == -1) PL_statusvalue = -1; else { PL_statusvalue = PL_statusvalue_posix & 0xFFFF; } } STMT_END
# endif
#define STATUS_UNIX_SET(n) STMT_START { PL_statusvalue = (n); if (PL_statusvalue != -1) PL_statusvalue &= 0xFFFF; } STMT_END
#define STATUS_UNIX_EXIT_SET(n) STATUS_UNIX_SET(n)
#define STATUS_EXIT_SET(n) STATUS_UNIX_SET(n)
#define STATUS_CURRENT STATUS_UNIX
#define STATUS_EXIT STATUS_UNIX
#define STATUS_ALL_SUCCESS (PL_statusvalue = 0, PL_statusvalue_posix = 0)
#define STATUS_ALL_FAILURE (PL_statusvalue = 1, PL_statusvalue_posix = 1)
#endif
#define PERL_EXIT_EXPECTED 0x01
#define PERL_EXIT_DESTRUCT_END 0x02
#define PERL_EXIT_WARN 0x04
#define PERL_EXIT_ABORT 0x08
#ifndef PERL_CORE
# ifndef PERL_FS_VER_FMT
#define PERL_FS_VER_FMT "%d.%d.%d"
# endif
#endif
#ifndef PERL_FS_VERSION
#define PERL_FS_VERSION PERL_VERSION_STRING
#endif
#ifndef PERL_FLUSHALL_FOR_CHILD
# if defined(USE_PERLIO) || defined(FFLUSH_NULL)
#define PERL_FLUSHALL_FOR_CHILD PerlIO_flush((PerlIO*)NULL)
# else
# ifdef FFLUSH_ALL
#define PERL_FLUSHALL_FOR_CHILD my_fflush_all()
# else
#define PERL_FLUSHALL_FOR_CHILD NOOP
# endif
# endif
#endif
#ifndef PERL_WAIT_FOR_CHILDREN
#define PERL_WAIT_FOR_CHILDREN NOOP
#endif
#ifndef PERL_SET_INTERP
#define PERL_SET_INTERP(i) (PL_curinterp = (PerlInterpreter*)(i))
#endif
#ifndef PERL_GET_INTERP
#define PERL_GET_INTERP (PL_curinterp)
#endif
#if defined(PERL_IMPLICIT_CONTEXT) && !defined(PERL_GET_THX)
# ifdef MULTIPLICITY
#define PERL_GET_THX ((PerlInterpreter *)PERL_GET_CONTEXT)
# endif
#define PERL_SET_THX(t) PERL_SET_CONTEXT(t)
#endif
#ifndef SVf_
#define SVf_(n) "-" STRINGIFY(n) "p"
#endif
#ifndef SVf
#define SVf "-p"
#endif
#ifndef SVf32
#define SVf32 SVf_(32)
#endif
#ifndef SVf256
#define SVf256 SVf_(256)
#endif
#define SVfARG(p) ((void*)(p))
#ifndef HEKf
#define HEKf "2p"
#endif
#ifndef HEKf256
#define HEKf256 "3p"
#endif
#define HEKfARG(p) ((void*)(p))
#ifndef UTF8f
#define UTF8f "d%" UVuf "%4p"
#endif
#define UTF8fARG(u,l,p) (int)cBOOL(u), (UV)(l), (void*)(p)
#define PNf UTF8f
#define PNfARG(pn) (int)1, (UV)PadnameLEN(pn), (void *)PadnamePV(pn)
#ifdef PERL_CORE
#undef UVf
#else
# ifndef UVf
#define UVf UVuf
# endif
#endif
#ifdef HASATTRIBUTE_DEPRECATED
#define __attribute__deprecated__ __attribute__((deprecated))
#endif
#ifdef HASATTRIBUTE_FORMAT
#define __attribute__format__(x,y,z) __attribute__((format(x,y,z)))
#endif
#ifdef HASATTRIBUTE_MALLOC
#define __attribute__malloc__ __attribute__((__malloc__))
#endif
#ifdef HASATTRIBUTE_NONNULL
#define __attribute__nonnull__(a) __attribute__((nonnull(a)))
#endif
#ifdef HASATTRIBUTE_NORETURN
#define __attribute__noreturn__ __attribute__((noreturn))
#endif
#ifdef HASATTRIBUTE_PURE
#define __attribute__pure__ __attribute__((pure))
#endif
#ifdef HASATTRIBUTE_UNUSED
#define __attribute__unused__ __attribute__((unused))
#endif
#ifdef HASATTRIBUTE_WARN_UNUSED_RESULT
#define __attribute__warn_unused_result__ __attribute__((warn_unused_result))
#endif
#ifndef __attribute__deprecated__
#define __attribute__deprecated__ 
#endif
#ifndef __attribute__format__
#define __attribute__format__(x,y,z) 
#endif
#ifndef __attribute__malloc__
#define __attribute__malloc__ 
#endif
#ifndef __attribute__nonnull__
#define __attribute__nonnull__(a) 
#endif
#ifndef __attribute__noreturn__
#define __attribute__noreturn__ 
#endif
#ifndef __attribute__pure__
#define __attribute__pure__ 
#endif
#ifndef __attribute__unused__
#define __attribute__unused__ 
#endif
#ifndef __attribute__warn_unused_result__
#define __attribute__warn_unused_result__ 
#endif
#ifdef I_ASSERT
# if !defined(DEBUGGING) && !defined(NDEBUG)
#define NDEBUG 1
# endif
# include <assert.h>
#endif
#ifdef HASATTRIBUTE_NORETURN
#define NORETURN_FUNCTION_END NOT_REACHED;
#else
#define NORETURN_FUNCTION_END NOT_REACHED; return 0
#endif
#ifdef PRINTF_FORMAT_NULL_OK
#define __attribute__format__null_ok__(x,y,z) __attribute__format__(x,y,z)
#else
#define __attribute__format__null_ok__(x,y,z) 
#endif
#ifdef HAS_BUILTIN_EXPECT
#define EXPECT(expr,val) __builtin_expect(expr,val)
#else
#define EXPECT(expr,val) (expr)
#endif
#define LIKELY(cond) EXPECT(cBOOL(cond),TRUE)
#define UNLIKELY(cond) EXPECT(cBOOL(cond),FALSE)
#ifdef HAS_BUILTIN_CHOOSE_EXPR
#endif
#if (defined(static_assert) || (defined(__cplusplus) && __cplusplus >= 201103L)) && (!defined(__IBMC__) || __IBMC__ >= 1210)
#define STATIC_ASSERT_GLOBAL(COND) static_assert(COND, #COND)
#else
#define STATIC_ASSERT_2(COND,SUFFIX) typedef struct { unsigned int _static_assertion_failed_ ##SUFFIX : (COND) ? 1 : -1; } _static_assertion_failed_ ##SUFFIX PERL_UNUSED_DECL
#define STATIC_ASSERT_1(COND,SUFFIX) STATIC_ASSERT_2(COND, SUFFIX)
#define STATIC_ASSERT_GLOBAL(COND) STATIC_ASSERT_1(COND, __LINE__)
#endif
#define STATIC_ASSERT_STMT(COND) do { STATIC_ASSERT_GLOBAL(COND); } while (0)
#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#ifndef DEBUGGING
# if __has_builtin(__builtin_unreachable) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5 || __GNUC__ > 4)
#define ASSUME(x) ((x) ? (void) 0 : __builtin_unreachable())
# elif defined(_MSC_VER)
#define ASSUME(x) __assume(x)
# elif defined(__ARMCC_VERSION)
#define ASSUME(x) __promise(x)
# else
#define ASSUME(x) assert(x)
# endif
#else
#define ASSUME(x) assert(x)
#endif
#define NOT_REACHED ASSUME(0)
#ifdef HAS_PAUSE
#define Pause pause
#else
#define Pause() sleep((32767<<16)+32767)
#endif
#ifndef IOCPARM_LEN
# ifdef IOCPARM_MASK
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
# else
# if defined(_IOC_SIZE) && defined(__GLIBC__)
#define IOCPARM_LEN(x) (_IOC_SIZE(x) < 256 ? 256 : _IOC_SIZE(x))
# else
#define IOCPARM_LEN(x) 256
# endif
# endif
#endif
#if defined(__CYGWIN__)
#define USEMYBINMODE 
# include <io.h>
#define my_binmode(fp,iotype,mode) cBOOL(PerlLIO_setmode(fileno(fp), mode) != -1)
#endif
#ifdef __CYGWIN__
#endif
#ifdef UNION_ANY_DEFINITION
#else
#endif
#define FILTER_READ(idx,sv,len) filter_read(idx, sv, len)
#define FILTER_DATA(idx) (PL_parser ? AvARRAY(PL_parser->rsfp_filters)[idx] : NULL)
#define FILTER_ISREADER(idx) (PL_parser && PL_parser->rsfp_filters && idx >= AvFILLp(PL_parser->rsfp_filters))
#define PERL_FILTER_EXISTS(i) (PL_parser && PL_parser->rsfp_filters && (i) <= av_tindex(PL_parser->rsfp_filters))
#if defined(_AIX) && !defined(_AIX43)
#if defined(USE_REENTRANT) || defined(_REENTRANT) || defined(_THREAD_SAFE)
#endif
#endif
#ifndef PERL_CALLCONV
# ifdef __cplusplus
#define PERL_CALLCONV extern "C"
# else
#define PERL_CALLCONV 
# endif
#endif
#ifndef PERL_CALLCONV_NO_RET
#define PERL_CALLCONV_NO_RET PERL_CALLCONV
#endif
#ifndef PERL_STATIC_NO_RET
#define PERL_STATIC_NO_RET STATIC
#endif
#ifndef PERL_STATIC_INLINE_NO_RET
#define PERL_STATIC_INLINE_NO_RET PERL_STATIC_INLINE
#endif
#if !defined(OS2)
# include "iperlsys.h"
#endif
#ifdef __LIBCATAMOUNT__
#undef HAS_PASSWD
#undef HAS_GROUP
#define FAKE_BIT_BUCKET 
#endif
#if !defined(NO_HASH_SEED) && !defined(USE_HASH_SEED) && !defined(USE_HASH_SEED_EXPLICIT)
#define USE_HASH_SEED 
#endif
#include "perly.h"
#ifndef PERL_BITFIELD8
#define PERL_BITFIELD8 unsigned
#endif
#ifndef PERL_BITFIELD16
#define PERL_BITFIELD16 unsigned
#endif
#ifndef PERL_BITFIELD32
#define PERL_BITFIELD32 unsigned
#endif
#include "sv.h"
#include "regexp.h"
#include "util.h"
#include "form.h"
#include "gv.h"
#include "pad.h"
#include "cv.h"
#include "opnames.h"
#include "op.h"
#include "hv.h"
#include "cop.h"
#include "av.h"
#include "mg.h"
#include "scope.h"
#include "warnings.h"
#include "utf8.h"
#define my_stat() my_stat_flags(SV_GMAGIC)
#define my_lstat() my_lstat_flags(SV_GMAGIC)
#undef _XPV_HEAD
#undef _XPVMG_HEAD
#undef _XPVCV_COMMON
#include "parser.h"
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C)
#endif
#if defined(htonl) && !defined(HAS_HTONL)
#define HAS_HTONL 
#endif
#if defined(htons) && !defined(HAS_HTONS)
#define HAS_HTONS 
#endif
#if defined(ntohl) && !defined(HAS_NTOHL)
#define HAS_NTOHL 
#endif
#if defined(ntohs) && !defined(HAS_NTOHS)
#define HAS_NTOHS 
#endif
#ifndef HAS_HTONL
#define HAS_HTONS 
#define HAS_HTONL 
#define HAS_NTOHS 
#define HAS_NTOHL 
# if (BYTEORDER & 0xffff) == 0x4321
#define ntohl(x) ((x)&0xFFFFFFFF)
#define htonl(x) ntohl(x)
#define ntohs(x) ((x)&0xFFFF)
#define htons(x) ntohs(x)
# elif BYTEORDER == 0x1234 || BYTEORDER == 0x12345678
#define htonl(x) my_swap32(x)
#define ntohl(x) my_swap32(x)
#define ntohs(x) my_swap16(x)
#define htons(x) my_swap16(x)
# else
# error "Unsupported byteorder"
# endif
#endif
#if BYTEORDER == 0x1234 || BYTEORDER == 0x12345678
#define vtohl(x) ((x)&0xFFFFFFFF)
#define vtohs(x) ((x)&0xFFFF)
#define htovl(x) vtohl(x)
#define htovs(x) vtohs(x)
#elif BYTEORDER == 0x4321 || BYTEORDER == 0x87654321
#define vtohl(x) ((((x)&0xFF)<<24) +(((x)>>24)&0xFF) +(((x)&0x0000FF00)<<8) +(((x)&0x00FF0000)>>8) )
#define vtohs(x) ((((x)&0xFF)<<8) + (((x)>>8)&0xFF))
#define htovl(x) vtohl(x)
#define htovs(x) vtohs(x)
#else
# error "Unsupported byteorder"
#endif
#define I32_MAX_P1 (2.0 * (1 + (((U32)I32_MAX) >> 1)))
#define U32_MAX_P1 (4.0 * (1 + ((U32_MAX) >> 2)))
#define U32_MAX_P1_HALF (2.0 * (1 + ((U32_MAX) >> 2)))
#define UV_MAX_P1 (4.0 * (1 + ((UV_MAX) >> 2)))
#define IV_MAX_P1 (2.0 * (1 + (((UV)IV_MAX) >> 1)))
#define UV_MAX_P1_HALF (2.0 * (1 + ((UV_MAX) >> 2)))
#ifndef CAST_INLINE
#define I_32(what) (cast_i32((NV)(what)))
#define U_32(what) (cast_ulong((NV)(what)))
#define I_V(what) (cast_iv((NV)(what)))
#define U_V(what) (cast_uv((NV)(what)))
#else
#define I_32(n) ((n) < I32_MAX_P1 ? ((n) < I32_MIN ? I32_MIN : (I32) (n)) : ((n) < U32_MAX_P1 ? (I32)(U32) (n) : ((n) > 0 ? (I32) U32_MAX : 0 )))
#define U_32(n) ((n) < 0.0 ? ((n) < I32_MIN ? (UV) I32_MIN : (U32)(I32) (n)) : ((n) < U32_MAX_P1 ? (U32) (n) : ((n) > 0 ? U32_MAX : 0 )))
#define I_V(n) (LIKELY((n) < IV_MAX_P1) ? (UNLIKELY((n) < IV_MIN) ? IV_MIN : (IV) (n)) : (LIKELY((n) < UV_MAX_P1) ? (IV)(UV) (n) : ((n) > 0 ? (IV)UV_MAX : 0 )))
#define U_V(n) ((n) < 0.0 ? (UNLIKELY((n) < IV_MIN) ? (UV) IV_MIN : (UV)(IV) (n)) : (LIKELY((n) < UV_MAX_P1) ? (UV) (n) : ((n) > 0 ? UV_MAX : 0 )))
#endif
#define U_S(what) ((U16)U_32(what))
#define U_I(what) ((unsigned int)U_32(what))
#define U_L(what) U_32(what)
#ifdef HAS_SIGNBIT
#define Perl_signbit signbit
#endif
#define NV_WITHIN_IV(nv) (I_V(nv) >= IV_MIN && I_V(nv) <= IV_MAX)
#define NV_WITHIN_UV(nv) ((nv)>=0.0 && U_V(nv) >= UV_MIN && U_V(nv) <= UV_MAX)
#define CLUMP_2UV(iv) ((iv) < 0 ? 0 : (UV)(iv))
#define CLUMP_2IV(uv) ((uv) > (UV)IV_MAX ? IV_MAX : (IV)(uv))
#ifndef MAXSYSFD
#define MAXSYSFD 2
#endif
#ifndef __cplusplus
#if !(defined(WIN32) || defined(UNDER_CE) || defined(SYMBIAN))
#endif
#endif
#ifndef Perl_debug_log
#define Perl_debug_log PerlIO_stderr()
#endif
#ifndef Perl_error_log
#define Perl_error_log (PL_stderrgv && isGV(PL_stderrgv) && GvIOp(PL_stderrgv) && IoOFP(GvIOp(PL_stderrgv)) ? IoOFP(GvIOp(PL_stderrgv)) : PerlIO_stderr())
#endif
#define DEBUG_p_FLAG 0x00000001
#define DEBUG_s_FLAG 0x00000002
#define DEBUG_l_FLAG 0x00000004
#define DEBUG_t_FLAG 0x00000008
#define DEBUG_o_FLAG 0x00000010
#define DEBUG_c_FLAG 0x00000020
#define DEBUG_P_FLAG 0x00000040
#define DEBUG_m_FLAG 0x00000080
#define DEBUG_f_FLAG 0x00000100
#define DEBUG_r_FLAG 0x00000200
#define DEBUG_x_FLAG 0x00000400
#define DEBUG_u_FLAG 0x00000800
#define DEBUG_U_FLAG 0x00001000
#define DEBUG_H_FLAG 0x00002000
#define DEBUG_X_FLAG 0x00004000
#define DEBUG_D_FLAG 0x00008000
#define DEBUG_S_FLAG 0x00010000
#define DEBUG_T_FLAG 0x00020000
#define DEBUG_R_FLAG 0x00040000
#define DEBUG_J_FLAG 0x00080000
#define DEBUG_v_FLAG 0x00100000
#define DEBUG_C_FLAG 0x00200000
#define DEBUG_A_FLAG 0x00400000
#define DEBUG_q_FLAG 0x00800000
#define DEBUG_M_FLAG 0x01000000
#define DEBUG_B_FLAG 0x02000000
#define DEBUG_L_FLAG 0x04000000
#define DEBUG_i_FLAG 0x08000000
#define DEBUG_MASK 0x0FFFEFFF
#define DEBUG_DB_RECURSE_FLAG 0x40000000
#define DEBUG_TOP_FLAG 0x80000000
#define DEBUG_p_TEST_ UNLIKELY(PL_debug & DEBUG_p_FLAG)
#define DEBUG_s_TEST_ UNLIKELY(PL_debug & DEBUG_s_FLAG)
#define DEBUG_l_TEST_ UNLIKELY(PL_debug & DEBUG_l_FLAG)
#define DEBUG_t_TEST_ UNLIKELY(PL_debug & DEBUG_t_FLAG)
#define DEBUG_o_TEST_ UNLIKELY(PL_debug & DEBUG_o_FLAG)
#define DEBUG_c_TEST_ UNLIKELY(PL_debug & DEBUG_c_FLAG)
#define DEBUG_P_TEST_ UNLIKELY(PL_debug & DEBUG_P_FLAG)
#define DEBUG_m_TEST_ UNLIKELY(PL_debug & DEBUG_m_FLAG)
#define DEBUG_f_TEST_ UNLIKELY(PL_debug & DEBUG_f_FLAG)
#define DEBUG_r_TEST_ UNLIKELY(PL_debug & DEBUG_r_FLAG)
#define DEBUG_x_TEST_ UNLIKELY(PL_debug & DEBUG_x_FLAG)
#define DEBUG_u_TEST_ UNLIKELY(PL_debug & DEBUG_u_FLAG)
#define DEBUG_U_TEST_ UNLIKELY(PL_debug & DEBUG_U_FLAG)
#define DEBUG_H_TEST_ UNLIKELY(PL_debug & DEBUG_H_FLAG)
#define DEBUG_X_TEST_ UNLIKELY(PL_debug & DEBUG_X_FLAG)
#define DEBUG_D_TEST_ UNLIKELY(PL_debug & DEBUG_D_FLAG)
#define DEBUG_S_TEST_ UNLIKELY(PL_debug & DEBUG_S_FLAG)
#define DEBUG_T_TEST_ UNLIKELY(PL_debug & DEBUG_T_FLAG)
#define DEBUG_R_TEST_ UNLIKELY(PL_debug & DEBUG_R_FLAG)
#define DEBUG_J_TEST_ UNLIKELY(PL_debug & DEBUG_J_FLAG)
#define DEBUG_v_TEST_ UNLIKELY(PL_debug & DEBUG_v_FLAG)
#define DEBUG_C_TEST_ UNLIKELY(PL_debug & DEBUG_C_FLAG)
#define DEBUG_A_TEST_ UNLIKELY(PL_debug & DEBUG_A_FLAG)
#define DEBUG_q_TEST_ UNLIKELY(PL_debug & DEBUG_q_FLAG)
#define DEBUG_M_TEST_ UNLIKELY(PL_debug & DEBUG_M_FLAG)
#define DEBUG_B_TEST_ UNLIKELY(PL_debug & DEBUG_B_FLAG)
#define DEBUG_L_TEST_ UNLIKELY(PL_debug & DEBUG_L_FLAG)
#define DEBUG_i_TEST_ UNLIKELY(PL_debug & DEBUG_i_FLAG)
#define DEBUG_Xv_TEST_ (DEBUG_X_TEST_ && DEBUG_v_TEST_)
#define DEBUG_Uv_TEST_ (DEBUG_U_TEST_ && DEBUG_v_TEST_)
#define DEBUG_Pv_TEST_ (DEBUG_P_TEST_ && DEBUG_v_TEST_)
#define DEBUG_Lv_TEST_ (DEBUG_L_TEST_ && DEBUG_v_TEST_)
#ifdef DEBUGGING
#define DEBUG_p_TEST DEBUG_p_TEST_
#define DEBUG_s_TEST DEBUG_s_TEST_
#define DEBUG_l_TEST DEBUG_l_TEST_
#define DEBUG_t_TEST DEBUG_t_TEST_
#define DEBUG_o_TEST DEBUG_o_TEST_
#define DEBUG_c_TEST DEBUG_c_TEST_
#define DEBUG_P_TEST DEBUG_P_TEST_
#define DEBUG_m_TEST DEBUG_m_TEST_
#define DEBUG_f_TEST DEBUG_f_TEST_
#define DEBUG_r_TEST DEBUG_r_TEST_
#define DEBUG_x_TEST DEBUG_x_TEST_
#define DEBUG_u_TEST DEBUG_u_TEST_
#define DEBUG_U_TEST DEBUG_U_TEST_
#define DEBUG_H_TEST DEBUG_H_TEST_
#define DEBUG_X_TEST DEBUG_X_TEST_
#define DEBUG_D_TEST DEBUG_D_TEST_
#define DEBUG_S_TEST DEBUG_S_TEST_
#define DEBUG_T_TEST DEBUG_T_TEST_
#define DEBUG_R_TEST DEBUG_R_TEST_
#define DEBUG_J_TEST DEBUG_J_TEST_
#define DEBUG_v_TEST DEBUG_v_TEST_
#define DEBUG_C_TEST DEBUG_C_TEST_
#define DEBUG_A_TEST DEBUG_A_TEST_
#define DEBUG_q_TEST DEBUG_q_TEST_
#define DEBUG_M_TEST DEBUG_M_TEST_
#define DEBUG_B_TEST DEBUG_B_TEST_
#define DEBUG_L_TEST DEBUG_L_TEST_
#define DEBUG_i_TEST DEBUG_i_TEST_
#define DEBUG_Xv_TEST DEBUG_Xv_TEST_
#define DEBUG_Uv_TEST DEBUG_Uv_TEST_
#define DEBUG_Pv_TEST DEBUG_Pv_TEST_
#define DEBUG_Lv_TEST DEBUG_Lv_TEST_
#define PERL_DEB(a) a
#define PERL_DEB2(a,b) a
#define PERL_DEBUG(a) if (PL_debug) a
#define DEBUG_p(a) if (DEBUG_p_TEST) a
#define DEBUG_s(a) if (DEBUG_s_TEST) a
#define DEBUG_l(a) if (DEBUG_l_TEST) a
#define DEBUG_t(a) if (DEBUG_t_TEST) a
#define DEBUG_o(a) if (DEBUG_o_TEST) a
#define DEBUG_c(a) if (DEBUG_c_TEST) a
#define DEBUG_P(a) if (DEBUG_P_TEST) a
#define DEBUG_m(a) STMT_START { if (PERL_GET_INTERP) { dTHX; if (DEBUG_m_TEST) { PL_debug &= ~DEBUG_m_FLAG; a; PL_debug |= DEBUG_m_FLAG; } } } STMT_END
#define DEBUG__(t,a) STMT_START { if (t) STMT_START {a;} STMT_END; } STMT_END
#define DEBUG_f(a) DEBUG__(DEBUG_f_TEST, a)
#ifndef PERL_EXT_RE_BUILD
#define DEBUG_r(a) DEBUG__(DEBUG_r_TEST, a)
#else
#define DEBUG_r(a) STMT_START {a;} STMT_END
#endif
#define DEBUG_x(a) DEBUG__(DEBUG_x_TEST, a)
#define DEBUG_u(a) DEBUG__(DEBUG_u_TEST, a)
#define DEBUG_U(a) DEBUG__(DEBUG_U_TEST, a)
#define DEBUG_H(a) DEBUG__(DEBUG_H_TEST, a)
#define DEBUG_X(a) DEBUG__(DEBUG_X_TEST, a)
#define DEBUG_D(a) DEBUG__(DEBUG_D_TEST, a)
#define DEBUG_Xv(a) DEBUG__(DEBUG_Xv_TEST, a)
#define DEBUG_Uv(a) DEBUG__(DEBUG_Uv_TEST, a)
#define DEBUG_Pv(a) DEBUG__(DEBUG_Pv_TEST, a)
#define DEBUG_Lv(a) DEBUG__(DEBUG_Lv_TEST, a)
#define DEBUG_S(a) DEBUG__(DEBUG_S_TEST, a)
#define DEBUG_T(a) DEBUG__(DEBUG_T_TEST, a)
#define DEBUG_R(a) DEBUG__(DEBUG_R_TEST, a)
#define DEBUG_v(a) DEBUG__(DEBUG_v_TEST, a)
#define DEBUG_C(a) DEBUG__(DEBUG_C_TEST, a)
#define DEBUG_A(a) DEBUG__(DEBUG_A_TEST, a)
#define DEBUG_q(a) DEBUG__(DEBUG_q_TEST, a)
#define DEBUG_M(a) DEBUG__(DEBUG_M_TEST, a)
#define DEBUG_B(a) DEBUG__(DEBUG_B_TEST, a)
#define DEBUG_L(a) DEBUG__(DEBUG_L_TEST, a)
#define DEBUG_i(a) DEBUG__(DEBUG_i_TEST, a)
#else
#define DEBUG_p_TEST (0)
#define DEBUG_s_TEST (0)
#define DEBUG_l_TEST (0)
#define DEBUG_t_TEST (0)
#define DEBUG_o_TEST (0)
#define DEBUG_c_TEST (0)
#define DEBUG_P_TEST (0)
#define DEBUG_m_TEST (0)
#define DEBUG_f_TEST (0)
#define DEBUG_r_TEST (0)
#define DEBUG_x_TEST (0)
#define DEBUG_u_TEST (0)
#define DEBUG_U_TEST (0)
#define DEBUG_H_TEST (0)
#define DEBUG_X_TEST (0)
#define DEBUG_D_TEST (0)
#define DEBUG_S_TEST (0)
#define DEBUG_T_TEST (0)
#define DEBUG_R_TEST (0)
#define DEBUG_J_TEST (0)
#define DEBUG_v_TEST (0)
#define DEBUG_C_TEST (0)
#define DEBUG_A_TEST (0)
#define DEBUG_q_TEST (0)
#define DEBUG_M_TEST (0)
#define DEBUG_B_TEST (0)
#define DEBUG_L_TEST (0)
#define DEBUG_i_TEST (0)
#define DEBUG_Xv_TEST (0)
#define DEBUG_Uv_TEST (0)
#define DEBUG_Pv_TEST (0)
#define DEBUG_Lv_TEST (0)
#define PERL_DEB(a) 
#define PERL_DEB2(a,b) b
#define PERL_DEBUG(a) 
#define DEBUG_p(a) 
#define DEBUG_s(a) 
#define DEBUG_l(a) 
#define DEBUG_t(a) 
#define DEBUG_o(a) 
#define DEBUG_c(a) 
#define DEBUG_P(a) 
#define DEBUG_m(a) 
#define DEBUG_f(a) 
#define DEBUG_r(a) 
#define DEBUG_x(a) 
#define DEBUG_u(a) 
#define DEBUG_U(a) 
#define DEBUG_H(a) 
#define DEBUG_X(a) 
#define DEBUG_D(a) 
#define DEBUG_S(a) 
#define DEBUG_T(a) 
#define DEBUG_R(a) 
#define DEBUG_v(a) 
#define DEBUG_C(a) 
#define DEBUG_A(a) 
#define DEBUG_q(a) 
#define DEBUG_M(a) 
#define DEBUG_B(a) 
#define DEBUG_L(a) 
#define DEBUG_i(a) 
#define DEBUG_Xv(a) 
#define DEBUG_Uv(a) 
#define DEBUG_Pv(a) 
#define DEBUG_Lv(a) 
#endif
#define DEBUG_SCOPE(where) DEBUG_l( Perl_deb(aTHX_ "%s scope %ld (savestack=%ld) at %s:%d\n", where, (long)PL_scopestack_ix, (long)PL_savestack_ix, __FILE__, __LINE__));
#define Perl_assert(what) PERL_DEB2( ((what) ? ((void) 0) : (Perl_croak_nocontext("Assertion %s failed: file \"" __FILE__ "\", line %d", STRINGIFY(what), __LINE__), (void) 0)), ((void)0))
#ifndef assert
#define assert(what) Perl_assert(what)
#endif
#ifdef DEBUGGING
#define assert_(what) assert(what),
#else
#define assert_(what) 
#endif
#ifndef PERL_MG_UFUNC
#define PERL_MG_UFUNC(name,ix,sv) I32 name(pTHX_ IV ix, SV *sv)
#endif
#ifndef DONT_DECLARE_STD
#ifndef atof
#endif
#endif
#ifndef STANDARD_C
#if defined(OEMVS)
#else
#endif
#endif
#ifdef I_MATH
# include <math.h>
# ifdef __VMS
# include <fp.h>
# endif
#else
#endif
#ifndef __cplusplus
# if !defined(WIN32) && !defined(VMS)
#ifndef crypt
#endif
# endif
# ifndef DONT_DECLARE_STD
# ifndef getenv
# endif
# if !defined(HAS_LSEEK_PROTO) && !defined(__hpux)
# ifdef _FILE_OFFSET_BITS
# if _FILE_OFFSET_BITS == 64
# endif
# endif
# endif
# endif
# ifndef WIN32
# ifndef getlogin
# endif
# endif
#endif
#ifdef UNLINK_ALL_VERSIONS
#define UNLINK unlnk
#else
#define UNLINK PerlLIO_unlink
#endif
#if defined(HAS_SETRESUID) && !defined(HAS_SETRESUID_PROTO)
#endif
#if defined(HAS_SETRESGID) && !defined(HAS_SETRESGID_PROTO)
#endif
#ifndef HAS_SETREUID
# ifdef HAS_SETRESUID
#define setreuid(r,e) setresuid(r,e,(Uid_t)-1)
#define HAS_SETREUID 
# endif
#endif
#ifndef HAS_SETREGID
# ifdef HAS_SETRESGID
#define setregid(r,e) setresgid(r,e,(Gid_t)-1)
#define HAS_SETREGID 
# endif
#endif
#ifdef HAS_SIGACTION
#else
#endif
#define SCAN_DEF 0
#define SCAN_TR 1
#define SCAN_REPL 2
#ifdef DEBUGGING
# ifndef register
#define register 
# endif
#define RUNOPS_DEFAULT Perl_runops_debug
#else
#define RUNOPS_DEFAULT Perl_runops_standard
#endif
#if defined(USE_PERLIO)
# ifdef USE_ITHREADS
#define PERLIO_INIT MUTEX_INIT(&PL_perlio_mutex)
#define PERLIO_TERM STMT_START { PerlIO_teardown(); MUTEX_DESTROY(&PL_perlio_mutex); } STMT_END
# else
#define PERLIO_INIT 
#define PERLIO_TERM PerlIO_teardown()
# endif
#else
#define PERLIO_INIT 
#define PERLIO_TERM 
#endif
#ifdef MYMALLOC
# ifdef MUTEX_INIT_CALLS_MALLOC
#define MALLOC_INIT STMT_START { PL_malloc_mutex = NULL; MUTEX_INIT(&PL_malloc_mutex); } STMT_END
#define MALLOC_TERM STMT_START { perl_mutex tmp = PL_malloc_mutex; PL_malloc_mutex = NULL; MUTEX_DESTROY(&tmp); } STMT_END
# else
#define MALLOC_INIT MUTEX_INIT(&PL_malloc_mutex)
#define MALLOC_TERM MUTEX_DESTROY(&PL_malloc_mutex)
# endif
#else
#define MALLOC_INIT 
#define MALLOC_TERM 
#endif
#if defined(PERL_IMPLICIT_CONTEXT)
# if defined(PERL_POISON) || defined(PERL_DEBUG_READONLY_COW)
# endif
# ifdef PERL_DEBUG_READONLY_COW
# endif
#elif defined(PERL_DEBUG_READONLY_COW)
#endif
#if defined (PERL_TRACK_MEMPOOL) || defined (PERL_DEBUG_READONLY_COW)
#define PERL_MEMORY_DEBUG_HEADER_SIZE (sizeof(struct perl_memory_debug_header) + (MEM_ALIGNBYTES - sizeof(struct perl_memory_debug_header) %MEM_ALIGNBYTES) % MEM_ALIGNBYTES)
#else
#define PERL_MEMORY_DEBUG_HEADER_SIZE 0
#endif
#ifdef PERL_TRACK_MEMPOOL
# ifdef PERL_DEBUG_READONLY_COW
#define INIT_TRACK_MEMPOOL(header,interp) STMT_START { (header).interpreter = (interp); (header).prev = (header).next = &(header); (header).readonly = 0; } STMT_END
# else
#define INIT_TRACK_MEMPOOL(header,interp) STMT_START { (header).interpreter = (interp); (header).prev = (header).next = &(header); } STMT_END
# endif
# else
#define INIT_TRACK_MEMPOOL(header,interp) 
#endif
#ifdef I_MALLOCMALLOC
# include <malloc/malloc.h>
#endif
#ifdef MYMALLOC
#define Perl_safesysmalloc_size(where) Perl_malloced_size(where)
#else
# if defined(HAS_MALLOC_SIZE) && !defined(PERL_DEBUG_READONLY_COW)
# ifdef PERL_TRACK_MEMPOOL
#define Perl_safesysmalloc_size(where) (malloc_size(((char *)(where)) - PERL_MEMORY_DEBUG_HEADER_SIZE) - PERL_MEMORY_DEBUG_HEADER_SIZE)
# else
#define Perl_safesysmalloc_size(where) malloc_size(where)
# endif
# endif
# ifdef HAS_MALLOC_GOOD_SIZE
# ifdef PERL_TRACK_MEMPOOL
#define Perl_malloc_good_size(how_much) (malloc_good_size((how_much) + PERL_MEMORY_DEBUG_HEADER_SIZE) - PERL_MEMORY_DEBUG_HEADER_SIZE)
# else
#define Perl_malloc_good_size(how_much) malloc_good_size(how_much)
# endif
# else
#define Perl_malloc_good_size(how_much) (how_much)
# endif
#endif
#if defined(__DYNAMIC__) && defined(PERL_DARWIN) && defined(PERL_CORE)
# include <crt_externs.h>
#define environ (*_NSGetEnviron())
#else
# ifdef USE_ENVIRON_ARRAY
# if !defined(DONT_DECLARE_STD) || (defined(__svr4__) && defined(__GNUC__) && defined(__sun)) || defined(__sgi)
# endif
# endif
#endif
#define PERL_PATCHLEVEL_H_IMPLICIT 
#include "patchlevel.h"
#undef PERL_PATCHLEVEL_H_IMPLICIT
#define PERL_VERSION_STRING STRINGIFY(PERL_REVISION) "." STRINGIFY(PERL_VERSION) "." STRINGIFY(PERL_SUBVERSION)
#define PERL_API_VERSION_STRING STRINGIFY(PERL_API_REVISION) "." STRINGIFY(PERL_API_VERSION) "." STRINGIFY(PERL_API_SUBVERSION)
#ifndef OS2
#endif
#ifdef CSH
#define PL_cshlen (sizeof(CSH "") - 1)
#endif
#ifdef DOINIT
# ifdef PERL_MICRO
# include "uuudmap.h"
# else
# include "uudmap.h"
# endif
# ifdef PERL_MICRO
# include "ubitcount.h"
#else
# include "bitcount.h"
# endif
#else
#endif
#ifdef DOINIT
#ifndef EBCDIC
#if UNICODE_MAJOR_VERSION > 2 || (UNICODE_MAJOR_VERSION == 2 && UNICODE_DOT_VERSION >= 1 && UNICODE_DOT_DOT_VERSION >= 8)
#else
#endif
#endif
#else
# ifndef EBCDIC
# endif
#endif
#ifndef PERL_GLOBAL_STRUCT
#ifdef DOINIT
#else
#endif
#endif
#ifdef DOINIT
#ifdef EBCDIC
#else
#endif
#else
#endif
#ifdef DOINIT
#else
#endif
#ifdef DOINIT
# ifdef DEBUG_LEAKING_SCALARS
# endif
# ifdef DEBUG_LEAKING_SCALARS_FORK_DUMP
# endif
# ifdef FCRYPT
# endif
# ifdef HAS_TIMES
# endif
# ifdef HAVE_INTERP_INTERN
# endif
# ifdef MULTIPLICITY
# endif
# ifdef MYMALLOC
# endif
# ifdef PERLIO_LAYERS
# endif
# ifdef PERL_DEBUG_READONLY_COW
# endif
# ifdef PERL_DEBUG_READONLY_OPS
# endif
# ifdef PERL_GLOBAL_STRUCT
# endif
# ifdef PERL_GLOBAL_STRUCT_PRIVATE
# endif
# ifdef PERL_IMPLICIT_CONTEXT
# endif
# ifdef PERL_IMPLICIT_SYS
# endif
# ifdef PERL_MICRO
# endif
# ifdef PERL_NEED_APPCTX
# endif
# ifdef PERL_NEED_TIMESBASE
# endif
# ifdef PERL_POISON
# endif
# ifdef PERL_SAWAMPERSAND
# endif
# ifdef PERL_TRACK_MEMPOOL
# endif
# ifdef PERL_USES_PL_PIDSTATUS
# endif
# ifdef USE_64_BIT_ALL
# endif
# ifdef USE_64_BIT_INT
# endif
# ifdef USE_IEEE
# endif
# ifdef USE_ITHREADS
# endif
# ifdef USE_LARGE_FILES
# endif
# ifdef USE_LOCALE_COLLATE
# endif
# ifdef USE_LOCALE_NUMERIC
# endif
# ifdef USE_LOCALE_TIME
# endif
# ifdef USE_LONG_DOUBLE
# endif
# ifdef USE_PERLIO
# endif
# ifdef USE_QUADMATH
# endif
# ifdef USE_REENTRANT_API
# endif
# ifdef USE_SOCKS
# endif
# ifdef VMS_DO_SOCKETS
# endif
# ifdef VMS_SHORTEN_LONG_SYMBOLS
# endif
# ifdef VMS_WE_ARE_CASE_SENSITIVE
# endif
#else
#endif
#ifndef PERL_SET_PHASE
#define PERL_SET_PHASE(new_phase) PERL_DTRACE_PROBE_PHASE(new_phase); PL_phase = new_phase;
#endif
#ifdef DOINIT
#else
#endif
#ifndef PERL_CORE
#define PL_dirty cBOOL(PL_phase == PERL_PHASE_DESTRUCT)
#define PL_amagic_generation PL_na
#define PL_encoding ((SV *)NULL)
#endif
#define PL_hints PL_compiling.cop_hints
#define PL_maxo MAXO
#ifdef __Lynx__
#ifdef FORMAT
#undef FORMAT
#endif
#ifdef SPACE
#undef SPACE
#endif
#endif
#define LEX_NOTPARSING 11
#define KEY_sigvar 0xFFFF
#define HINT_INTEGER 0x00000001
#define HINT_STRICT_REFS 0x00000002
#define HINT_LOCALE 0x00000004
#define HINT_BYTES 0x00000008
#define HINT_LOCALE_PARTIAL 0x00000010
#define HINT_EXPLICIT_STRICT_REFS 0x00000020
#define HINT_EXPLICIT_STRICT_SUBS 0x00000040
#define HINT_EXPLICIT_STRICT_VARS 0x00000080
#define HINT_BLOCK_SCOPE 0x00000100
#define HINT_STRICT_SUBS 0x00000200
#define HINT_STRICT_VARS 0x00000400
#define HINT_UNI_8_BIT 0x00000800
#define HINT_NEW_INTEGER 0x00001000
#define HINT_NEW_FLOAT 0x00002000
#define HINT_NEW_BINARY 0x00004000
#define HINT_NEW_STRING 0x00008000
#define HINT_NEW_RE 0x00010000
#define HINT_LOCALIZE_HH 0x00020000
#define HINT_LEXICAL_IO_IN 0x00040000
#define HINT_LEXICAL_IO_OUT 0x00080000
#define HINT_RE_TAINT 0x00100000
#define HINT_RE_EVAL 0x00200000
#define HINT_FILETEST_ACCESS 0x00400000
#define HINT_UTF8 0x00800000
#define HINT_NO_AMAGIC 0x01000000
#define HINT_RE_FLAGS 0x02000000
#define HINT_FEATURE_MASK 0x1c000000
#define HINT_SORT_SORT_BITS 0x000000FF
#define HINT_SORT_QUICKSORT 0x00000001
#define HINT_SORT_MERGESORT 0x00000002
#define HINT_SORT_STABLE 0x00000100
#define SAWAMPERSAND_LEFT 1
#define SAWAMPERSAND_MIDDLE 2
#define SAWAMPERSAND_RIGHT 4
#ifndef PERL_SAWAMPERSAND
#define PL_sawampersand (SAWAMPERSAND_LEFT|SAWAMPERSAND_MIDDLE|SAWAMPERSAND_RIGHT)
#endif
#define DBVARMG_SINGLE 0
#define DBVARMG_TRACE 1
#define DBVARMG_SIGNAL 2
#define DBVARMG_COUNT 3
#define PL_DBsingle_iv (PL_DBcontrol[DBVARMG_SINGLE])
#define PL_DBtrace_iv (PL_DBcontrol[DBVARMG_TRACE])
#define PL_DBsignal_iv (PL_DBcontrol[DBVARMG_SIGNAL])
#define RsSNARF(sv) (! SvOK(sv))
#define RsSIMPLE(sv) (SvOK(sv) && (! SvPOK(sv) || SvCUR(sv)))
#define RsPARA(sv) (SvPOK(sv) && ! SvCUR(sv))
#define RsRECORD(sv) (SvROK(sv) && (SvIV(SvRV(sv)) > 0))
#define PERL_DEBUG_PAD(i) &(PL_debug_pad.pad[i])
#define PERL_DEBUG_PAD_ZERO(i) (SvPVX(PERL_DEBUG_PAD(i))[0] = 0, (((XPV*) SvANY(PERL_DEBUG_PAD(i)))->xpv_cur = 0), PERL_DEBUG_PAD(i))
#define KEYWORD_PLUGIN_DECLINE 0
#define KEYWORD_PLUGIN_STMT 1
#define KEYWORD_PLUGIN_EXPR 2
#if !defined(HAS_SIGACTION) && defined(VMS)
#define FAKE_PERSISTENT_SIGNAL_HANDLERS 
#endif
#if defined(KILL_BY_SIGPRC)
#define FAKE_DEFAULT_SIGNAL_HANDLERS 
#endif
#if !defined(MULTIPLICITY)
#else
#define PERLVAR(prefix,var,type) type prefix ##var;
#define PERLVARA(prefix,var,n,type) type prefix ##var[n];
#define PERLVARI(prefix,var,type,init) type prefix ##var;
#define PERLVARIC(prefix,var,type,init) type prefix ##var;
# include "intrpvar.h"
#define PERL_INTERPRETER_SIZE_UPTO_MEMBER(member) STRUCT_OFFSET(struct interpreter, member) + sizeof(((struct interpreter*)0)->member)
# ifdef PERL_GLOBAL_STRUCT
# include "perlvars.h"
# ifdef PERL_CORE
# ifndef PERL_GLOBAL_STRUCT_PRIVATE
#undef PERL_GET_VARS
#define PERL_GET_VARS() PL_VarsPtr
# endif
# else
# if !defined(__GNUC__) || !defined(WIN32)
# endif
#define PL_Vars (*((PL_VarsPtr) ? PL_VarsPtr : (PL_VarsPtr = Perl_GetVars(aTHX))))
# endif
# endif
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#endif
#include "thread.h"
#include "pp.h"
#undef PERL_CKDEF
#undef PERL_PPDEF
#define PERL_CKDEF(s) PERL_CALLCONV OP *s (pTHX_ OP *o);
#define PERL_PPDEF(s) PERL_CALLCONV OP *s (pTHX);
#ifdef MYMALLOC
# include "malloc_ctl.h"
#endif
#if defined(WIN32)
# include "win32iop.h"
#endif
#include "proto.h"
#include "opcode.h"
#if !defined(PERL_FOR_X2P)
# include "embedvar.h"
#endif
#define PERLVAR(prefix,var,type) EXT type PL_ ##var;
#define PERLVARA(prefix,var,n,type) EXT type PL_ ##var[n];
#define PERLVARI(prefix,var,type,init) EXT type PL_ ##var INIT(init);
#define PERLVARIC(prefix,var,type,init) EXTCONST type PL_ ##var INIT(init);
#if !defined(MULTIPLICITY)
# include "intrpvar.h"
#endif
#ifdef PERL_CORE
#undef PL_na
#endif
#include "embed.h"
#ifndef PERL_GLOBAL_STRUCT
# include "perlvars.h"
#endif
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#if !defined(MULTIPLICITY)
#define PERLVAR(prefix,var,type) type prefix ##var;
#define PERLVARA(prefix,var,n,type) type prefix ##var[n];
#define PERLVARI(prefix,var,type,init) type prefix ##var;
#define PERLVARIC(prefix,var,type,init) type prefix ##var;
# include "intrpvar.h"
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#endif
#define EXT_MGVTBL EXTCONST MGVTBL
#define PERL_MAGIC_READONLY_ACCEPTABLE 0x40
#define PERL_MAGIC_VALUE_MAGIC 0x80
#define PERL_MAGIC_VTABLE_MASK 0x3F
#define PERL_MAGIC_TYPE_READONLY_ACCEPTABLE(t) (PL_magic_data[(U8)(t)] & PERL_MAGIC_READONLY_ACCEPTABLE)
#define PERL_MAGIC_TYPE_IS_VALUE_MAGIC(t) (PL_magic_data[(U8)(t)] & PERL_MAGIC_VALUE_MAGIC)
#include "mg_vtable.h"
#ifdef DOINIT
# ifdef PERL_MICRO
# include "umg_data.h"
# else
# include "mg_data.h"
# endif
#else
#endif
#ifdef DOINIT
#else
#endif
#ifdef __cplusplus
#define INFNAN_U8_NV_DECL EXTERN_C const union { U8 u8[NVSIZE]; NV nv; }
#define INFNAN_NV_U8_DECL EXTERN_C const union { NV nv; U8 u8[NVSIZE]; }
#else
#define INFNAN_U8_NV_DECL EXTCONST union { U8 u8[NVSIZE]; NV nv; }
#define INFNAN_NV_U8_DECL EXTCONST union { NV nv; U8 u8[NVSIZE]; }
#endif
#ifndef PERL_SET_CONTEXT
#define PERL_SET_CONTEXT(i) PERL_SET_INTERP(i)
#endif
#ifndef PERL_GET_CONTEXT
#define PERL_GET_CONTEXT PERL_GET_INTERP
#endif
#ifndef PERL_GET_THX
#define PERL_GET_THX ((void*)NULL)
#endif
#ifndef PERL_SET_THX
#define PERL_SET_THX(t) NOOP
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
# include "inline.h"
#endif
#include "overload.h"
#define AMGfallNEVER 1
#define AMGfallNO 2
#define AMGfallYES 3
#define AMTf_AMAGIC 1
#define AMT_AMAGIC(amt) ((amt)->flags & AMTf_AMAGIC)
#define AMT_AMAGIC_on(amt) ((amt)->flags |= AMTf_AMAGIC)
#define AMT_AMAGIC_off(amt) ((amt)->flags &= ~AMTf_AMAGIC)
#define StashHANDLER(stash,meth) gv_handler((stash),CAT2(meth,_amg))
#ifdef _FASTMATH
# ifdef atan2
#define F_atan2_amg atan2_amg
# endif
# ifdef cos
#define F_cos_amg cos_amg
# endif
# ifdef exp
#define F_exp_amg exp_amg
# endif
# ifdef log
#define F_log_amg log_amg
# endif
# ifdef pow
#define F_pow_amg pow_amg
# endif
# ifdef sin
#define F_sin_amg sin_amg
# endif
# ifdef sqrt
#define F_sqrt_amg sqrt_amg
# endif
#endif
#define PERLDB_ALL (PERLDBf_SUB | PERLDBf_LINE | PERLDBf_NOOPT | PERLDBf_INTER | PERLDBf_SUBLINE| PERLDBf_SINGLE| PERLDBf_NAMEEVAL| PERLDBf_NAMEANON | PERLDBf_SAVESRC)
#define PERLDBf_SUB 0x01
#define PERLDBf_LINE 0x02
#define PERLDBf_NOOPT 0x04
#define PERLDBf_INTER 0x08
#define PERLDBf_SUBLINE 0x10
#define PERLDBf_SINGLE 0x20
#define PERLDBf_NONAME 0x40
#define PERLDBf_GOTO 0x80
#define PERLDBf_NAMEEVAL 0x100
#define PERLDBf_NAMEANON 0x200
#define PERLDBf_SAVESRC 0x400
#define PERLDBf_SAVESRC_NOSUBS 0x800
#define PERLDBf_SAVESRC_INVALID 0x1000
#define PERLDB_SUB (PL_perldb & PERLDBf_SUB)
#define PERLDB_LINE (PL_perldb & PERLDBf_LINE)
#define PERLDB_NOOPT (PL_perldb & PERLDBf_NOOPT)
#define PERLDB_INTER (PL_perldb & PERLDBf_INTER)
#define PERLDB_SUBLINE (PL_perldb & PERLDBf_SUBLINE)
#define PERLDB_SINGLE (PL_perldb & PERLDBf_SINGLE)
#define PERLDB_SUB_NN (PL_perldb & PERLDBf_NONAME)
#define PERLDB_GOTO (PL_perldb & PERLDBf_GOTO)
#define PERLDB_NAMEEVAL (PL_perldb & PERLDBf_NAMEEVAL)
#define PERLDB_NAMEANON (PL_perldb & PERLDBf_NAMEANON)
#define PERLDB_SAVESRC (PL_perldb & PERLDBf_SAVESRC)
#define PERLDB_SAVESRC_NOSUBS (PL_perldb & PERLDBf_SAVESRC_NOSUBS)
#define PERLDB_SAVESRC_INVALID (PL_perldb & PERLDBf_SAVESRC_INVALID)
#define PERLDB_LINE_OR_SAVESRC (PL_perldb & (PERLDBf_LINE | PERLDBf_SAVESRC))
#ifdef USE_LOCALE
#define LOCALE_INIT MUTEX_INIT(&PL_locale_mutex)
# ifdef USE_THREAD_SAFE_LOCALE
#define LOCALE_TERM STMT_START { MUTEX_DESTROY(&PL_locale_mutex); if (PL_C_locale_obj) { uselocale(LC_GLOBAL_LOCALE); freelocale(PL_C_locale_obj); PL_C_locale_obj = (locale_t) NULL; } } STMT_END
# else
#define LOCALE_TERM MUTEX_DESTROY(&PL_locale_mutex)
# endif
#define LOCALE_LOCK MUTEX_LOCK(&PL_locale_mutex)
#define LOCALE_UNLOCK MUTEX_UNLOCK(&PL_locale_mutex)
#define IN_LOCALE_RUNTIME (PL_curcop && CopHINTS_get(PL_curcop) & HINT_LOCALE)
#define IN_SOME_LOCALE_FORM_RUNTIME cBOOL(CopHINTS_get(PL_curcop) & (HINT_LOCALE|HINT_LOCALE_PARTIAL))
#define IN_LOCALE_COMPILETIME cBOOL(PL_hints & HINT_LOCALE)
#define IN_SOME_LOCALE_FORM_COMPILETIME cBOOL(PL_hints & (HINT_LOCALE|HINT_LOCALE_PARTIAL))
#define IN_LOCALE (IN_PERL_COMPILETIME ? IN_LOCALE_COMPILETIME : IN_LOCALE_RUNTIME)
#define IN_SOME_LOCALE_FORM (IN_PERL_COMPILETIME ? IN_SOME_LOCALE_FORM_COMPILETIME : IN_SOME_LOCALE_FORM_RUNTIME)
#define IN_LC_ALL_COMPILETIME IN_LOCALE_COMPILETIME
#define IN_LC_ALL_RUNTIME IN_LOCALE_RUNTIME
#define IN_LC_PARTIAL_COMPILETIME cBOOL(PL_hints & HINT_LOCALE_PARTIAL)
#define IN_LC_PARTIAL_RUNTIME (PL_curcop && CopHINTS_get(PL_curcop) & HINT_LOCALE_PARTIAL)
#define IN_LC_COMPILETIME(category) (IN_LC_ALL_COMPILETIME || (IN_LC_PARTIAL_COMPILETIME && _is_in_locale_category(TRUE, (category))))
#define IN_LC_RUNTIME(category) (IN_LC_ALL_RUNTIME || (IN_LC_PARTIAL_RUNTIME && _is_in_locale_category(FALSE, (category))))
#define IN_LC(category) (IN_LC_COMPILETIME(category) || IN_LC_RUNTIME(category))
# if defined (PERL_CORE) || defined (PERL_IN_XSUB_RE)
# ifdef USE_LOCALE_CTYPE
#define _CHECK_AND_WARN_PROBLEMATIC_LOCALE STMT_START { if (UNLIKELY(PL_warn_locale)) { _warn_problematic_locale(); } } STMT_END
# else
#define _CHECK_AND_WARN_PROBLEMATIC_LOCALE 
# endif
#define _CHECK_AND_OUTPUT_WIDE_LOCALE_CP_MSG(cp) STMT_START { if (! PL_in_utf8_CTYPE_locale && ckWARN(WARN_LOCALE)) { Perl_warner(aTHX_ packWARN(WARN_LOCALE), "Wide character (U+%" UVXf ") in %s", (UV) cp, OP_DESC(PL_op)); } } STMT_END
#define _CHECK_AND_OUTPUT_WIDE_LOCALE_UTF8_MSG(s,send) STMT_START { if (! PL_in_utf8_CTYPE_locale && ckWARN(WARN_LOCALE)) { UV cp = utf8_to_uvchr_buf((U8 *) s, (U8 *) send, NULL); Perl_warner(aTHX_ packWARN(WARN_LOCALE), "Wide character (U+%" UVXf ") in %s", (cp == 0) ? UNICODE_REPLACEMENT : (UV) cp, OP_DESC(PL_op)); } } STMT_END
# endif
#if defined(USE_ITHREADS) && defined(HAS_NEWLOCALE) && defined(LC_ALL_MASK) && defined(HAS_FREELOCALE) && defined(HAS_USELOCALE) && ! defined(NO_THREAD_SAFE_USELOCALE)
#define USE_THREAD_SAFE_LOCALE 
#endif
#else
#define LOCALE_INIT 
#define LOCALE_TERM 
#define LOCALE_LOCK 
#define LOCALE_UNLOCK 
#define IN_LOCALE_RUNTIME 0
#define IN_SOME_LOCALE_FORM_RUNTIME 0
#define IN_LOCALE_COMPILETIME 0
#define IN_SOME_LOCALE_FORM_COMPILETIME 0
#define IN_LOCALE 0
#define IN_SOME_LOCALE_FORM 0
#define IN_LC_ALL_COMPILETIME 0
#define IN_LC_ALL_RUNTIME 0
#define IN_LC_PARTIAL_COMPILETIME 0
#define IN_LC_PARTIAL_RUNTIME 0
#define IN_LC_COMPILETIME(category) 0
#define IN_LC_RUNTIME(category) 0
#define IN_LC(category) 0
#define _CHECK_AND_WARN_PROBLEMATIC_LOCALE 
#define _CHECK_AND_OUTPUT_WIDE_LOCALE_CP_MSG(a) 
#define _CHECK_AND_OUTPUT_WIDE_LOCALE_UTF8_MSG(a,b) 
#endif
#ifdef USE_LOCALE_NUMERIC
#define _NOT_IN_NUMERIC_STANDARD (! PL_numeric_standard)
#define _NOT_IN_NUMERIC_UNDERLYING (! PL_numeric_local && PL_numeric_standard < 2)
#define DECLARATION_FOR_LC_NUMERIC_MANIPULATION void (*_restore_LC_NUMERIC_function)(pTHX) = NULL
#define STORE_LC_NUMERIC_SET_TO_NEEDED() if (IN_LC(LC_NUMERIC)) { if (_NOT_IN_NUMERIC_UNDERLYING) { set_numeric_local(); _restore_LC_NUMERIC_function = &Perl_set_numeric_standard; } } else { if (_NOT_IN_NUMERIC_STANDARD) { SET_NUMERIC_STANDARD(); _restore_LC_NUMERIC_function = &Perl_set_numeric_local; } }
#define RESTORE_LC_NUMERIC() if (_restore_LC_NUMERIC_function) { _restore_LC_NUMERIC_function(aTHX); }
#define SET_NUMERIC_STANDARD() STMT_START { if (_NOT_IN_NUMERIC_STANDARD) set_numeric_standard(); } STMT_END
#define SET_NUMERIC_UNDERLYING() STMT_START { if (_NOT_IN_NUMERIC_UNDERLYING) set_numeric_local(); } STMT_END
#define STORE_LC_NUMERIC_UNDERLYING_SET_STANDARD() bool _was_local = _NOT_IN_NUMERIC_STANDARD; if (_was_local) set_numeric_standard();
#define STORE_LC_NUMERIC_STANDARD_SET_UNDERLYING() bool _was_standard = _NOT_IN_NUMERIC_UNDERLYING && IN_LC(LC_NUMERIC); if (_was_standard) set_numeric_local();
#define STORE_LC_NUMERIC_FORCE_TO_UNDERLYING() if (_NOT_IN_NUMERIC_UNDERLYING) { set_numeric_local(); _restore_LC_NUMERIC_function = &Perl_set_numeric_standard; }
#define LOCK_LC_NUMERIC_STANDARD() (__ASSERT_(PL_numeric_standard) PL_numeric_standard++)
#define UNLOCK_LC_NUMERIC_STANDARD() STMT_START { if (PL_numeric_standard > 1) { PL_numeric_standard--; } else { assert(0); } } STMT_END
#define RESTORE_LC_NUMERIC_UNDERLYING() if (_was_local) set_numeric_local();
#define RESTORE_LC_NUMERIC_STANDARD() if (_restore_LC_NUMERIC_function) { _restore_LC_NUMERIC_function(aTHX); }
#else
#define SET_NUMERIC_STANDARD() 
#define SET_NUMERIC_UNDERLYING() 
#define IS_NUMERIC_RADIX(a,b) (0)
#define STORE_LC_NUMERIC_UNDERLYING_SET_STANDARD() 
#define STORE_LC_NUMERIC_STANDARD_SET_UNDERLYING() 
#define STORE_LC_NUMERIC_FORCE_TO_UNDERLYING() 
#define RESTORE_LC_NUMERIC_UNDERLYING() 
#define RESTORE_LC_NUMERIC_STANDARD() 
#define DECLARATION_FOR_LC_NUMERIC_MANIPULATION 
#define STORE_LC_NUMERIC_SET_TO_NEEDED() 
#define RESTORE_LC_NUMERIC() 
#define LOCK_LC_NUMERIC_STANDARD() 
#define UNLOCK_LC_NUMERIC_STANDARD() 
#endif
#define Atof my_atof
#define DECLARATION_FOR_STORE_LC_NUMERIC_SET_TO_NEEDED DECLARATION_FOR_LC_NUMERIC_MANIPULATION
#define DECLARE_STORE_LC_NUMERIC_SET_TO_NEEDED() DECLARATION_FOR_STORE_LC_NUMERIC_SET_TO_NEEDED; STORE_LC_NUMERIC_SET_TO_NEEDED();
#define LOCK_NUMERIC_STANDARD() LOCK_LC_NUMERIC_STANDARD()
#define RESTORE_NUMERIC_LOCAL() RESTORE_LC_NUMERIC_UNDERLYING()
#define RESTORE_NUMERIC_STANDARD() RESTORE_LC_NUMERIC_STANDARD()
#define SET_NUMERIC_LOCAL() SET_NUMERIC_UNDERLYING()
#define STORE_NUMERIC_LOCAL_SET_STANDARD() STORE_LC_NUMERIC_UNDERLYING_SET_STANDARD()
#define STORE_NUMERIC_STANDARD_SET_LOCAL() STORE_LC_NUMERIC_STANDARD_SET_UNDERLYING()
#define STORE_NUMERIC_STANDARD_FORCE_LOCAL() STORE_LC_NUMERIC_FORCE_TO_UNDERLYING()
#define UNLOCK_NUMERIC_STANDARD() UNLOCK_LC_NUMERIC_STANDARD()
#ifdef USE_QUADMATH
#define Perl_strtod(s,e) strtoflt128(s, e)
#elif defined(HAS_LONG_DOUBLE) && defined(USE_LONG_DOUBLE)
# if defined(HAS_STRTOLD)
#define Perl_strtod(s,e) strtold(s, e)
# elif defined(HAS_STRTOD)
#define Perl_strtod(s,e) (NV)strtod(s, e)
# endif
#elif defined(HAS_STRTOD)
#define Perl_strtod(s,e) strtod(s, e)
#endif
#if !defined(Strtol) && defined(USE_64_BIT_INT) && defined(IV_IS_QUAD) && (QUADKIND == QUAD_IS_LONG_LONG || QUADKIND == QUAD_IS___INT64)
# ifdef __hpux
#define strtoll __strtoll
# endif
# if defined(WIN64) && defined(_MSC_VER)
#define strtoll _strtoi64
# endif
# if !defined(Strtol) && defined(HAS_STRTOLL)
#define Strtol strtoll
# endif
# if !defined(Strtol) && defined(HAS_STRTOQ)
#define Strtol strtoq
# endif
#endif
#if !defined(Strtol) && defined(HAS_STRTOL)
#define Strtol strtol
#endif
#ifndef Atol
# if defined(USE_64_BIT_INT) && defined(IV_IS_QUAD) && defined(HAS_ATOLL) && (QUADKIND == QUAD_IS_LONG_LONG || QUADKIND == QUAD_IS___INT64)
# ifdef WIN64
#define atoll _atoi64
# endif
#define Atol atoll
# else
#define Atol atol
# endif
#endif
#if !defined(Strtoul) && defined(USE_64_BIT_INT) && defined(UV_IS_QUAD) && (QUADKIND == QUAD_IS_LONG_LONG || QUADKIND == QUAD_IS___INT64)
# ifdef __hpux
#define strtoull __strtoull
# endif
# if defined(WIN64) && defined(_MSC_VER)
#define strtoull _strtoui64
# endif
# if !defined(Strtoul) && defined(HAS_STRTOULL)
#define Strtoul strtoull
# endif
# if !defined(Strtoul) && defined(HAS_STRTOUQ)
#define Strtoul strtouq
# endif
#endif
#if !defined(Strtoul) && defined(HAS_STRTOUL)
#define Strtoul strtoul
#endif
#if !defined(Strtoul) && defined(HAS_STRTOL)
#define Strtoul(s,e,b) strchr((s), '-') ? ULONG_MAX : (unsigned long)strtol((s), (e), (b))
#endif
#ifndef Atoul
#define Atoul(s) Strtoul(s, NULL, 10)
#endif
#ifndef PERL_SCRIPT_MODE
#define PERL_SCRIPT_MODE "r"
#endif
#define PERL_STACK_OVERFLOW_CHECK() NOOP
#ifndef PERL_MICRO
# ifndef PERL_ASYNC_CHECK
#define PERL_ASYNC_CHECK() if (UNLIKELY(PL_sig_pending)) PL_signalhook(aTHX)
# endif
#endif
#ifndef PERL_ASYNC_CHECK
#define PERL_ASYNC_CHECK() NOOP
#endif
#ifndef PERL_ALLOC_CHECK
#define PERL_ALLOC_CHECK(p) NOOP
#endif
#ifdef HAS_SEM
# include <sys/ipc.h>
# include <sys/sem.h>
# ifndef HAS_UNION_SEMUN
# endif
# ifdef USE_SEMCTL_SEMUN
# ifdef IRIX32_SEMUN_BROKEN_BY_GCC
#define semun gccbug_semun
# endif
#define Semctl(id,num,cmd,semun) semctl(id, num, cmd, semun)
# else
# ifdef USE_SEMCTL_SEMID_DS
# ifdef EXTRA_F_IN_SEMUN_BUF
#define Semctl(id,num,cmd,semun) semctl(id, num, cmd, semun.buff)
# else
#define Semctl(id,num,cmd,semun) semctl(id, num, cmd, semun.buf)
# endif
# endif
# endif
#endif
#if defined(PERL_IMPLICIT_CONTEXT)
# ifdef PERL_GLOBAL_STRUCT_PRIVATE
#define START_MY_CXT 
#define MY_CXT_INDEX Perl_my_cxt_index(aTHX_ MY_CXT_KEY)
#define MY_CXT_INIT_ARG MY_CXT_KEY
# else
#define START_MY_CXT static int my_cxt_index = -1;
#define MY_CXT_INDEX my_cxt_index
#define MY_CXT_INIT_ARG &my_cxt_index
# endif
#define MY_CXT_INIT my_cxt_t *my_cxtp = (my_cxt_t*)Perl_my_cxt_init(aTHX_ MY_CXT_INIT_ARG, sizeof(my_cxt_t)); PERL_UNUSED_VAR(my_cxtp)
#define MY_CXT_INIT_INTERP(my_perl) my_cxt_t *my_cxtp = (my_cxt_t*)Perl_my_cxt_init(my_perl, MY_CXT_INIT_ARG, sizeof(my_cxt_t)); PERL_UNUSED_VAR(my_cxtp)
#define dMY_CXT my_cxt_t *my_cxtp = (my_cxt_t *)PL_my_cxt_list[MY_CXT_INDEX]
#define dMY_CXT_INTERP(my_perl) my_cxt_t *my_cxtp = (my_cxt_t *)(my_perl)->Imy_cxt_list[MY_CXT_INDEX]
#define MY_CXT_CLONE my_cxt_t *my_cxtp = (my_cxt_t*)SvPVX(newSV(sizeof(my_cxt_t)-1)); void * old_my_cxtp = PL_my_cxt_list[MY_CXT_INDEX]; PL_my_cxt_list[MY_CXT_INDEX] = my_cxtp; Copy(old_my_cxtp, my_cxtp, 1, my_cxt_t);
#define MY_CXT (*my_cxtp)
#define pMY_CXT my_cxt_t *my_cxtp
#define pMY_CXT_ pMY_CXT,
#define _pMY_CXT ,pMY_CXT
#define aMY_CXT my_cxtp
#define aMY_CXT_ aMY_CXT,
#define _aMY_CXT ,aMY_CXT
#else
#define START_MY_CXT static my_cxt_t my_cxt;
#define dMY_CXT_SV dNOOP
#define dMY_CXT dNOOP
#define dMY_CXT_INTERP(my_perl) dNOOP
#define MY_CXT_INIT NOOP
#define MY_CXT_CLONE NOOP
#define MY_CXT my_cxt
#define pMY_CXT void
#define pMY_CXT_ 
#define _pMY_CXT 
#define aMY_CXT 
#define aMY_CXT_ 
#define _aMY_CXT 
#endif
#ifdef I_FCNTL
# include <fcntl.h>
#endif
#ifdef __Lynx__
# include <fcntl.h>
#endif
#ifdef __amigaos4__
#undef FD_CLOEXEC
#endif
#ifdef I_SYS_FILE
# include <sys/file.h>
#endif
#if defined(HAS_FLOCK) && !defined(HAS_FLOCK_PROTO)
#endif
#ifndef O_RDONLY
#define O_RDONLY 0000
#define O_WRONLY 0001
#define O_RDWR 0002
#define O_CREAT 0100
#endif
#ifndef O_BINARY
#define O_BINARY 0
#endif
#ifndef O_TEXT
#define O_TEXT 0
#endif
#if O_TEXT != O_BINARY
# if defined(__HAIKU__) || defined(__VOS__) || defined(__CYGWIN__)
#undef PERLIO_USING_CRLF
# else
#define PERLIO_USING_CRLF 1
# endif
#endif
#ifdef I_LIBUTIL
# include <libutil.h>
#endif
#ifndef EXEC_ARGV_CAST
#define EXEC_ARGV_CAST(x) (char **)x
#endif
#define IS_NUMBER_IN_UV 0x01
#define IS_NUMBER_GREATER_THAN_UV_MAX 0x02
#define IS_NUMBER_NOT_INT 0x04
#define IS_NUMBER_NEG 0x08
#define IS_NUMBER_INFINITY 0x10
#define IS_NUMBER_NAN 0x20
#define IS_NUMBER_TRAILING 0x40
#define GROK_NUMERIC_RADIX(sp,send) grok_numeric_radix(sp, send)
#define PERL_SCAN_ALLOW_UNDERSCORES 0x01
#define PERL_SCAN_DISALLOW_PREFIX 0x02
#define PERL_SCAN_SILENT_ILLDIGIT 0x04
#define PERL_SCAN_SILENT_NON_PORTABLE 0x08
#define PERL_SCAN_TRAILING 0x10
#define PERL_SCAN_GREATER_THAN_UV_MAX 0x02
#ifdef PERL_GPROF_CONTROL
#define PERL_GPROF_MONCONTROL(x) moncontrol(x)
#else
#define PERL_GPROF_MONCONTROL(x) 
#endif
#ifdef UNDER_CE
#include "wince.h"
#endif
#define NEXT_LINE_CHAR NEXT_LINE_NATIVE
#ifndef PIPESOCK_MODE
#define PIPESOCK_MODE 
#endif
#ifndef SOCKET_OPEN_MODE
#define SOCKET_OPEN_MODE PIPESOCK_MODE
#endif
#ifndef PIPE_OPEN_MODE
#define PIPE_OPEN_MODE PIPESOCK_MODE
#endif
#define PERL_MAGIC_UTF8_CACHESIZE 2
#define PERL_UNICODE_STDIN_FLAG 0x0001
#define PERL_UNICODE_STDOUT_FLAG 0x0002
#define PERL_UNICODE_STDERR_FLAG 0x0004
#define PERL_UNICODE_IN_FLAG 0x0008
#define PERL_UNICODE_OUT_FLAG 0x0010
#define PERL_UNICODE_ARGV_FLAG 0x0020
#define PERL_UNICODE_LOCALE_FLAG 0x0040
#define PERL_UNICODE_WIDESYSCALLS_FLAG 0x0080
#define PERL_UNICODE_UTF8CACHEASSERT_FLAG 0x0100
#define PERL_UNICODE_STD_FLAG (PERL_UNICODE_STDIN_FLAG | PERL_UNICODE_STDOUT_FLAG | PERL_UNICODE_STDERR_FLAG)
#define PERL_UNICODE_INOUT_FLAG (PERL_UNICODE_IN_FLAG | PERL_UNICODE_OUT_FLAG)
#define PERL_UNICODE_DEFAULT_FLAGS (PERL_UNICODE_STD_FLAG | PERL_UNICODE_INOUT_FLAG | PERL_UNICODE_LOCALE_FLAG)
#define PERL_UNICODE_ALL_FLAGS 0x01ff
#define PERL_UNICODE_STDIN 'I'
#define PERL_UNICODE_STDOUT 'O'
#define PERL_UNICODE_STDERR 'E'
#define PERL_UNICODE_STD 'S'
#define PERL_UNICODE_IN 'i'
#define PERL_UNICODE_OUT 'o'
#define PERL_UNICODE_INOUT 'D'
#define PERL_UNICODE_ARGV 'A'
#define PERL_UNICODE_LOCALE 'L'
#define PERL_UNICODE_WIDESYSCALLS 'W'
#define PERL_UNICODE_UTF8CACHEASSERT 'a'
#define PERL_SIGNALS_UNSAFE_FLAG 0x0001
#define PERL_ABS(x) ((x) < 0 ? -(x) : (x))
#if defined(__DECC) && defined(__osf__)
#pragma message disable (mainparm)
#endif
#define do_open(g,n,l,a,rm,rp,sf) do_openn(g, n, l, a, rm, rp, sf, (SV **) NULL, 0)
#ifdef PERL_DEFAULT_DO_EXEC3_IMPLEMENTATION
#define do_exec(cmd) do_exec3(cmd,0,0)
#endif
#ifdef OS2
#define do_aexec Perl_do_aexec
#else
#define do_aexec(really,mark,sp) do_aexec5(really, mark, sp, 0, 0)
#endif
#define IS_SAFE_SYSCALL(p,len,what,op_name) (S_is_safe_syscall(aTHX_ (p), (len), (what), (op_name)))
#define IS_SAFE_PATHNAME(p,len,op_name) IS_SAFE_SYSCALL((p), (len), "pathname", (op_name))
#if defined(OEMVS) || defined(__amigaos4__)
#define NO_ENV_ARRAY_IN_MAIN 
#endif
#define PERL_PV_ESCAPE_QUOTE 0x000001
#define PERL_PV_PRETTY_QUOTE PERL_PV_ESCAPE_QUOTE
#define PERL_PV_PRETTY_ELLIPSES 0x000002
#define PERL_PV_PRETTY_LTGT 0x000004
#define PERL_PV_PRETTY_EXACTSIZE 0x000008
#define PERL_PV_ESCAPE_UNI 0x000100
#define PERL_PV_ESCAPE_UNI_DETECT 0x000200
#define PERL_PV_ESCAPE_NONASCII 0x000400
#define PERL_PV_ESCAPE_FIRSTCHAR 0x000800
#define PERL_PV_ESCAPE_ALL 0x001000
#define PERL_PV_ESCAPE_NOBACKSLASH 0x002000
#define PERL_PV_ESCAPE_NOCLEAR 0x004000
#define PERL_PV_PRETTY_NOCLEAR PERL_PV_ESCAPE_NOCLEAR
#define PERL_PV_ESCAPE_RE 0x008000
#define PERL_PV_ESCAPE_DWIM 0x010000
#define PERL_PV_PRETTY_DUMP PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_QUOTE
#define PERL_PV_PRETTY_REGPROP PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_LTGT|PERL_PV_ESCAPE_RE|PERL_PV_ESCAPE_NONASCII
#if DOUBLEKIND == DOUBLE_IS_VAX_F_FLOAT || DOUBLEKIND == DOUBLE_IS_VAX_D_FLOAT || DOUBLEKIND == DOUBLE_IS_VAX_G_FLOAT
#define DOUBLE_IS_VAX_FLOAT 
#else
#define DOUBLE_IS_IEEE_FORMAT 
#endif
#if DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_LITTLE_ENDIAN || DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_LITTLE_ENDIAN || DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN
#define DOUBLE_LITTLE_ENDIAN 
#endif
#if DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_BIG_ENDIAN || DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_BIG_ENDIAN || DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN
#define DOUBLE_BIG_ENDIAN 
#endif
#if DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_LE_BE || DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_BE_LE
#define DOUBLE_MIX_ENDIAN 
#endif
#ifdef DOUBLE_IS_VAX_FLOAT
#define DOUBLE_VAX_ENDIAN 
#endif
#ifdef DOUBLE_IS_IEEE_FORMAT
#define NV_IMPLICIT_BIT 
#endif
#if defined(LONG_DOUBLEKIND) && LONG_DOUBLEKIND != LONG_DOUBLE_IS_DOUBLE
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE
#define LONGDOUBLE_LITTLE_ENDIAN 
# endif
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE
#define LONGDOUBLE_BIG_ENDIAN 
# endif
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE
#define LONGDOUBLE_MIX_ENDIAN 
# endif
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN
#define LONGDOUBLE_X86_80_BIT 
# ifdef USE_LONG_DOUBLE
#undef NV_IMPLICIT_BIT
#define NV_X86_80_BIT 
# endif
# endif
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE
#define LONGDOUBLE_DOUBLEDOUBLE 
# endif
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_VAX_H_FLOAT
#define LONGDOUBLE_VAX_ENDIAN 
# endif
#endif
#ifdef USE_QUADMATH
# if defined(DOUBLE_LITTLE_ENDIAN)
#define NV_LITTLE_ENDIAN 
# elif defined(DOUBLE_BIG_ENDIAN)
#define NV_BIG_ENDIAN 
# elif defined(DOUBLE_MIX_ENDIAN)
#define NV_MIX_ENDIAN 
# endif
#elif NVSIZE == DOUBLESIZE
# ifdef DOUBLE_LITTLE_ENDIAN
#define NV_LITTLE_ENDIAN 
# endif
# ifdef DOUBLE_BIG_ENDIAN
#define NV_BIG_ENDIAN 
# endif
# ifdef DOUBLE_MIX_ENDIAN
#define NV_MIX_ENDIAN 
# endif
# ifdef DOUBLE_VAX_ENDIAN
#define NV_VAX_ENDIAN 
# endif
#elif NVSIZE == LONG_DOUBLESIZE
# ifdef LONGDOUBLE_LITTLE_ENDIAN
#define NV_LITTLE_ENDIAN 
# endif
# ifdef LONGDOUBLE_BIG_ENDIAN
#define NV_BIG_ENDIAN 
# endif
# ifdef LONGDOUBLE_MIX_ENDIAN
#define NV_MIX_ENDIAN 
# endif
# ifdef LONGDOUBLE_VAX_ENDIAN
#define NV_VAX_ENDIAN 
# endif
#endif
#ifdef DOUBLE_IS_IEEE_FORMAT
#define DOUBLE_HAS_INF 
#define DOUBLE_HAS_NAN 
#endif
#ifdef DOUBLE_HAS_NAN
#ifdef DOINIT
# ifdef USE_QUADMATH
# elif NVSIZE == LONG_DOUBLESIZE && defined(LONGDBLINFBYTES)
# elif NVSIZE == DOUBLESIZE && defined(DOUBLEINFBYTES)
# else
# if NVSIZE == LONG_DOUBLESIZE && defined(USE_LONG_DOUBLE)
# if defined(LDBL_INFINITY)
# elif defined(LDBL_INF)
# elif defined(INFINITY)
# elif defined(INF)
# else
# endif
# else
# if defined(DBL_INFINITY)
# elif defined(DBL_INF)
# elif defined(INFINITY)
# elif defined(INF)
# else
# endif
# endif
# endif
# ifdef USE_QUADMATH
# elif NVSIZE == LONG_DOUBLESIZE && defined(LONGDBLNANBYTES)
# elif NVSIZE == DOUBLESIZE && defined(DOUBLENANBYTES)
# else
# if NVSIZE == LONG_DOUBLESIZE && defined(USE_LONG_DOUBLE)
# if defined(LDBL_NAN)
# elif defined(LDBL_QNAN)
# elif defined(NAN)
# else
# endif
# else
# if defined(DBL_NAN)
# elif defined(DBL_QNAN)
# elif defined(NAN)
# else
# endif
# endif
# endif
#else
#endif
#ifndef NV_INF
#define NV_INF PL_inf.nv
#endif
#ifndef NV_NAN
#define NV_NAN PL_nan.nv
#endif
#define NV_NAN_BITS (NVMANTBITS - 1)
#if defined(USE_LONG_DOUBLE) && NVSIZE > DOUBLESIZE
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 13
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 2
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 7
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 2
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE
#define NV_NAN_QS_BYTE_OFFSET 13
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE
#define NV_NAN_QS_BYTE_OFFSET 1
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE
#define NV_NAN_QS_BYTE_OFFSET 9
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE
#define NV_NAN_QS_BYTE_OFFSET 6
# else
# error "Unexpected long double format"
# endif
#else
# ifdef USE_QUADMATH
# ifdef NV_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 13
# elif defined(NV_BIG_ENDIAN)
#define NV_NAN_QS_BYTE_OFFSET 2
# else
# error "Unexpected quadmath format"
# endif
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 2
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_BIG_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 1
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 6
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_BIG_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 1
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 13
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN
#define NV_NAN_QS_BYTE_OFFSET 2
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_LE_BE
#define NV_NAN_QS_BYTE_OFFSET 2
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_BE_LE
#define NV_NAN_QS_BYTE_OFFSET 5
# else
# error "Unexpected double format"
# endif
#endif
#define NV_NAN_QS_BYTE(nvp) (((U8*)(nvp))[NV_NAN_QS_BYTE_OFFSET])
#if defined(USE_LONG_DOUBLE) && (LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN || LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN)
#define NV_NAN_QS_BIT_SHIFT 6
#elif defined(USE_LONG_DOUBLE) && (LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE || LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE)
#define NV_NAN_QS_BIT_SHIFT 3
#else
#define NV_NAN_QS_BIT_SHIFT ((NV_NAN_BITS) % 8)
#endif
#define NV_NAN_QS_BIT (1 << (NV_NAN_QS_BIT_SHIFT))
#define NV_NAN_QS_BIT_OFFSET (8 * (NV_NAN_QS_BYTE_OFFSET) + (NV_NAN_QS_BIT_SHIFT))
#define NV_NAN_QS_QUIET ((NV_NAN_QS_BYTE(PL_nan.u8) & NV_NAN_QS_BIT) == NV_NAN_QS_BIT)
#define NV_NAN_QS_SIGNALING (!(NV_NAN_QS_QUIET))
#define NV_NAN_QS_TEST(nvp) (NV_NAN_QS_BYTE(nvp) & NV_NAN_QS_BIT)
#define NV_NAN_IS_QUIET(nvp) (NV_NAN_QS_TEST(nvp) == (NV_NAN_QS_QUIET ? NV_NAN_QS_BIT : 0))
#define NV_NAN_IS_SIGNALING(nvp) (NV_NAN_QS_TEST(nvp) == (NV_NAN_QS_QUIET ? 0 : NV_NAN_QS_BIT))
#define NV_NAN_SET_QUIET(nvp) (NV_NAN_QS_QUIET ? (NV_NAN_QS_BYTE(nvp) |= NV_NAN_QS_BIT) : (NV_NAN_QS_BYTE(nvp) &= ~NV_NAN_QS_BIT))
#define NV_NAN_SET_SIGNALING(nvp) (NV_NAN_QS_QUIET ? (NV_NAN_QS_BYTE(nvp) &= ~NV_NAN_QS_BIT) : (NV_NAN_QS_BYTE(nvp) |= NV_NAN_QS_BIT))
#define NV_NAN_QS_XOR(nvp) (NV_NAN_QS_BYTE(nvp) ^= NV_NAN_QS_BIT)
#define NV_NAN_PAYLOAD_MASK_SKIP_EIGHT 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
#define NV_NAN_PAYLOAD_PERM_SKIP_EIGHT 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM_0_TO_7 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7
#define NV_NAN_PAYLOAD_PERM_7_TO_0 0x7, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0
#define NV_NAN_PAYLOAD_MASK_IEEE_754_128_LE 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM_IEEE_754_128_LE NV_NAN_PAYLOAD_PERM_0_TO_7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xFF, 0xFF
#define NV_NAN_PAYLOAD_MASK_IEEE_754_128_BE 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM_IEEE_754_128_BE 0xFF, 0xFF, 0xd, 0xc, 0xb, 0xa, 0x9, 0x8, NV_NAN_PAYLOAD_PERM_7_TO_0
#define NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00
#define NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0xFF
#define NV_NAN_PAYLOAD_MASK_IEEE_754_64_BE 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM_IEEE_754_64_BE 0xFF, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0
#if defined(USE_LONG_DOUBLE) && NVSIZE > DOUBLESIZE
# if LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_LE
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_BE
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN
# if LONG_DOUBLESIZE == 10
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_0_TO_7, 0xFF, 0xFF
# elif LONG_DOUBLESIZE == 12
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_0_TO_7, 0xFF, 0xFF, 0xFF, 0xFF
# elif LONG_DOUBLESIZE == 16
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_0_TO_7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
# else
# error "Unexpected x86 80-bit little-endian long double format"
# endif
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN
# if LONG_DOUBLESIZE == 10
#define NV_NAN_PAYLOAD_MASK 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_7_TO_0, 0xFF, 0xFF
# elif LONG_DOUBLESIZE == 12
#define NV_NAN_PAYLOAD_MASK 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_7_TO_0, 0xFF, 0xFF, 0xFF, 0xFF
# elif LONG_DOUBLESIZE == 16
#define NV_NAN_PAYLOAD_MASK 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_7_TO_0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
# else
# error "Unexpected x86 80-bit big-endian long double format"
# endif
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_SKIP_EIGHT, NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_SKIP_EIGHT, NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_64_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_64_BE
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE
# elif LONG_DOUBLEKIND == LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_SKIP_EIGHT, NV_NAN_PAYLOAD_MASK_IEEE_754_64_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_SKIP_EIGHT, NV_NAN_PAYLOAD_PERM_IEEE_754_64_BE
# else
# error "Unexpected long double format"
# endif
#else
# ifdef USE_QUADMATH
# ifdef NV_LITTLE_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_LE
# elif defined(NV_BIG_ENDIAN)
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_BE
# else
# error "Unexpected quadmath format"
# endif
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_LITTLE_ENDIAN
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0x07, 0x00
#define NV_NAN_PAYLOAD_PERM 0x0, 0x1, 0x2, 0xFF
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_32_BIT_BIG_ENDIAN
#define NV_NAN_PAYLOAD_MASK 0x00, 0x07, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM 0xFF, 0x2, 0x1, 0x0
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_LITTLE_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_BIG_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_64_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_64_BE
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_LE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_LE
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_128_BE
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_128_BE
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_LE_BE
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0x07, 0x00, 0xff, 0xff, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM 0x4, 0x5, 0x6, 0xFF, 0x0, 0x1, 0x2, 0x3
# elif DOUBLEKIND == DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_BE_LE
#define NV_NAN_PAYLOAD_MASK 0xff, 0xff, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff
#define NV_NAN_PAYLOAD_PERM 0x3, 0x2, 0x1, 0x0, 0xFF, 0x6, 0x5, 0x4
# else
# error "Unexpected double format"
# endif
#endif
#endif
#endif
