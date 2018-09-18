// GGHASH:VMPiEX.1vRXeP8yjDyLgAsS84N6SWVP1_aAbC9KHFfM400001865
#ifndef __G_DATASET_H__
#define __G_DATASET_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gquark.h>
#define G_DATALIST_FLAGS_MASK 0x3
#define g_datalist_id_set_data(dl,q,d) g_datalist_id_set_data_full ((dl), (q), (d), NULL)
#define g_datalist_id_remove_data(dl,q) g_datalist_id_set_data ((dl), (q), NULL)
#define g_datalist_set_data_full(dl,k,d,f) g_datalist_id_set_data_full ((dl), g_quark_from_string (k), (d), (f))
#define g_datalist_remove_no_notify(dl,k) g_datalist_id_remove_no_notify ((dl), g_quark_try_string (k))
#define g_datalist_set_data(dl,k,d) g_datalist_set_data_full ((dl), (k), (d), NULL)
#define g_datalist_remove_data(dl,k) g_datalist_id_set_data ((dl), g_quark_try_string (k), NULL)
#define g_dataset_id_set_data(l,k,d) g_dataset_id_set_data_full ((l), (k), (d), NULL)
#define g_dataset_id_remove_data(l,k) g_dataset_id_set_data ((l), (k), NULL)
#define g_dataset_get_data(l,k) (g_dataset_id_get_data ((l), g_quark_try_string (k)))
#define g_dataset_set_data_full(l,k,d,f) g_dataset_id_set_data_full ((l), g_quark_from_string (k), (d), (f))
#define g_dataset_remove_no_notify(l,k) g_dataset_id_remove_no_notify ((l), g_quark_try_string (k))
#define g_dataset_set_data(l,k,d) g_dataset_set_data_full ((l), (k), (d), NULL)
#define g_dataset_remove_data(l,k) g_dataset_id_set_data ((l), g_quark_try_string (k), NULL)
#endif
