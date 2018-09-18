// GGHASH:V6uhwiQUieSsy5mMbqIBJuDyT.IFGAVW1lpZxTxg9Sok000003aa
#ifndef Py_NODE_H
#define Py_NODE_H 
#ifdef __cplusplus
#endif
#define NCH(n) ((n)->n_nchildren)
#define CHILD(n,i) (&(n)->n_child[i])
#define RCHILD(n,i) (CHILD(n, NCH(n) + i))
#define TYPE(n) ((n)->n_type)
#define STR(n) ((n)->n_str)
#define REQ(n,type) assert(TYPE(n) == (type))
#ifdef __cplusplus
#endif
#endif
