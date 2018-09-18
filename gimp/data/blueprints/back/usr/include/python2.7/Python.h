// GGHASH:VgyvJX_QPOW5.rK0pIUuim2rhYFLZmNJq2ToxDv0IsR000001117
#ifndef Py_PYTHON_H
#define Py_PYTHON_H 
#include "patchlevel.h"
#include "pyconfig.h"
#include "pymacconfig.h"
#ifndef WITH_CYCLE_GC
#define WITH_CYCLE_GC 1
#endif
#include <limits.h>
#ifndef UCHAR_MAX
#error "Something's broken.  UCHAR_MAX should be defined in limits.h."
#endif
#if UCHAR_MAX != 255
#error "Python's source code assumes C's unsigned char is an 8-bit type."
#endif
#if defined(__sgi) && defined(WITH_THREAD) && !defined(_SGI_MP_SOURCE)
#define _SGI_MP_SOURCE 
#endif
#include <stdio.h>
#ifndef NULL
# error "Python.h requires that stdio.h define NULL."
#endif
#include <string.h>
#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif
#include <stdlib.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_CRYPT_H
#include <crypt.h>
#endif
#ifdef HAVE_STDDEF_H
#include <stddef.h>
#endif
#include <assert.h>
#include "pyport.h"
#ifndef DL_IMPORT
#define DL_IMPORT(RTYPE) RTYPE
#endif
#ifndef DL_EXPORT
#define DL_EXPORT(RTYPE) RTYPE
#endif
#if defined(Py_DEBUG) && defined(WITH_PYMALLOC) && !defined(PYMALLOC_DEBUG)
#define PYMALLOC_DEBUG 
#endif
#if defined(PYMALLOC_DEBUG) && !defined(WITH_PYMALLOC)
#error "PYMALLOC_DEBUG requires WITH_PYMALLOC"
#endif
#include "pymath.h"
#include "pymem.h"
#include "object.h"
#include "objimpl.h"
#include "pydebug.h"
#include "unicodeobject.h"
#include "intobject.h"
#include "boolobject.h"
#include "longobject.h"
#include "floatobject.h"
#ifndef WITHOUT_COMPLEX
#include "complexobject.h"
#endif
#include "rangeobject.h"
#include "stringobject.h"
#include "memoryobject.h"
#include "bufferobject.h"
#include "bytesobject.h"
#include "bytearrayobject.h"
#include "tupleobject.h"
#include "listobject.h"
#include "dictobject.h"
#include "enumobject.h"
#include "setobject.h"
#include "methodobject.h"
#include "moduleobject.h"
#include "funcobject.h"
#include "classobject.h"
#include "fileobject.h"
#include "cobject.h"
#include "pycapsule.h"
#include "traceback.h"
#include "sliceobject.h"
#include "cellobject.h"
#include "iterobject.h"
#include "genobject.h"
#include "descrobject.h"
#include "warnings.h"
#include "weakrefobject.h"
#include "codecs.h"
#include "pyerrors.h"
#include "pystate.h"
#include "pyarena.h"
#include "modsupport.h"
#include "pythonrun.h"
#include "ceval.h"
#include "sysmodule.h"
#include "intrcheck.h"
#include "import.h"
#include "abstract.h"
#include "compile.h"
#include "eval.h"
#include "pyctype.h"
#include "pystrtod.h"
#include "pystrcmp.h"
#include "dtoa.h"
#define PyArg_GetInt(v,a) PyArg_Parse((v), "i", (a))
#define PyArg_NoArgs(v) PyArg_Parse(v, "")
#define Py_CHARMASK(c) ((unsigned char)((c) & 0xff))
#include "pyfpe.h"
#define Py_single_input 256
#define Py_file_input 257
#define Py_eval_input 258
#ifdef HAVE_PTH
#include <pth.h>
#endif
#define PyDoc_VAR(name) static char name[]
#define PyDoc_STRVAR(name,str) PyDoc_VAR(name) = PyDoc_STR(str)
#ifdef WITH_DOC_STRINGS
#define PyDoc_STR(str) str
#else
#define PyDoc_STR(str) ""
#endif
#endif
