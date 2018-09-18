// GGHASH:VHSuaO4f6_bVAKYeSpwZ2s0BXLuIXpjQsKQ.GatCU4Wc00000e8c
#ifndef Py_SYMTABLE_H
#define Py_SYMTABLE_H 
#ifdef __cplusplus
#endif
#define PySTEntry_Check(op) (Py_TYPE(op) == &PySTEntry_Type)
#define DEF_GLOBAL 1
#define DEF_LOCAL 2
#define DEF_PARAM 2<<1
#define USE 2<<2
#define DEF_FREE 2<<3
#define DEF_FREE_CLASS 2<<4
#define DEF_IMPORT 2<<5
#define DEF_BOUND (DEF_LOCAL | DEF_PARAM | DEF_IMPORT)
#define SCOPE_OFF 11
#define SCOPE_MASK 7
#define LOCAL 1
#define GLOBAL_EXPLICIT 2
#define GLOBAL_IMPLICIT 3
#define FREE 4
#define CELL 5
#define OPT_IMPORT_STAR 1
#define OPT_EXEC 2
#define OPT_BARE_EXEC 4
#define OPT_TOPLEVEL 8
#define GENERATOR 1
#define GENERATOR_EXPRESSION 2
#ifdef __cplusplus
#endif
#endif
