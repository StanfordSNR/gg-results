// GGHASH:VatY1SE_eN07X42msK5W1DTVEFmxCjhEK_P_ZeylRpuY00000c6e
#ifndef __PYGLIB_H__
#define __PYGLIB_H__ 
#include <Python.h>
#include <glib.h>
#define pyglib_begin_allow_threads G_STMT_START { PyThreadState *_save = NULL; if (pyglib_threads_enabled()) _save = PyEval_SaveThread();
#define pyglib_end_allow_threads if (pyglib_threads_enabled()) PyEval_RestoreThread(_save); } G_STMT_END
#define PYGLIB_REGISTER_TYPE(d,type,name) if (!type.tp_alloc) type.tp_alloc = PyType_GenericAlloc; if (!type.tp_new) type.tp_new = PyType_GenericNew; if (PyType_Ready(&type)) return; PyDict_SetItemString(d, name, (PyObject *)&type);
#endif
