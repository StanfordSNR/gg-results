// GGHASH:V3ybBhBm2bJ_xTyMP7M7f3c_MFojHQb7R80aZiexnhLc00009bc9
#ifndef Py_OBJECT_H
#define Py_OBJECT_H 
#ifdef __cplusplus
#endif
#if defined(Py_DEBUG) && !defined(Py_TRACE_REFS)
#define Py_TRACE_REFS 
#endif
#if defined(Py_TRACE_REFS) && !defined(Py_REF_DEBUG)
#define Py_REF_DEBUG 
#endif
#ifdef Py_TRACE_REFS
#define _PyObject_HEAD_EXTRA struct _object *_ob_next; struct _object *_ob_prev;
#define _PyObject_EXTRA_INIT 0, 0,
#else
#define _PyObject_HEAD_EXTRA 
#define _PyObject_EXTRA_INIT 
#endif
#define PyObject_HEAD _PyObject_HEAD_EXTRA Py_ssize_t ob_refcnt; struct _typeobject *ob_type;
#define PyObject_HEAD_INIT(type) _PyObject_EXTRA_INIT 1, type,
#define PyVarObject_HEAD_INIT(type,size) PyObject_HEAD_INIT(type) size,
#define PyObject_VAR_HEAD PyObject_HEAD Py_ssize_t ob_size;
#define Py_INVALID_SIZE (Py_ssize_t)-1
#define Py_REFCNT(ob) (((PyObject*)(ob))->ob_refcnt)
#define Py_TYPE(ob) (((PyObject*)(ob))->ob_type)
#define Py_SIZE(ob) (((PyVarObject*)(ob))->ob_size)
#define PyBUF_SIMPLE 0
#define PyBUF_WRITABLE 0x0001
#define PyBUF_WRITEABLE PyBUF_WRITABLE
#define PyBUF_FORMAT 0x0004
#define PyBUF_ND 0x0008
#define PyBUF_STRIDES (0x0010 | PyBUF_ND)
#define PyBUF_C_CONTIGUOUS (0x0020 | PyBUF_STRIDES)
#define PyBUF_F_CONTIGUOUS (0x0040 | PyBUF_STRIDES)
#define PyBUF_ANY_CONTIGUOUS (0x0080 | PyBUF_STRIDES)
#define PyBUF_INDIRECT (0x0100 | PyBUF_STRIDES)
#define PyBUF_CONTIG (PyBUF_ND | PyBUF_WRITABLE)
#define PyBUF_CONTIG_RO (PyBUF_ND)
#define PyBUF_STRIDED (PyBUF_STRIDES | PyBUF_WRITABLE)
#define PyBUF_STRIDED_RO (PyBUF_STRIDES)
#define PyBUF_RECORDS (PyBUF_STRIDES | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_RECORDS_RO (PyBUF_STRIDES | PyBUF_FORMAT)
#define PyBUF_FULL (PyBUF_INDIRECT | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_FULL_RO (PyBUF_INDIRECT | PyBUF_FORMAT)
#define PyBUF_READ 0x100
#define PyBUF_WRITE 0x200
#define PyBUF_SHADOW 0x400
#ifdef COUNT_ALLOCS
#endif
#define PyHeapType_GET_MEMBERS(etype) ((PyMemberDef *)(((char *)etype) + Py_TYPE(etype)->tp_basicsize))
#define PyObject_TypeCheck(ob,tp) (Py_TYPE(ob) == (tp) || PyType_IsSubtype(Py_TYPE(ob), (tp)))
#define PyType_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_TYPE_SUBCLASS)
#define PyType_CheckExact(op) (Py_TYPE(op) == &PyType_Type)
#define PyObject_Bytes PyObject_Str
#ifdef Py_USING_UNICODE
#endif
#ifdef Py_DEBUG
#endif
#define PyObject_REPR(obj) PyString_AS_STRING(PyObject_Repr(obj))
#define Py_PRINT_RAW 1
#define Py_TPFLAGS_HAVE_GETCHARBUFFER (1L<<0)
#define Py_TPFLAGS_HAVE_SEQUENCE_IN (1L<<1)
#define Py_TPFLAGS_GC 0
#define Py_TPFLAGS_HAVE_INPLACEOPS (1L<<3)
#define Py_TPFLAGS_CHECKTYPES (1L<<4)
#define Py_TPFLAGS_HAVE_RICHCOMPARE (1L<<5)
#define Py_TPFLAGS_HAVE_WEAKREFS (1L<<6)
#define Py_TPFLAGS_HAVE_ITER (1L<<7)
#define Py_TPFLAGS_HAVE_CLASS (1L<<8)
#define Py_TPFLAGS_HEAPTYPE (1L<<9)
#define Py_TPFLAGS_BASETYPE (1L<<10)
#define Py_TPFLAGS_READY (1L<<12)
#define Py_TPFLAGS_READYING (1L<<13)
#define Py_TPFLAGS_HAVE_GC (1L<<14)
#ifdef STACKLESS
#define Py_TPFLAGS_HAVE_STACKLESS_EXTENSION (3L<<15)
#else
#define Py_TPFLAGS_HAVE_STACKLESS_EXTENSION 0
#endif
#define Py_TPFLAGS_HAVE_INDEX (1L<<17)
#define Py_TPFLAGS_HAVE_VERSION_TAG (1L<<18)
#define Py_TPFLAGS_VALID_VERSION_TAG (1L<<19)
#define Py_TPFLAGS_IS_ABSTRACT (1L<<20)
#define Py_TPFLAGS_HAVE_NEWBUFFER (1L<<21)
#define Py_TPFLAGS_INT_SUBCLASS (1L<<23)
#define Py_TPFLAGS_LONG_SUBCLASS (1L<<24)
#define Py_TPFLAGS_LIST_SUBCLASS (1L<<25)
#define Py_TPFLAGS_TUPLE_SUBCLASS (1L<<26)
#define Py_TPFLAGS_STRING_SUBCLASS (1L<<27)
#define Py_TPFLAGS_UNICODE_SUBCLASS (1L<<28)
#define Py_TPFLAGS_DICT_SUBCLASS (1L<<29)
#define Py_TPFLAGS_BASE_EXC_SUBCLASS (1L<<30)
#define Py_TPFLAGS_TYPE_SUBCLASS (1L<<31)
#define Py_TPFLAGS_DEFAULT_EXTERNAL ( Py_TPFLAGS_HAVE_GETCHARBUFFER | Py_TPFLAGS_HAVE_SEQUENCE_IN | Py_TPFLAGS_HAVE_INPLACEOPS | Py_TPFLAGS_HAVE_RICHCOMPARE | Py_TPFLAGS_HAVE_WEAKREFS | Py_TPFLAGS_HAVE_ITER | Py_TPFLAGS_HAVE_CLASS | Py_TPFLAGS_HAVE_STACKLESS_EXTENSION | Py_TPFLAGS_HAVE_INDEX | 0)
#define Py_TPFLAGS_DEFAULT_CORE (Py_TPFLAGS_DEFAULT_EXTERNAL | Py_TPFLAGS_HAVE_VERSION_TAG)
#ifdef Py_BUILD_CORE
#define Py_TPFLAGS_DEFAULT Py_TPFLAGS_DEFAULT_CORE
#else
#define Py_TPFLAGS_DEFAULT Py_TPFLAGS_DEFAULT_EXTERNAL
#endif
#define PyType_HasFeature(t,f) (((t)->tp_flags & (f)) != 0)
#define PyType_FastSubclass(t,f) PyType_HasFeature(t,f)
#ifdef Py_REF_DEBUG
#define _Py_INC_REFTOTAL _Py_RefTotal++
#define _Py_DEC_REFTOTAL _Py_RefTotal--
#define _Py_REF_DEBUG_COMMA ,
#define _Py_CHECK_REFCNT(OP) { if (((PyObject*)OP)->ob_refcnt < 0) _Py_NegativeRefcount(__FILE__, __LINE__, (PyObject *)(OP)); }
#else
#define _Py_INC_REFTOTAL 
#define _Py_DEC_REFTOTAL 
#define _Py_REF_DEBUG_COMMA 
#define _Py_CHECK_REFCNT(OP) ;
#endif
#ifdef COUNT_ALLOCS
#define _Py_INC_TPALLOCS(OP) inc_count(Py_TYPE(OP))
#define _Py_INC_TPFREES(OP) dec_count(Py_TYPE(OP))
#define _Py_DEC_TPFREES(OP) Py_TYPE(OP)->tp_frees--
#define _Py_COUNT_ALLOCS_COMMA ,
#else
#define _Py_INC_TPALLOCS(OP) 
#define _Py_INC_TPFREES(OP) 
#define _Py_DEC_TPFREES(OP) 
#define _Py_COUNT_ALLOCS_COMMA 
#endif
#ifdef Py_TRACE_REFS
#else
#define _Py_NewReference(op) ( _Py_INC_TPALLOCS(op) _Py_COUNT_ALLOCS_COMMA _Py_INC_REFTOTAL _Py_REF_DEBUG_COMMA Py_REFCNT(op) = 1)
#define _Py_ForgetReference(op) _Py_INC_TPFREES(op)
#define _Py_Dealloc(op) ( _Py_INC_TPFREES(op) _Py_COUNT_ALLOCS_COMMA (*Py_TYPE(op)->tp_dealloc)((PyObject *)(op)))
#endif
#define Py_INCREF(op) ( _Py_INC_REFTOTAL _Py_REF_DEBUG_COMMA ((PyObject*)(op))->ob_refcnt++)
#define Py_DECREF(op) do { if (_Py_DEC_REFTOTAL _Py_REF_DEBUG_COMMA --((PyObject*)(op))->ob_refcnt != 0) _Py_CHECK_REFCNT(op) else _Py_Dealloc((PyObject *)(op)); } while (0)
#define Py_CLEAR(op) do { if (op) { PyObject *_py_tmp = (PyObject *)(op); (op) = NULL; Py_DECREF(_py_tmp); } } while (0)
#define Py_XINCREF(op) do { if ((op) == NULL) ; else Py_INCREF(op); } while (0)
#define Py_XDECREF(op) do { if ((op) == NULL) ; else Py_DECREF(op); } while (0)
#define Py_SETREF(op,op2) do { PyObject *_py_tmp = (PyObject *)(op); (op) = (op2); Py_DECREF(_py_tmp); } while (0)
#define Py_XSETREF(op,op2) do { PyObject *_py_tmp = (PyObject *)(op); (op) = (op2); Py_XDECREF(_py_tmp); } while (0)
#define Py_None (&_Py_NoneStruct)
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define Py_NotImplemented (&_Py_NotImplementedStruct)
#define Py_LT 0
#define Py_LE 1
#define Py_EQ 2
#define Py_NE 3
#define Py_GT 4
#define Py_GE 5
#define staticforward static
#define statichere static
#define PyTrash_UNWIND_LEVEL 50
#define Py_TRASHCAN_SAFE_BEGIN(op) do { PyThreadState *_tstate = PyThreadState_GET(); if (!_tstate || _tstate->trash_delete_nesting < PyTrash_UNWIND_LEVEL) { if (_tstate) ++_tstate->trash_delete_nesting;
#define Py_TRASHCAN_SAFE_END(op) if (_tstate) { --_tstate->trash_delete_nesting; if (_tstate->trash_delete_later && _tstate->trash_delete_nesting <= 0) _PyTrash_thread_destroy_chain(); } } else _PyTrash_thread_deposit_object((PyObject*)op); } while (0);
#ifdef __cplusplus
#endif
#endif
