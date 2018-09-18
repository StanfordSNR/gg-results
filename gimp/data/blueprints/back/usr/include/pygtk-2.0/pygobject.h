// GGHASH:Vnzgxac1J79hz_YtoNQjflLFJeNoLN.qTTgfbcWxt6C80000673b
#ifndef _PYGOBJECT_H_
#define _PYGOBJECT_H_ 
#include <Python.h>
#include <glib.h>
#include <glib-object.h>
#define PYGIL_API_IS_BUGGY FALSE
#define pygobject_get(v) (((PyGObject *)(v))->obj)
#define pygobject_check(v,base) (PyObject_TypeCheck(v,base))
#define pyg_boxed_get(v,t) ((t *)((PyGBoxed *)(v))->boxed)
#define pyg_boxed_check(v,typecode) (PyObject_TypeCheck(v, &PyGBoxed_Type) && ((PyGBoxed *)(v))->gtype == typecode)
#define pyg_pointer_get(v,t) ((t *)((PyGPointer *)(v))->pointer)
#define pyg_pointer_check(v,typecode) (PyObject_TypeCheck(v, &PyGPointer_Type) && ((PyGPointer *)(v))->gtype == typecode)
#define PyGParamSpec_Get(v) (((PyGParamSpec *)v)->pspec)
#define PyGParamSpec_Check(v) (PyObject_TypeCheck(v, &PyGParamSpec_Type))
#ifndef _INSIDE_PYGOBJECT_
#if defined(NO_IMPORT) || defined(NO_IMPORT_PYGOBJECT)
#else
#endif
#define pygobject_register_class (_PyGObject_API->register_class)
#define pygobject_register_wrapper (_PyGObject_API->register_wrapper)
#define pygobject_register_sinkfunc (_PyGObject_API->register_sinkfunc)
#define pygobject_lookup_class (_PyGObject_API->lookup_class)
#define pygobject_new (_PyGObject_API->newgobj)
#define pyg_closure_new (_PyGObject_API->closure_new)
#define pygobject_watch_closure (_PyGObject_API->object_watch_closure)
#define pyg_closure_set_exception_handler (_PyGObject_API->closure_set_exception_handler)
#define pyg_destroy_notify (_PyGObject_API->destroy_notify)
#define pyg_type_from_object_strict (_PyGObject_API->type_from_object_strict)
#define pyg_type_from_object (_PyGObject_API->type_from_object)
#define pyg_type_wrapper_new (_PyGObject_API->type_wrapper_new)
#define pyg_enum_get_value (_PyGObject_API->enum_get_value)
#define pyg_flags_get_value (_PyGObject_API->flags_get_value)
#define pyg_register_boxed_custom pyg_register_gtype_custom
#define pyg_register_gtype_custom (_PyGObject_API->register_gtype_custom)
#define pyg_value_from_pyobject (_PyGObject_API->value_from_pyobject)
#define pyg_value_as_pyobject (_PyGObject_API->value_as_pyobject)
#define pyg_register_interface (_PyGObject_API->register_interface)
#define PyGBoxed_Type (*_PyGObject_API->boxed_type)
#define pyg_register_boxed (_PyGObject_API->register_boxed)
#define pyg_boxed_new (_PyGObject_API->boxed_new)
#define PyGPointer_Type (*_PyGObject_API->pointer_type)
#define pyg_register_pointer (_PyGObject_API->register_pointer)
#define pyg_pointer_new (_PyGObject_API->pointer_new)
#define pyg_enum_add_constants (_PyGObject_API->enum_add_constants)
#define pyg_flags_add_constants (_PyGObject_API->flags_add_constants)
#define pyg_constant_strip_prefix (_PyGObject_API->constant_strip_prefix)
#define pyg_error_check (_PyGObject_API->error_check)
#define pyg_set_thread_block_funcs (_PyGObject_API->set_thread_block_funcs)
#define PyGParamSpec_Type (*_PyGObject_API->paramspec_type)
#define pyg_param_spec_new (_PyGObject_API->paramspec_new)
#define pyg_param_spec_from_object (_PyGObject_API->paramspec_get)
#define pyg_pyobj_to_unichar_conv (_PyGObject_API->pyobj_to_unichar_conv)
#define pyg_parse_constructor_args (_PyGObject_API->parse_constructor_args)
#define pyg_param_gvalue_as_pyobject (_PyGObject_API->value_as_pyobject)
#define pyg_param_gvalue_from_pyobject (_PyGObject_API->gvalue_from_param_pyobject)
#define PyGEnum_Type (*_PyGObject_API->enum_type)
#define pyg_enum_add (_PyGObject_API->enum_add)
#define pyg_enum_from_gtype (_PyGObject_API->enum_from_gtype)
#define PyGFlags_Type (*_PyGObject_API->flags_type)
#define pyg_flags_add (_PyGObject_API->flags_add)
#define pyg_flags_from_gtype (_PyGObject_API->flags_from_gtype)
#define pyg_enable_threads (_PyGObject_API->enable_threads)
#define pyg_gil_state_ensure (_PyGObject_API->gil_state_ensure)
#define pyg_gil_state_release (_PyGObject_API->gil_state_release)
#define pyg_register_class_init (_PyGObject_API->register_class_init)
#define pyg_register_interface_info (_PyGObject_API->register_interface_info)
#define pygobject_construct (_PyGObject_API->pygobject_construct)
#define pygobject_constructv (_PyGObject_API->pygobject_constructv)
#define pyg_set_object_has_new_constructor (_PyGObject_API->set_object_has_new_constructor)
#define pyg_add_warning_redirection (_PyGObject_API->add_warning_redirection)
#define pyg_disable_warning_redirections (_PyGObject_API->disable_warning_redirections)
#define pyg_type_register_custom_callback (_PyGObject_API->type_register_custom)
#define pyg_gerror_exception_check (_PyGObject_API->gerror_exception_check)
#define pyg_option_group_new (_PyGObject_API->option_group_new)
#define pyg_block_threads() G_STMT_START { if (_PyGObject_API->block_threads != NULL) (* _PyGObject_API->block_threads)(); } G_STMT_END
#define pyg_unblock_threads() G_STMT_START { if (_PyGObject_API->unblock_threads != NULL) (* _PyGObject_API->unblock_threads)(); } G_STMT_END
#define pyg_threads_enabled (_PyGObject_API->threads_enabled)
#define pyg_begin_allow_threads G_STMT_START { PyThreadState *_save = NULL; if (_PyGObject_API->threads_enabled) _save = PyEval_SaveThread();
#define pyg_end_allow_threads if (_PyGObject_API->threads_enabled) PyEval_RestoreThread(_save); } G_STMT_END
#if PY_VERSION_HEX < 0x03000000
#else
#endif
#if PY_VERSION_HEX >= 0x03000000
#else
#endif
#define init_pygobject() G_STMT_START { if (!pygobject_init(-1, -1, -1)) return; } G_STMT_END
#define init_pygobject_check(req_major,req_minor,req_micro) G_STMT_START { if (!pygobject_init(req_major, req_minor, req_micro)) return; } G_STMT_END
 #define PYLIST_FROMGLIBLIST(type,prefix,py_list,list,item_convert_func, list_free,list_item_free) G_STMT_START { gint i, len; PyObject *item; void (*glib_list_free)(type*) = list_free; GFunc glib_list_item_free = (GFunc)list_item_free; len = prefix##_length(list); py_list = PyList_New(len); for (i = 0; i < len; i++) { gpointer list_item = prefix##_nth_data(list, i); item = item_convert_func; PyList_SetItem(py_list, i, item); } if (glib_list_item_free != NULL) prefix##_foreach(list, glib_list_item_free, NULL); if (glib_list_free != NULL) glib_list_free(list); } G_STMT_END
#define PYLIST_FROMGLIST(py_list,list,item_convert_func,list_free,list_item_free) PYLIST_FROMGLIBLIST(GList,g_list,py_list,list,item_convert_func, list_free,list_item_free)
#define PYLIST_FROMGSLIST(py_list,list,item_convert_func,list_free,list_item_free) PYLIST_FROMGLIBLIST(GSList,g_slist,py_list,list,item_convert_func, list_free,list_item_free)
#define PYLIST_ASGLIBLIST(type,prefix,py_list,list,check_func,convert_func,child_free_func,errormsg,errorreturn) G_STMT_START { Py_ssize_t i, n_list; GFunc glib_child_free_func = (GFunc)child_free_func; if (!(py_list = PySequence_Fast(py_list, ""))) { errormsg; return errorreturn; } n_list = PySequence_Fast_GET_SIZE(py_list); for (i = 0; i < n_list; i++) { PyObject *py_item = PySequence_Fast_GET_ITEM(py_list, i); if (!check_func) { if (glib_child_free_func) prefix ##_foreach(list, glib_child_free_func, NULL); prefix ##_free(list); Py_DECREF(py_list); errormsg; return errorreturn; } list = prefix ##_prepend(list, convert_func); }; Py_DECREF(py_list); list = prefix ##_reverse(list); } G_STMT_END
#define PYLIST_ASGLIST(py_list,list,check_func,convert_func,child_free_func,errormsg,errorreturn) PYLIST_ASGLIBLIST(GList,g_list,py_list,list,check_func,convert_func, child_free_func,errormsg,errorreturn)
#define PYLIST_ASGSLIST(py_list,list,check_func,convert_func,child_free_func,errormsg,errorreturn) PYLIST_ASGLIBLIST(GSList,g_slist,py_list,list,check_func,convert_func, child_free_func,errormsg,errorreturn)
#endif
#endif
