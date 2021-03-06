// GGHASH:VgPFH40NqJG8nUH9P59LvlBByJ77CC6Z8_Yk3ZuPvzlM000004f4
#ifndef PYCTYPE_H
#define PYCTYPE_H 
#define PY_CTF_LOWER 0x01
#define PY_CTF_UPPER 0x02
#define PY_CTF_ALPHA (PY_CTF_LOWER|PY_CTF_UPPER)
#define PY_CTF_DIGIT 0x04
#define PY_CTF_ALNUM (PY_CTF_ALPHA|PY_CTF_DIGIT)
#define PY_CTF_SPACE 0x08
#define PY_CTF_XDIGIT 0x10
#define Py_ISLOWER(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_LOWER)
#define Py_ISUPPER(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_UPPER)
#define Py_ISALPHA(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_ALPHA)
#define Py_ISDIGIT(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_DIGIT)
#define Py_ISXDIGIT(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_XDIGIT)
#define Py_ISALNUM(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_ALNUM)
#define Py_ISSPACE(c) (_Py_ctype_table[Py_CHARMASK(c)] & PY_CTF_SPACE)
#define Py_TOLOWER(c) (_Py_ctype_tolower[Py_CHARMASK(c)])
#define Py_TOUPPER(c) (_Py_ctype_toupper[Py_CHARMASK(c)])
#endif
