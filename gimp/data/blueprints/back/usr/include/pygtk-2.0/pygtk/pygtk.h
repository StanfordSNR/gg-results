// GGHASH:VKBeqtXRIpaUa1NFXNL4MtP9a5A6cMG_j47cYrYELTRk00000a1e
#ifndef _PYGTK_H_
#define _PYGTK_H_ 
#define NO_IMPORT_PYGOBJECT 
#include <pygobject.h>
#include <Python.h>
#include <gtk/gtk.h>
#define PyGdkAtom_Get(v) (((PyGdkAtom_Object *)(v))->atom)
#ifndef _INSIDE_PYGTK_
#if defined(NO_IMPORT) || defined(NO_IMPORT_PYGTK)
#else
#endif
#define PyGdkAtom_Type *(_PyGtk_API->gdkAtom_type)
#define PyGdkAtom_Check(v) ((v)->ob_type == _PyGtk_API->gdkAtom_type)
#define PyGdkAtom_New (_PyGtk_API->gdkAtom_new)
#define PYGTK_VERSION (_PyGtk_API->pygtkVersion)
#define pygdk_rectangle_from_pyobject (_PyGtk_API->rectangle_from_pyobject)
#define pygtk_tree_path_to_pyobject (_PyGtk_API->tree_path_to_pyobject)
#define pygtk_tree_path_from_pyobject (_PyGtk_API->tree_path_from_pyobject)
#define init_pygtk() G_STMT_START { PyObject *pygtk = PyImport_ImportModule("gtk"); if (pygtk != NULL) { PyObject *module_dict = PyModule_GetDict(pygtk); PyObject *cobject = PyDict_GetItemString(module_dict, "_PyGtk_API"); if (PyCObject_Check(cobject)) _PyGtk_API = (struct _PyGtk_FunctionStruct*) PyCObject_AsVoidPtr(cobject); else { PyErr_SetString(PyExc_RuntimeError, "could not find _PyGtk_API object"); return; } } else { PyErr_SetString(PyExc_ImportError, "could not import gtk"); return; } } G_STMT_END
#endif
#endif
