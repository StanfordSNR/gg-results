// GGHASH:Vf65MWgVBfbZAohcaIfvT_EuA7ojVfgfyuW3GUSEYXtY00001133
#ifndef Py_CODE_H
#define Py_CODE_H 
#ifdef __cplusplus
#endif
#define CO_OPTIMIZED 0x0001
#define CO_NEWLOCALS 0x0002
#define CO_VARARGS 0x0004
#define CO_VARKEYWORDS 0x0008
#define CO_NESTED 0x0010
#define CO_GENERATOR 0x0020
#define CO_NOFREE 0x0040
#if 0
#define CO_GENERATOR_ALLOWED 0x1000
#endif
#define CO_FUTURE_DIVISION 0x2000
#define CO_FUTURE_ABSOLUTE_IMPORT 0x4000
#define CO_FUTURE_WITH_STATEMENT 0x8000
#define CO_FUTURE_PRINT_FUNCTION 0x10000
#define CO_FUTURE_UNICODE_LITERALS 0x20000
#if 1
#define PY_PARSER_REQUIRES_FUTURE_KEYWORD 
#endif
#define CO_MAXBLOCKS 20
#define PyCode_Check(op) (Py_TYPE(op) == &PyCode_Type)
#define PyCode_GetNumFree(op) (PyTuple_GET_SIZE((op)->co_freevars))
#define _PyCode_GETCODEPTR(co,pp) ((*Py_TYPE((co)->co_code)->tp_as_buffer->bf_getreadbuffer) ((co)->co_code, 0, (void **)(pp)))
#ifdef __cplusplus
#endif
#endif
