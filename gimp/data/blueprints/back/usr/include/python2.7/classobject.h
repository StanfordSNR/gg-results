// GGHASH:Visy.QMxvunKVTmEOnTKOITD_mjElV_Ar0C9Yz.ienxk00000bba
#ifndef Py_CLASSOBJECT_H
#define Py_CLASSOBJECT_H 
#ifdef __cplusplus
#endif
#define PyClass_Check(op) ((op)->ob_type == &PyClass_Type)
#define PyInstance_Check(op) ((op)->ob_type == &PyInstance_Type)
#define PyMethod_Check(op) ((op)->ob_type == &PyMethod_Type)
#define PyMethod_GET_FUNCTION(meth) (((PyMethodObject *)meth) -> im_func)
#define PyMethod_GET_SELF(meth) (((PyMethodObject *)meth) -> im_self)
#define PyMethod_GET_CLASS(meth) (((PyMethodObject *)meth) -> im_class)
#ifdef __cplusplus
#endif
#endif
