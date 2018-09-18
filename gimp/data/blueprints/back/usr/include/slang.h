// GGHASH:VfzUKCLQHHZyXq0ytzr4D7AyJlPESF66HTkQ09JRQx6w000164b9
#ifndef DAVIS_SLANG_H_
#define DAVIS_SLANG_H_ 
#define SLANG_VERSION 20301
#define SLANG_VERSION_STRING "2.3.1a"
#if defined(__WATCOMC__) && defined(DOS)
# ifndef __MSDOS__
#define __MSDOS__ 
# endif
# ifndef DOS386
#define DOS386 
# endif
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
#endif
#if defined(unix) || defined(__unix)
# ifndef __unix__
#define __unix__ 1
# endif
#endif
#if defined(__APPLE__)
# ifndef __unix__
#define __unix__ 1
# endif
#endif
#if !defined(__GO32__)
# ifdef __unix__
#define REAL_UNIX_SYSTEM 
# endif
#endif
#ifdef __GO32__
# ifndef __DJGPP__
#define __DJGPP__ 1
# endif
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
#endif
#ifdef __BORLANDC__
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
#endif
#ifdef __MSDOS__
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
#endif
#if defined(OS2) || defined(__os2__)
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
# ifndef __os2__
#define __os2__ 
# endif
#endif
#if defined(__NT__) || defined(__MINGW32__)
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
#endif
#if defined(WIN32) || defined(__WIN32__)
# ifndef IBMPC_SYSTEM
#define IBMPC_SYSTEM 
# endif
# ifndef __WIN32__
#define __WIN32__ 
# endif
#endif
#if defined(IBMPC_SYSTEM) || defined(VMS)
# ifdef REAL_UNIX_SYSTEM
#undef REAL_UNIX_SYSTEM
# endif
#endif
#ifdef __cplusplus
#endif
#if 0
#endif
#include <stdio.h>
#include <stdarg.h>
#if defined(__STDC__) || defined(__BORLANDC__) || defined(__cplusplus)
# include <stddef.h>
#endif
#ifdef SIZEOF_SHORT
#define SLANG_SIZEOF_SHORT SIZEOF_SHORT
#endif
#ifdef SIZEOF_INT
#define SLANG_SIZEOF_INT SIZEOF_INT
#endif
#ifdef SIZEOF_FLOAT
#define SLANG_SIZEOF_FLOAT SIZEOF_FLOAT
#endif
#ifdef SIZEOF_DOUBLE
#define SLANG_SIZEOF_DOUBLE SIZEOF_DOUBLE
#endif
#if !defined(SIZEOF_SHORT) || !defined(SIZEOF_INT) || !defined(SIZEOF_LONG) || !defined(SIZEOF_FLOAT) || !defined(SIZEOF_DOUBLE)
# include <limits.h>
# if !defined(SIZEOF_SHORT) && defined(SHRT_MAX)
# if SHRT_MAX == 32767
#define SLANG_SIZEOF_SHORT 2
# else
# if SHRT_MAX == 2147483647L
#define SLANG_SIZEOF_SHORT 4
# endif
# endif
# endif
# if !defined(SIZEOF_INT) && defined(INT_MAX)
# if INT_MAX == 32767
#define SLANG_SIZEOF_INT 2
# else
# if INT_MAX == 2147483647L
#define SLANG_SIZEOF_INT 4
# endif
# endif
# endif
# if !defined(SIZEOF_LONG) && defined(LONG_MAX)
# if LONG_MAX == 32767
#define SLANG_SIZEOF_LONG 2
# else
# if LONG_MAX == 2147483647L
#define SLANG_SIZEOF_LONG 4
# else
#define SLANG_SIZEOF_LONG 8
# endif
# endif
# endif
#endif
#ifndef SLANG_SIZEOF_SHORT
#define SLANG_SIZEOF_SHORT 2
#endif
#ifndef SLANG_SIZEOF_INT
#define SLANG_SIZEOF_INT 4
#endif
#ifndef SLANG_SIZEOF_LONG
#define SLANG_SIZEOF_LONG 4
#endif
#ifndef SLANG_SIZEOF_FLOAT
#define SLANG_SIZEOF_FLOAT 4
#endif
#ifndef SLANG_SIZEOF_DOUBLE
#define SLANG_SIZEOF_DOUBLE 8
#endif
#if defined(__SC__) && !defined(DOS386)
# include <dos.h>
#endif
#if defined(__BORLANDC__)
# include <alloc.h>
#endif
#ifdef __GNUC__
#define SLATTRIBUTE_(x) __attribute__ (x)
#else
#define SLATTRIBUTE_(x) 
#endif
#define SLATTRIBUTE_PRINTF(a,b) SLATTRIBUTE_((format(printf,a,b)))
#if defined (__cplusplus) || defined(__STDC__) || defined(IBMPC_SYSTEM)
#define SLCONST const
#else
#define SLCONST 
#endif
#ifdef ENABLE_SLFUTURE_CONST
#define SLFUTURE_CONST SLCONST
#else
#define SLFUTURE_CONST 
#endif
#ifdef ENABLE_SLFUTURE_VOID
#define SLFUTURE_VOID void
#else
#define SLFUTURE_VOID char
#endif
#if defined(__MSDOS__) && defined(__BORLANDC__)
#define SLFREE(buf) farfree((void far *)(buf))
#define SLMALLOC(x) farmalloc((unsigned long) (x))
#define SLREALLOC(buf,n) farrealloc((void far *) (buf), (unsigned long) (n))
#define SLCALLOC(n,m) farcalloc((unsigned long) (n), (unsigned long) (m))
#else
# if defined(VMS) && !defined(__DECC)
#define SLFREE VAXC$FREE_OPT
#define SLMALLOC VAXC$MALLOC_OPT
#define SLREALLOC VAXC$REALLOC_OPT
#define SLCALLOC VAXC$CALLOC_OPT
# else
#define SLFREE(x) free((char *)(x))
#define SLMALLOC malloc
#define SLREALLOC realloc
#define SLCALLOC calloc
# endif
#endif
#if (defined(__WIN32__) || defined(__CYGWIN32__)) && defined(SLANG_DLL) && SLANG_DLL
#define SL_EXPORT __declspec(dllexport)
#define SL_IMPORT __declspec(dllimport)
#else
#define SL_EXPORT 
#define SL_IMPORT 
#endif
#ifdef SLANG_SOURCE_
#define SL_EXTERN extern SL_EXPORT
#else
#define SL_EXTERN extern SL_IMPORT
#endif
#define SLANG_STRLEN_TYPE SLANG_UINT_TYPE
#define SLANG_ARRAY_INDEX_TYPE SLANG_INT_TYPE
#if SLANG_SIZEOF_INT == 4
#define SLANG_WCHAR_TYPE SLANG_UINT_TYPE
#define SLang_push_wchar SLang_push_uint
#define SLang_pop_wchar SLang_pop_uint
#else
#define SLANG_WCHAR_TYPE SLANG_ULONG_TYPE
#define SLang_push_wchar SLang_push_ulong
#define SLang_pop_wchar SLang_pop_ulong
#endif
#define SLUTF8_MAX_MBLEN 6
#define SLWCWIDTH_SINGLE_WIDTH 0x0001
#define SLWCWIDTH_CJK_LEGACY 0x0002
#define SLANG_SLTYPE_INT_TYPE SLANG_UINT_TYPE
#define SLANG_LVARIABLE 0x01
#define SLANG_GVARIABLE 0x02
#define SLANG_IVARIABLE 0x03
#define SLANG_RVARIABLE 0x04
#define SLANG_INTRINSIC 0x05
#define SLANG_FUNCTION 0x06
#define SLANG_MATH_UNARY 0x07
#define SLANG_APP_UNARY 0x08
#define SLANG_ARITH_UNARY 0x09
#define SLANG_ARITH_BINARY 0x0A
#define SLANG_ICONSTANT 0x0B
#define SLANG_DCONSTANT 0x0C
#define SLANG_FCONSTANT 0x0D
#define SLANG_LLCONSTANT 0x0E
#define SLANG_PVARIABLE 0x0F
#define SLANG_PFUNCTION 0x10
#define SLANG_HCONSTANT 0x11
#define SLANG_LCONSTANT 0x12
#define SLANG_MAX_INTRIN_ARGS 7
#ifdef HAVE_LONG_LONG
#endif
#ifdef HAVE_LONG_LONG
#endif
#ifdef HAVE_LONG_LONG
#endif
#ifdef HAVE_LONG_LONG
#endif
#define SLANG_LOAD_FILE_VERBOSE 0x1
#define SLANG_LOAD_MODULE_VERBOSE 0x2
#if defined(ultrix) && !defined(__GNUC__)
# ifndef NO_PROTOTYPES
#define NO_PROTOTYPES 
# endif
#endif
#ifndef NO_PROTOTYPES
#define _PROTO(x) x
#else
#define _PROTO(x) ()
#endif
#ifdef HAVE_LONG_LONG
#endif
#define SLANG_CLASS_TYPE_MMT 0
#define SLANG_CLASS_TYPE_SCALAR 1
#define SLANG_CLASS_TYPE_VECTOR 2
#define SLANG_CLASS_TYPE_PTR 3
#define SLMATH_SIN 1
#define SLMATH_COS 2
#define SLMATH_TAN 3
#define SLMATH_ATAN 4
#define SLMATH_ASIN 5
#define SLMATH_ACOS 6
#define SLMATH_EXP 7
#define SLMATH_LOG 8
#define SLMATH_SQRT 9
#define SLMATH_LOG10 10
#define SLMATH_REAL 11
#define SLMATH_IMAG 12
#define SLMATH_SINH 13
#define SLMATH_COSH 14
#define SLMATH_TANH 15
#define SLMATH_ATANH 16
#define SLMATH_ASINH 17
#define SLMATH_ACOSH 18
#define SLMATH_TODOUBLE 19
#define SLMATH_CONJ 20
#define SLMATH_ISINF 21
#define SLMATH_ISNAN 22
#define SLMATH_FLOOR 23
#define SLMATH_CEIL 24
#define SLMATH_ROUND 25
#define SLMATH_EXPM1 26
#define SLMATH_LOG1P 27
#ifdef SLANG_SOURCE_
#else
#endif
#define SLARRAY_MAX_DIMS 7
#define SLARR_DATA_VALUE_IS_READ_ONLY 0x0001
#define SLARR_DATA_VALUE_IS_POINTER 0x0002
#define SLARR_DATA_VALUE_IS_RANGE 0x0004
#define SLARR_DATA_VALUE_IS_INTRINSIC 0x0008
#define SLARR_DERIVED_FROM_SCALAR 0x0100
#define USER_BREAK SL_UserBreak_Error
#define INTRINSIC_ERROR SL_RunTime_Error
#define SL_OBJ_NOPEN SL_Open_Error
#define SL_UNKNOWN_ERROR SL_Unknown_Error
#define SL_APPLICATION_ERROR SL_Application_Error
#define SL_INTERNAL_ERROR SL_Internal_Error
#define SL_INTRINSIC_ERROR SL_RunTime_Error
#define SL_NOT_IMPLEMENTED SL_NotImplemented_Error
#define SL_BUILTIN_LIMIT_EXCEEDED SL_LimitExceeded_Error
#define SL_MALLOC_ERROR SL_Malloc_Error
#define SL_USER_BREAK SL_UserBreak_Error
#define SL_IO_WRITE_ERROR SL_Write_Error
#define SL_IO_READ_ERROR SL_Read_Error
#define SL_IO_OPEN_ERROR SL_Open_Error
#define SL_SYNTAX_ERROR SL_Syntax_Error
#define SL_STACK_OVERFLOW SL_StackOverflow_Error
#define SL_STACK_UNDERFLOW SL_StackUnderflow_Error
#define SL_TYPE_MISMATCH SL_TypeMismatch_Error
#define SL_READONLY_ERROR SL_ReadOnly_Error
#define SL_VARIABLE_UNINITIALIZED SL_VariableUninitialized_Error
#define SL_DUPLICATE_DEFINITION SL_DuplicateDefinition_Error
#define SL_INVALID_PARM SL_InvalidParm_Error
#define SL_UNDEFINED_NAME SL_UndefinedName_Error
#define SL_NUM_ARGS_ERROR SL_NumArgs_Error
#define SL_INDEX_ERROR SL_Index_Error
#define SL_DIVIDE_ERROR SL_DivideByZero_Error
#define SL_MATH_ERROR SL_Math_Error
#define SL_ARITH_OVERFLOW_ERROR SL_ArithOverflow_Error
#define SL_ARITH_UNDERFLOW_ERROR SL_ArithUnderflow_Error
#define SL_USAGE_ERROR SL_Usage_Error
#define SL_INVALID_DATA_ERROR SL_Data_Error
#define SL_UNICODE_ERROR SL_Unicode_Error
#define SL_INVALID_UTF8 SL_InvalidUTF8_Error
#define SL_TB_NONE 0x0
#define SL_TB_FULL 0x1
#define SL_TB_OMIT_LOCALS 0x2
#define SL_TB_PARTIAL 0x4
#define SLang_push_integer SLang_push_int
#define SLang_push_uinteger SLang_push_uint
#define SLang_pop_integer SLang_pop_int
#define SLang_pop_uinteger SLang_pop_uint
#ifdef SLANG_SOURCE_
#else
#endif
#ifdef HAVE_LONG_LONG
#endif
#ifdef REAL_UNIX_SYSTEM
#else
# if defined(__WIN32__)
# ifdef _WINDOWS_
# endif
# endif
#endif
#ifdef REAL_UNIX_SYSTEM
#endif
#define SLANG_GETKEY_ERROR 0xFFFF
#ifdef IBMPC_SYSTEM
#endif
#ifdef VMS
#endif
#define SLANG_MAX_KEYMAP_KEY_SEQ 14
#define SLKEY_F_INTERPRET 0x01
#define SLKEY_F_INTRINSIC 0x02
#define SLKEY_F_KEYSYM 0x03
#define SLKEY_F_SLANG 0x04
#define SL_RLINE_NO_ECHO 0x0001
#define SL_RLINE_USE_ANSI 0x0002
#define SL_RLINE_BLINK_MATCH 0x0004
#define SL_RLINE_UTF8_MODE 0x0008
#define SL_RLINE_USE_MULTILINE 0x0010
#define SLTT_BOLD_MASK 0x01000000UL
#define SLTT_BLINK_MASK 0x02000000UL
#define SLTT_ULINE_MASK 0x04000000UL
#define SLTT_REV_MASK 0x08000000UL
#define SLTT_ALTC_MASK 0x10000000UL
#define SLTT_ITALIC_MASK 0x20000000UL
#if defined(REAL_UNIX_SYSTEM)
#endif
#ifndef IBMPC_SYSTEM
#endif
#ifndef __GO32__
#if defined(VMS) || defined(REAL_UNIX_SYSTEM)
# ifndef VMS
# endif
#endif
#endif
#if defined(IBMPC_SYSTEM)
#endif
#define SLSMG_MAX_COLORS 0x7FFE
#define SLSMG_COLOR_MASK 0x7FFF
#define SLSMG_ACS_MASK 0x8000
#define SLSMG_MAX_CHARS_PER_CELL 5
#define SLSMG_EXTRACT_COLOR(x) ((x).color)
#define SLSMG_EXTRACT_CHAR(x) ((x).wchars[0])
#if defined(VMS) || defined(REAL_UNIX_SYSTEM)
# ifdef REAL_UNIX_SYSTEM
# endif
#endif
#define SLPREP_BLANK_LINES_OK 0x1
#define SLPREP_COMMENT_LINES_OK 0x2
#ifndef IBMPC_SYSTEM
#endif
#define SLSMG_NEWLINE_IGNORED 0
#define SLSMG_NEWLINE_MOVES 1
#define SLSMG_NEWLINE_SCROLLS 2
#define SLSMG_NEWLINE_PRINTABLE 3
#ifdef IBMPC_SYSTEM
#define SLSMG_HLINE_CHAR 0xC4
#define SLSMG_VLINE_CHAR 0xB3
#define SLSMG_ULCORN_CHAR 0xDA
#define SLSMG_URCORN_CHAR 0xBF
#define SLSMG_LLCORN_CHAR 0xC0
#define SLSMG_LRCORN_CHAR 0xD9
#define SLSMG_RTEE_CHAR 0xB4
#define SLSMG_LTEE_CHAR 0xC3
#define SLSMG_UTEE_CHAR 0xC2
#define SLSMG_DTEE_CHAR 0xC1
#define SLSMG_PLUS_CHAR 0xC5
#define SLSMG_CKBRD_CHAR 0xB0
#define SLSMG_DIAMOND_CHAR 0x04
#define SLSMG_DEGREE_CHAR 0xF8
#define SLSMG_PLMINUS_CHAR 0xF1
#define SLSMG_BULLET_CHAR 0xF9
#define SLSMG_LARROW_CHAR 0x1B
#define SLSMG_RARROW_CHAR 0x1A
#define SLSMG_DARROW_CHAR 0x19
#define SLSMG_UARROW_CHAR 0x18
#define SLSMG_BOARD_CHAR 0xB2
#define SLSMG_BLOCK_CHAR 0xDB
#else
# if defined(AMIGA)
#define SLSMG_HLINE_CHAR ((unsigned char)'-')
#define SLSMG_VLINE_CHAR ((unsigned char)'|')
#define SLSMG_ULCORN_CHAR ((unsigned char)'+')
#define SLSMG_URCORN_CHAR ((unsigned char)'+')
#define SLSMG_LLCORN_CHAR ((unsigned char)'+')
#define SLSMG_LRCORN_CHAR ((unsigned char)'+')
#define SLSMG_CKBRD_CHAR ((unsigned char)'#')
#define SLSMG_RTEE_CHAR ((unsigned char)'+')
#define SLSMG_LTEE_CHAR ((unsigned char)'+')
#define SLSMG_UTEE_CHAR ((unsigned char)'+')
#define SLSMG_DTEE_CHAR ((unsigned char)'+')
#define SLSMG_PLUS_CHAR ((unsigned char)'+')
#define SLSMG_DIAMOND_CHAR ((unsigned char)'+')
#define SLSMG_DEGREE_CHAR ((unsigned char)'\\')
#define SLSMG_PLMINUS_CHAR ((unsigned char)'#')
#define SLSMG_BULLET_CHAR ((unsigned char)'o')
#define SLSMG_LARROW_CHAR ((unsigned char)'<')
#define SLSMG_RARROW_CHAR ((unsigned char)'>')
#define SLSMG_DARROW_CHAR ((unsigned char)'v')
#define SLSMG_UARROW_CHAR ((unsigned char)'^')
#define SLSMG_BOARD_CHAR ((unsigned char)'#')
#define SLSMG_BLOCK_CHAR ((unsigned char)'#')
# else
#define SLSMG_HLINE_CHAR ((unsigned char)'q')
#define SLSMG_VLINE_CHAR ((unsigned char)'x')
#define SLSMG_ULCORN_CHAR ((unsigned char)'l')
#define SLSMG_URCORN_CHAR ((unsigned char)'k')
#define SLSMG_LLCORN_CHAR ((unsigned char)'m')
#define SLSMG_LRCORN_CHAR ((unsigned char)'j')
#define SLSMG_CKBRD_CHAR ((unsigned char)'a')
#define SLSMG_RTEE_CHAR ((unsigned char)'u')
#define SLSMG_LTEE_CHAR ((unsigned char)'t')
#define SLSMG_UTEE_CHAR ((unsigned char)'w')
#define SLSMG_DTEE_CHAR ((unsigned char)'v')
#define SLSMG_PLUS_CHAR ((unsigned char)'n')
#define SLSMG_DIAMOND_CHAR ((unsigned char)'`')
#define SLSMG_DEGREE_CHAR ((unsigned char)'f')
#define SLSMG_PLMINUS_CHAR ((unsigned char)'g')
#define SLSMG_BULLET_CHAR ((unsigned char)'~')
#define SLSMG_LARROW_CHAR ((unsigned char)',')
#define SLSMG_RARROW_CHAR ((unsigned char)'+')
#define SLSMG_DARROW_CHAR ((unsigned char)'.')
#define SLSMG_UARROW_CHAR ((unsigned char)'-')
#define SLSMG_BOARD_CHAR ((unsigned char)'h')
#define SLSMG_BLOCK_CHAR ((unsigned char)'0')
# endif
#endif
#ifndef IBMPC_SYSTEM
#define SLSMG_COLOR_BLACK 0x000000
#define SLSMG_COLOR_RED 0x000001
#define SLSMG_COLOR_GREEN 0x000002
#define SLSMG_COLOR_BROWN 0x000003
#define SLSMG_COLOR_BLUE 0x000004
#define SLSMG_COLOR_MAGENTA 0x000005
#define SLSMG_COLOR_CYAN 0x000006
#define SLSMG_COLOR_LGRAY 0x000007
#define SLSMG_COLOR_GRAY 0x000008
#define SLSMG_COLOR_BRIGHT_RED 0x000009
#define SLSMG_COLOR_BRIGHT_GREEN 0x00000A
#define SLSMG_COLOR_BRIGHT_BROWN 0x00000B
#define SLSMG_COLOR_BRIGHT_BLUE 0x00000C
#define SLSMG_COLOR_BRIGHT_MAGENTA 0x00000D
#define SLSMG_COLOR_BRIGHT_CYAN 0x00000E
#define SLSMG_COLOR_BRIGHT_WHITE 0x00000F
#endif
#if 0
#endif
#define SL_KEY_ERR 0xFFFF
#define SL_KEY_UP 0x101
#define SL_KEY_DOWN 0x102
#define SL_KEY_LEFT 0x103
#define SL_KEY_RIGHT 0x104
#define SL_KEY_PPAGE 0x105
#define SL_KEY_NPAGE 0x106
#define SL_KEY_HOME 0x107
#define SL_KEY_END 0x108
#define SL_KEY_A1 0x109
#define SL_KEY_A3 0x10A
#define SL_KEY_B2 0x10B
#define SL_KEY_C1 0x10C
#define SL_KEY_C3 0x10D
#define SL_KEY_REDO 0x10E
#define SL_KEY_UNDO 0x10F
#define SL_KEY_BACKSPACE 0x110
#define SL_KEY_ENTER 0x111
#define SL_KEY_IC 0x112
#define SL_KEY_DELETE 0x113
#define SL_KEY_F0 0x200
#define SL_KEY_F(X) (SL_KEY_F0 + X)
#define SL_FE_DIVBYZERO 0x01
#define SL_FE_INVALID 0x02
#define SL_FE_OVERFLOW 0x04
#define SL_FE_UNDERFLOW 0x08
#define SL_FE_INEXACT 0x10
#define SL_FE_ALLEXCEPT 0x1F
#define SLANG_UNDEFINED_TYPE 0x00
#define SLANG_VOID_TYPE 0x01
#define SLANG_NULL_TYPE (0x02)
#define SLANG_ANY_TYPE (0x03)
#define SLANG_DATATYPE_TYPE (0x04)
#define SLANG_REF_TYPE (0x05)
#define SLANG_STRING_TYPE (0x06)
#define SLANG_BSTRING_TYPE (0x07)
#define SLANG_FILE_PTR_TYPE (0x08)
#define SLANG_FILE_FD_TYPE (0x09)
#define SLANG_MD5_TYPE (0x0A)
#define SLANG_INTP_TYPE (0x0F)
#define SLANG_CHAR_TYPE (0x10)
#define SLANG_UCHAR_TYPE (0x11)
#define SLANG_SHORT_TYPE (0x12)
#define SLANG_USHORT_TYPE (0x13)
#define SLANG_INT_TYPE (0x14)
#define SLANG_UINT_TYPE (0x15)
#define SLANG_LONG_TYPE (0x16)
#define SLANG_ULONG_TYPE (0x17)
#define SLANG_LLONG_TYPE (0x18)
#define SLANG_ULLONG_TYPE (0x19)
#define SLANG_FLOAT_TYPE (0x1A)
#define SLANG_DOUBLE_TYPE (0x1B)
#define SLANG_LDOUBLE_TYPE (0x1C)
#define SLANG_COMPLEX_TYPE (0x20)
#define SLANG_ISTRUCT_TYPE (0x2A)
#define SLANG_STRUCT_TYPE (0x2B)
#define SLANG_ASSOC_TYPE (0x2C)
#define SLANG_ARRAY_TYPE (0x2D)
#define SLANG_LIST_TYPE (0x2E)
#define SLANG_MIN_UNUSED_TYPE (0x30)
#ifdef FLOAT_TYPE
#undef FLOAT_TYPE
#endif
#define VOID_TYPE SLANG_VOID_TYPE
#define INT_TYPE SLANG_INT_TYPE
#define INTP_TYPE SLANG_INTP_TYPE
#define FLOAT_TYPE SLANG_DOUBLE_TYPE
#define ARRAY_TYPE SLANG_ARRAY_TYPE
#define CHAR_TYPE SLANG_CHAR_TYPE
#define STRING_TYPE SLANG_STRING_TYPE
#define SLANG_BINARY_OP_MIN 0x01
#define SLANG_PLUS 0x01
#define SLANG_MINUS 0x02
#define SLANG_TIMES 0x03
#define SLANG_DIVIDE 0x04
#define SLANG_EQ 0x05
#define SLANG_NE 0x06
#define SLANG_GT 0x07
#define SLANG_GE 0x08
#define SLANG_LT 0x09
#define SLANG_LE 0x0A
#define SLANG_POW 0x0B
#define SLANG_OR 0x0C
#define SLANG_AND 0x0D
#define SLANG_BAND 0x0E
#define SLANG_BOR 0x0F
#define SLANG_BXOR 0x10
#define SLANG_SHL 0x11
#define SLANG_SHR 0x12
#define SLANG_MOD 0x13
#define SLANG_BINARY_OP_MAX 0x13
#define SLANG_UNARY_OP_MIN 0x20
#define SLANG_PLUSPLUS 0x20
#define SLANG_MINUSMINUS 0x21
#define SLANG_CHS 0x22
#define SLANG_NOT 0x23
#define SLANG_BNOT 0x24
#define SLANG_ABS 0x25
#define SLANG_SIGN 0x26
#define SLANG_SQR 0x27
#define SLANG_MUL2 0x28
#define SLANG_ISPOS 0x29
#define SLANG_ISNEG 0x2A
#define SLANG_ISNONNEG 0x2B
#define SLANG_UNARY_OP_MAX 0x2B
#define MAKE_INTRINSIC_N(n,f,out,in,a1,a2,a3,a4,a5,a6,a7) {(n), NULL, SLANG_INTRINSIC, (FVOID_STAR) (f), {a1,a2,a3,a4,a5,a6,a7}, (in), (out)}
#define MAKE_INTRINSIC_7(n,f,out,a1,a2,a3,a4,a5,a6,a7) MAKE_INTRINSIC_N(n,f,out,7,a1,a2,a3,a4,a5,a6,a7)
#define MAKE_INTRINSIC_6(n,f,out,a1,a2,a3,a4,a5,a6) MAKE_INTRINSIC_N(n,f,out,6,a1,a2,a3,a4,a5,a6,0)
#define MAKE_INTRINSIC_5(n,f,out,a1,a2,a3,a4,a5) MAKE_INTRINSIC_N(n,f,out,5,a1,a2,a3,a4,a5,0,0)
#define MAKE_INTRINSIC_4(n,f,out,a1,a2,a3,a4) MAKE_INTRINSIC_N(n,f,out,4,a1,a2,a3,a4,0,0,0)
#define MAKE_INTRINSIC_3(n,f,out,a1,a2,a3) MAKE_INTRINSIC_N(n,f,out,3,a1,a2,a3,0,0,0,0)
#define MAKE_INTRINSIC_2(n,f,out,a1,a2) MAKE_INTRINSIC_N(n,f,out,2,a1,a2,0,0,0,0,0)
#define MAKE_INTRINSIC_1(n,f,out,a1) MAKE_INTRINSIC_N(n,f,out,1,a1,0,0,0,0,0,0)
#define MAKE_INTRINSIC_0(n,f,out) MAKE_INTRINSIC_N(n,f,out,0,0,0,0,0,0,0,0)
#define MAKE_INTRINSIC_S(n,f,r) MAKE_INTRINSIC_1(n,f,r,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_I(n,f,r) MAKE_INTRINSIC_1(n,f,r,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_SS(n,f,r) MAKE_INTRINSIC_2(n,f,r,SLANG_STRING_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_SI(n,f,r) MAKE_INTRINSIC_2(n,f,r,SLANG_STRING_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_IS(n,f,r) MAKE_INTRINSIC_2(n,f,r,SLANG_INT_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_II(n,f,r) MAKE_INTRINSIC_2(n,f,r,SLANG_INT_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_SSS(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_STRING_TYPE,SLANG_STRING_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_SSI(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_STRING_TYPE,SLANG_STRING_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_SIS(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_STRING_TYPE,SLANG_INT_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_SII(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_STRING_TYPE,SLANG_INT_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_ISS(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_INT_TYPE,SLANG_STRING_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_ISI(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_INT_TYPE,SLANG_STRING_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC_IIS(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_INT_TYPE,SLANG_INT_TYPE,SLANG_STRING_TYPE)
#define MAKE_INTRINSIC_III(n,f,r) MAKE_INTRINSIC_3(n,f,r,SLANG_INT_TYPE,SLANG_INT_TYPE,SLANG_INT_TYPE)
#define MAKE_INTRINSIC(n,f,out,in) MAKE_INTRINSIC_N(n,f,out,in,0,0,0,0,0,0,0)
#define MAKE_VARIABLE(n,v,t,r) {n, NULL, SLANG_IVARIABLE + (r), (VOID_STAR)(v), (t)}
#define MAKE_APP_UNARY(n,op) {(n), NULL, SLANG_APP_UNARY, (op)}
#define MAKE_ARITH_UNARY(n,op) {(n), NULL, SLANG_ARITH_UNARY, (op)}
#define MAKE_ARITH_BINARY(n,op) {(n), NULL, SLANG_ARITH_BINARY, (op)}
#define MAKE_MATH_UNARY(n,op) {(n), NULL, SLANG_MATH_UNARY, (op)}
#define MAKE_HCONSTANT_T(n,val,T) {(n),NULL, SLANG_HCONSTANT, T, (short)(val)}
#define MAKE_HCONSTANT(n,val) MAKE_HCONSTANT_T(n,val,SLANG_SHORT_TYPE)
#define MAKE_ICONSTANT_T(n,val,T) {(n),NULL, SLANG_ICONSTANT, T, (int)(val)}
#define MAKE_ICONSTANT(n,val) MAKE_ICONSTANT_T(n,val,SLANG_INT_TYPE)
#define MAKE_LCONSTANT_T(n,val,T) {(n),NULL, SLANG_LCONSTANT, T, (long)(val)}
#define MAKE_LCONSTANT(n,val) MAKE_LCONSTANT_T(n,val,SLANG_LONG_TYPE)
#ifdef HAVE_LONG_LONG
#define MAKE_LLCONSTANT_T(n,val,T) {(n),NULL, T, (long long)(val)}
#define MAKE_LLCONSTANT(n,val) MAKE_LLCONSTANT_T(n,val,SLANG_LLONG_TYPE)
#endif
#define MAKE_FCONSTANT(n,val) {(n),NULL, SLANG_FCONSTANT, (val)}
#define MAKE_DCONSTANT(n,val) {(n),NULL, SLANG_DCONSTANT, (val)}
#ifndef offsetof
#define offsetof(T,F) ((unsigned int)((char *)&((T *)0L)->F - (char *)0L))
#endif
#define MAKE_ISTRUCT_FIELD(s,f,n,t,r) {(n), offsetof(s,f), (t), (r)}
#define MAKE_CSTRUCT_FIELD(s,f,n,t,r) {(n), offsetof(s,f), (t), (r)}
#define MAKE_CSTRUCT_INT_FIELD(s,f,n,r) {(n), offsetof(s,f), (sizeof(((s*)0L)->f)==sizeof(int))?(SLANG_INT_TYPE): (sizeof(((s*)0L)->f)==sizeof(short))?(SLANG_SHORT_TYPE): (sizeof(((s*)0L)->f)==sizeof(char))?(SLANG_CHAR_TYPE): (sizeof(((s*)0L)->f)==sizeof(long))?(SLANG_LONG_TYPE): SLANG_LLONG_TYPE, (r)}
#define MAKE_CSTRUCT_UINT_FIELD(s,f,n,r) {(n), offsetof(s,f), (sizeof(((s*)0L)->f)==sizeof(int))?(SLANG_UINT_TYPE): (sizeof(((s*)0L)->f)==sizeof(short))?(SLANG_USHORT_TYPE): (sizeof(((s*)0L)->f)==sizeof(char))?(SLANG_UCHAR_TYPE): (sizeof(((s*)0L)->f)==sizeof(long))?(SLANG_ULONG_TYPE): SLANG_ULLONG_TYPE, (r)}
#define MAKE_CSTRUCT_FLOAT_FIELD(s,f,n,r) {(n), offsetof(s,f), (sizeof(((s*)0L)->f)==sizeof(float))?(SLANG_FLOAT_TYPE): SLANG_DOUBLE_TYPE, (r)}
#define SLANG_END_TABLE {NULL}
#define SLANG_END_INTRIN_FUN_TABLE MAKE_INTRINSIC_0(NULL,NULL,0)
#define SLANG_END_FCONST_TABLE MAKE_DCONSTANT(NULL,0)
#define SLANG_END_DCONST_TABLE MAKE_DCONSTANT(NULL,0)
#define SLANG_END_MATH_UNARY_TABLE MAKE_MATH_UNARY(NULL,0)
#define SLANG_END_ARITH_UNARY_TABLE MAKE_ARITH_UNARY(NULL,0)
#define SLANG_END_ARITH_BINARY_TABLE MAKE_ARITH_BINARY(NULL,0)
#define SLANG_END_APP_UNARY_TABLE MAKE_APP_UNARY(NULL,0)
#define SLANG_END_INTRIN_VAR_TABLE MAKE_VARIABLE(NULL,NULL,0,0)
#define SLANG_END_ICONST_TABLE MAKE_ICONSTANT(NULL,0)
#define SLANG_END_LCONST_TABLE MAKE_LCONSTANT(NULL,0)
#define SLANG_END_LLCONST_TABLE MAKE_LLCONSTANT(NULL,0)
#define SLANG_END_ISTRUCT_TABLE {NULL, 0, 0, 0}
#define SLANG_END_CSTRUCT_TABLE {NULL, 0, 0, 0}
#define UPPER_CASE(x) (_pSLChg_UCase_Lut[(unsigned char) (x)])
#define LOWER_CASE(x) (_pSLChg_LCase_Lut[(unsigned char) (x)])
#define CHANGE_CASE(x) (((x) == _pSLChg_LCase_Lut[(unsigned char) (x)]) ? _pSLChg_UCase_Lut[(unsigned char) (x)] : _pSLChg_LCase_Lut[(unsigned char) (x)])
#define SLREGEXP_CASELESS 0x01
#define SLREGEXP_UTF8 0x10
#define SLREGEXP_HINT_BOL 0x01
#define SLREGEXP_HINT_OSEARCH 0x02
#define SLSEARCH_CASELESS 0x1
#define SLSEARCH_UTF8 0x2
#ifdef __cplusplus
#define SLANG_MODULE(name) extern SL_EXPORT "C" int init_ ##name ##_module_ns (char *); extern SL_EXPORT "C" void deinit_ ##name ##_module (void); extern SL_EXPORT "C" int SLmodule_ ##name ##_api_version; SL_EXPORT int SLmodule_ ##name ##_api_version = SLANG_VERSION
#else
#define SLANG_MODULE(name) extern SL_EXPORT int init_ ##name ##_module_ns (char *); extern SL_EXPORT void deinit_ ##name ##_module (void); SL_EXPORT int SLmodule_ ##name ##_api_version = SLANG_VERSION
#endif
#if 0
#endif
#ifdef __cplusplus
#endif
#endif
