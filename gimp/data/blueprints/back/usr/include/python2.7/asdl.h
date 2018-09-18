// GGHASH:VqgVSgn4m71klIIVBG4xlHnDPYmLssFAetlYfx_0A0Es0000044b
#ifndef Py_ASDL_H
#define Py_ASDL_H 
#ifndef __cplusplus
#endif
#define asdl_seq_GET(S,I) (S)->elements[(I)]
#define asdl_seq_LEN(S) ((S) == NULL ? 0 : (S)->size)
#ifdef Py_DEBUG
#define asdl_seq_SET(S,I,V) { int _asdl_i = (I); assert((S) && _asdl_i < (S)->size); (S)->elements[_asdl_i] = (V); }
#else
#define asdl_seq_SET(S,I,V) (S)->elements[I] = (V)
#endif
#endif
