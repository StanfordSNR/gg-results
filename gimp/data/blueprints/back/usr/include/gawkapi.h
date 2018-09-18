// GGHASH:V_qbJPhTsrNNtFKxbVC8ENqkcoM7w1KCCAYFwM_SjP.M0000793e
#ifndef _GAWK_API_H
#define _GAWK_API_H 
#ifdef __cplusplus
#endif
#ifdef GAWK
#define awk_const 
#else
#define awk_const const
#endif
#define INVALID_HANDLE (-1)
#define gawk_api_major_version 1
#define gawk_api_minor_version 1
#define str_value u.s
#define num_value u.d
#define array_cookie u.a
#define scalar_cookie u.scl
#define value_cookie u.vc
#define DO_FLAGS_SIZE 6
#define gawk_do_lint 0
#define gawk_do_traditional 1
#define gawk_do_profile 2
#define gawk_do_sandbox 3
#define gawk_do_debug 4
#define gawk_do_mpfr 5
#ifndef GAWK
#define do_lint (api->do_flags[gawk_do_lint])
#define do_traditional (api->do_flags[gawk_do_traditional])
#define do_profile (api->do_flags[gawk_do_profile])
#define do_sandbox (api->do_flags[gawk_do_sandbox])
#define do_debug (api->do_flags[gawk_do_debug])
#define do_mpfr (api->do_flags[gawk_do_mpfr])
#define get_argument(count,wanted,result) (api->api_get_argument(ext_id, count, wanted, result))
#define set_argument(count,new_array) (api->api_set_argument(ext_id, count, new_array))
#define fatal api->api_fatal
#define warning api->api_warning
#define lintwarn api->api_lintwarn
#define register_input_parser(parser) (api->api_register_input_parser(ext_id, parser))
#define register_output_wrapper(wrapper) (api->api_register_output_wrapper(ext_id, wrapper))
#define register_two_way_processor(processor) (api->api_register_two_way_processor(ext_id, processor))
#define update_ERRNO_int(e) (api->api_update_ERRNO_int(ext_id, e))
#define update_ERRNO_string(str) (api->api_update_ERRNO_string(ext_id, str))
#define unset_ERRNO() (api->api_unset_ERRNO(ext_id))
#define add_ext_func(ns,func) (api->api_add_ext_func(ext_id, ns, func))
#define awk_atexit(funcp,arg0) (api->api_awk_atexit(ext_id, funcp, arg0))
#define sym_lookup(name,wanted,result) (api->api_sym_lookup(ext_id, name, wanted, result))
#define sym_lookup_scalar(scalar_cookie,wanted,result) (api->api_sym_lookup_scalar(ext_id, scalar_cookie, wanted, result))
#define sym_update(name,value) (api->api_sym_update(ext_id, name, value))
#define sym_update_scalar(scalar_cookie,value) (api->api_sym_update_scalar)(ext_id, scalar_cookie, value)
#define get_array_element(array,index,wanted,result) (api->api_get_array_element(ext_id, array, index, wanted, result))
#define set_array_element(array,index,value) (api->api_set_array_element(ext_id, array, index, value))
#define set_array_element_by_elem(array,elem) (api->api_set_array_element(ext_id, array, & (elem)->index, & (elem)->value))
#define del_array_element(array,index) (api->api_del_array_element(ext_id, array, index))
#define get_element_count(array,count_p) (api->api_get_element_count(ext_id, array, count_p))
#define create_array() (api->api_create_array(ext_id))
#define clear_array(array) (api->api_clear_array(ext_id, array))
#define flatten_array(array,data) (api->api_flatten_array(ext_id, array, data))
#define release_flattened_array(array,data) (api->api_release_flattened_array(ext_id, array, data))
#define gawk_malloc(size) (api->api_malloc(size))
#define gawk_calloc(nmemb,size) (api->api_calloc(nmemb, size))
#define gawk_realloc(ptr,size) (api->api_realloc(ptr, size))
#define gawk_free(ptr) (api->api_free(ptr))
#define create_value(value,result) (api->api_create_value(ext_id, value,result))
#define release_value(value) (api->api_release_value(ext_id, value))
#define register_ext_version(version) (api->api_register_ext_version(ext_id, version))
#define emalloc(pointer,type,size,message) do { if ((pointer = (type) gawk_malloc(size)) == 0) fatal(ext_id, "%s: malloc of %d bytes failed\n", message, size); } while(0)
#define erealloc(pointer,type,size,message) do { if ((pointer = (type) gawk_realloc(pointer, size)) == 0) fatal(ext_id, "%s: realloc of %d bytes failed\n", message, size); } while(0)
#define make_const_string(str,len,result) r_make_string(api, ext_id, str, len, 1, result)
#define make_malloced_string(str,len,result) r_make_string(api, ext_id, str, len, 0, result)
#if 0
#endif
#define dl_load_func(func_table,extension,name_space) int dl_load(const gawk_api_t *const api_p, awk_ext_id_t id) { size_t i, j; int errors = 0; api = api_p; ext_id = id; if (api->major_version != GAWK_API_MAJOR_VERSION || api->minor_version < GAWK_API_MINOR_VERSION) { fprintf(stderr, #extension ": version mismatch with gawk!\n"); fprintf(stderr, "\tmy version (%d, %d), gawk version (%d, %d)\n", GAWK_API_MAJOR_VERSION, GAWK_API_MINOR_VERSION, api->major_version, api->minor_version); exit(1); } for (i = 0, j = sizeof(func_table) / sizeof(func_table[0]); i < j; i++) { if (func_table[i].name == NULL) break; if (! add_ext_func(name_space, & func_table[i])) { warning(ext_id, #extension ": could not add %s\n", func_table[i].name); errors++; } } if (init_func != NULL) { if (! init_func()) { warning(ext_id, #extension ": initialization function failed\n"); errors++; } } if (ext_version != NULL) register_ext_version(ext_version); return (errors == 0); }
#endif
#ifdef __cplusplus
#endif
#endif
