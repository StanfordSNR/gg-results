// GGHASH:V6s9lP5oafbjNyZe7PxWBB_MErVmgggpForhy3XhadMw00004187
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_CLIST_C__) || defined (__GTK_CTREE_C__)
#ifndef __GTK_CTREE_H__
#define __GTK_CTREE_H__ 
#include <gtk/gtkclist.h>
#define GTK_TYPE_CTREE (gtk_ctree_get_type ())
#define GTK_CTREE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CTREE, GtkCTree))
#define GTK_CTREE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CTREE, GtkCTreeClass))
#define GTK_IS_CTREE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CTREE))
#define GTK_IS_CTREE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CTREE))
#define GTK_CTREE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CTREE, GtkCTreeClass))
#define GTK_CTREE_ROW(_node_) ((GtkCTreeRow *)(((GList *)(_node_))->data))
#define GTK_CTREE_NODE(_node_) ((GtkCTreeNode *)((_node_)))
#define GTK_CTREE_NODE_NEXT(_nnode_) ((GtkCTreeNode *)(((GList *)(_nnode_))->next))
#define GTK_CTREE_NODE_PREV(_pnode_) ((GtkCTreeNode *)(((GList *)(_pnode_))->prev))
#define GTK_CTREE_FUNC(_func_) ((GtkCTreeFunc)(_func_))
#define GTK_TYPE_CTREE_NODE (gtk_ctree_node_get_type ())
#define gtk_ctree_set_reorderable(t,r) gtk_clist_set_reorderable((GtkCList*) (t),(r))
#endif
#endif
