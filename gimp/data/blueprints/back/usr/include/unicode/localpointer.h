// GGHASH:VrvxD72mgvZLi.lcphvEcNlgVrS3BHFAHNkYzll87cbs000048c0
#ifndef __LOCALPOINTER_H__
#define __LOCALPOINTER_H__ 
#include "unicode/utypes.h"
#if U_SHOW_CPLUSPLUS_API
#if U_HAVE_PLACEMENT_NEW
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if U_HAVE_RVALUE_REFERENCES
#define U_DEFINE_LOCAL_OPEN_POINTER(LocalPointerClassName,Type,closeFunction) class LocalPointerClassName : public LocalPointerBase<Type> { public: using LocalPointerBase<Type>::operator*; using LocalPointerBase<Type>::operator->; explicit LocalPointerClassName(Type *p=NULL) : LocalPointerBase<Type>(p) {} LocalPointerClassName(LocalPointerClassName &&src) U_NOEXCEPT : LocalPointerBase<Type>(src.ptr) { src.ptr=NULL; } ~LocalPointerClassName() { if (ptr != NULL) { closeFunction(ptr); } } LocalPointerClassName &operator=(LocalPointerClassName &&src) U_NOEXCEPT { return moveFrom(src); } LocalPointerClassName &moveFrom(LocalPointerClassName &src) U_NOEXCEPT { if (ptr != NULL) { closeFunction(ptr); } LocalPointerBase<Type>::ptr=src.ptr; src.ptr=NULL; return *this; } void swap(LocalPointerClassName &other) U_NOEXCEPT { Type *temp=LocalPointerBase<Type>::ptr; LocalPointerBase<Type>::ptr=other.ptr; other.ptr=temp; } friend inline void swap(LocalPointerClassName &p1, LocalPointerClassName &p2) U_NOEXCEPT { p1.swap(p2); } void adoptInstead(Type *p) { if (ptr != NULL) { closeFunction(ptr); } ptr=p; } }
#else
#define U_DEFINE_LOCAL_OPEN_POINTER(LocalPointerClassName,Type,closeFunction) class LocalPointerClassName : public LocalPointerBase<Type> { public: using LocalPointerBase<Type>::operator*; using LocalPointerBase<Type>::operator->; explicit LocalPointerClassName(Type *p=NULL) : LocalPointerBase<Type>(p) {} ~LocalPointerClassName() { closeFunction(ptr); } LocalPointerClassName &moveFrom(LocalPointerClassName &src) U_NOEXCEPT { if (ptr != NULL) { closeFunction(ptr); } LocalPointerBase<Type>::ptr=src.ptr; src.ptr=NULL; return *this; } void swap(LocalPointerClassName &other) U_NOEXCEPT { Type *temp=LocalPointerBase<Type>::ptr; LocalPointerBase<Type>::ptr=other.ptr; other.ptr=temp; } friend inline void swap(LocalPointerClassName &p1, LocalPointerClassName &p2) U_NOEXCEPT { p1.swap(p2); } void adoptInstead(Type *p) { if (ptr != NULL) { closeFunction(ptr); } ptr=p; } }
#endif
#endif
#endif
