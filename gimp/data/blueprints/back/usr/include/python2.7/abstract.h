// GGHASH:V2dTVUWzyr8DMZi2B38hqEAD1eWXnKD9Tya7VJkcfJpw0000b0a9
#ifndef Py_ABSTRACTOBJECT_H
#define Py_ABSTRACTOBJECT_H 
#ifdef __cplusplus
#endif
#ifdef PY_SSIZE_T_CLEAN
#define PyObject_CallFunction _PyObject_CallFunction_SizeT
#define PyObject_CallMethod _PyObject_CallMethod_SizeT
#endif
#define PyObject_DelAttrString(O,A) PyObject_SetAttrString((O),(A),NULL)
#define PyObject_DelAttr(O,A) PyObject_SetAttr((O),(A),NULL)
#undef PyObject_Length
#define PyObject_Length PyObject_Size
#define PyObject_CheckBuffer(obj) (((obj)->ob_type->tp_as_buffer != NULL) && (PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_NEWBUFFER)) && ((obj)->ob_type->tp_as_buffer->bf_getbuffer != NULL))
#define PyIter_Check(obj) (PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_ITER) && (obj)->ob_type->tp_iternext != NULL && (obj)->ob_type->tp_iternext != &_PyObject_NextNotImplemented)
#define PyIndex_Check(obj) ((obj)->ob_type->tp_as_number != NULL && PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_INDEX) && (obj)->ob_type->tp_as_number->nb_index != NULL)
#undef PySequence_Length
#define PySequence_Length PySequence_Size
#define PySequence_Fast_GET_SIZE(o) (PyList_Check(o) ? PyList_GET_SIZE(o) : PyTuple_GET_SIZE(o))
#define PySequence_Fast_GET_ITEM(o,i) (PyList_Check(o) ? PyList_GET_ITEM(o, i) : PyTuple_GET_ITEM(o, i))
#define PySequence_ITEM(o,i) ( Py_TYPE(o)->tp_as_sequence->sq_item(o, i) )
#define PySequence_Fast_ITEMS(sf) (PyList_Check(sf) ? ((PyListObject *)(sf))->ob_item : ((PyTupleObject *)(sf))->ob_item)
#define PY_ITERSEARCH_COUNT 1
#define PY_ITERSEARCH_INDEX 2
#define PY_ITERSEARCH_CONTAINS 3
#undef PySequence_In
#define PySequence_In PySequence_Contains
#undef PyMapping_Length
#define PyMapping_Length PyMapping_Size
#define PyMapping_DelItemString(O,K) PyObject_DelItemString((O),(K))
#define PyMapping_DelItem(O,K) PyObject_DelItem((O),(K))
#define PyMapping_Keys(O) PyObject_CallMethod(O,"keys",NULL)
#define PyMapping_Values(O) PyObject_CallMethod(O,"values",NULL)
#define PyMapping_Items(O) PyObject_CallMethod(O,"items",NULL)
#ifdef __cplusplus
#endif
#endif
