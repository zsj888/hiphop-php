/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_ARRAY_H__
#define __EXTPROFILE_ARRAY_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_array.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_array_change_key_case(CVarRef input, bool upper = false) {
  FUNCTION_INJECTION_BUILTIN(array_change_key_case);
  return f_array_change_key_case(input, upper);
}

inline Variant x_array_chunk(CVarRef input, int size, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_chunk);
  return f_array_chunk(input, size, preserve_keys);
}

inline Variant x_array_combine(CVarRef keys, CVarRef values) {
  FUNCTION_INJECTION_BUILTIN(array_combine);
  return f_array_combine(keys, values);
}

inline Variant x_array_count_values(CVarRef input) {
  FUNCTION_INJECTION_BUILTIN(array_count_values);
  return f_array_count_values(input);
}

inline Variant x_array_fill_keys(CVarRef keys, CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(array_fill_keys);
  return f_array_fill_keys(keys, value);
}

inline Variant x_array_fill(int start_index, int num, CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(array_fill);
  return f_array_fill(start_index, num, value);
}

inline Variant x_array_filter(CVarRef input, CVarRef callback = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_filter);
  return f_array_filter(input, callback);
}

inline Variant x_array_flip(CVarRef trans) {
  FUNCTION_INJECTION_BUILTIN(array_flip);
  return f_array_flip(trans);
}

inline bool x_array_key_exists(CVarRef key, CVarRef search) {
  FUNCTION_INJECTION_BUILTIN(array_key_exists);
  return f_array_key_exists(key, search);
}

inline Variant x_array_keys(CVarRef input, CVarRef search_value = null_variant, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(array_keys);
  return f_array_keys(input, search_value, strict);
}

inline Variant x_array_map(int _argc, CVarRef callback, CVarRef arr1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_map);
  return f_array_map(_argc, callback, arr1, _argv);
}

inline Variant x_array_merge_recursive(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_merge_recursive);
  return f_array_merge_recursive(_argc, array1, _argv);
}

inline Variant x_array_merge(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_merge);
  return f_array_merge(_argc, array1, _argv);
}

inline Variant x_array_replace_recursive(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_replace_recursive);
  return f_array_replace_recursive(_argc, array1, _argv);
}

inline Variant x_array_replace(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_replace);
  return f_array_replace(_argc, array1, _argv);
}

inline bool x_array_multisort(int _argc, Variant ar1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_multisort);
  return f_array_multisort(_argc, ref(ar1), _argv);
}

inline Variant x_array_pad(CVarRef input, int pad_size, CVarRef pad_value) {
  FUNCTION_INJECTION_BUILTIN(array_pad);
  return f_array_pad(input, pad_size, pad_value);
}

inline Variant x_array_pop(Variant array) {
  FUNCTION_INJECTION_BUILTIN(array_pop);
  return f_array_pop(ref(array));
}

inline Variant x_array_product(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_product);
  return f_array_product(array);
}

inline Variant x_array_push(int _argc, Variant array, CVarRef var, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_push);
  return f_array_push(_argc, ref(array), var, _argv);
}

inline Variant x_array_rand(CVarRef input, int num_req = 1) {
  FUNCTION_INJECTION_BUILTIN(array_rand);
  return f_array_rand(input, num_req);
}

inline Variant x_array_reduce(CVarRef input, CVarRef callback, CVarRef initial = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_reduce);
  return f_array_reduce(input, callback, initial);
}

inline Variant x_array_reverse(CVarRef array, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_reverse);
  return f_array_reverse(array, preserve_keys);
}

inline Variant x_array_search(CVarRef needle, CVarRef haystack, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(array_search);
  return f_array_search(needle, haystack, strict);
}

inline Variant x_array_shift(Variant array) {
  FUNCTION_INJECTION_BUILTIN(array_shift);
  return f_array_shift(ref(array));
}

inline Variant x_array_slice(CVarRef array, int offset, CVarRef length = null_variant, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_slice);
  return f_array_slice(array, offset, length, preserve_keys);
}

inline Variant x_array_splice(Variant input, int offset, CVarRef length = null_variant, CVarRef replacement = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_splice);
  return f_array_splice(ref(input), offset, length, replacement);
}

inline Variant x_array_sum(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_sum);
  return f_array_sum(array);
}

inline Variant x_array_unique(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_unique);
  return f_array_unique(array);
}

inline int x_array_unshift(int _argc, Variant array, CVarRef var, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_unshift);
  return f_array_unshift(_argc, ref(array), var, _argv);
}

inline Variant x_array_values(CVarRef input) {
  FUNCTION_INJECTION_BUILTIN(array_values);
  return f_array_values(input);
}

inline bool x_array_walk_recursive(Variant input, CVarRef funcname, CVarRef userdata = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_walk_recursive);
  return f_array_walk_recursive(ref(input), funcname, userdata);
}

inline bool x_array_walk(Variant input, CVarRef funcname, CVarRef userdata = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_walk);
  return f_array_walk(ref(input), funcname, userdata);
}

inline Array x_compact(int _argc, CVarRef varname, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(compact);
  return f_compact(_argc, varname, _argv);
}

inline bool x_shuffle(Variant array) {
  FUNCTION_INJECTION_BUILTIN(shuffle);
  return f_shuffle(ref(array));
}

inline int x_count(CVarRef var, bool recursive = false) {
  FUNCTION_INJECTION_BUILTIN(count);
  return f_count(var, recursive);
}

inline int x_sizeof(CVarRef var, bool recursive = false) {
  FUNCTION_INJECTION_BUILTIN(sizeof);
  return f_sizeof(var, recursive);
}

inline Variant x_each(Variant array) {
  FUNCTION_INJECTION_BUILTIN(each);
  return f_each(ref(array));
}

inline Variant x_current(Variant array) {
  FUNCTION_INJECTION_BUILTIN(current);
  return f_current(ref(array));
}

inline Variant x_next(Variant array) {
  FUNCTION_INJECTION_BUILTIN(next);
  return f_next(ref(array));
}

inline Variant x_pos(Variant array) {
  FUNCTION_INJECTION_BUILTIN(pos);
  return f_pos(ref(array));
}

inline Variant x_prev(Variant array) {
  FUNCTION_INJECTION_BUILTIN(prev);
  return f_prev(ref(array));
}

inline Variant x_reset(Variant array) {
  FUNCTION_INJECTION_BUILTIN(reset);
  return f_reset(ref(array));
}

inline Variant x_end(Variant array) {
  FUNCTION_INJECTION_BUILTIN(end);
  return f_end(ref(array));
}

inline bool x_in_array(CVarRef needle, CVarRef haystack, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(in_array);
  return f_in_array(needle, haystack, strict);
}

inline Variant x_key(Variant array) {
  FUNCTION_INJECTION_BUILTIN(key);
  return f_key(ref(array));
}

inline Variant x_range(CVarRef low, CVarRef high, CVarRef step = 1) {
  FUNCTION_INJECTION_BUILTIN(range);
  return f_range(low, high, step);
}

inline Variant x_array_diff(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff);
  return f_array_diff(_argc, array1, array2, _argv);
}

inline Variant x_array_udiff(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff);
  return f_array_udiff(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_diff_assoc(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_assoc);
  return f_array_diff_assoc(_argc, array1, array2, _argv);
}

inline Variant x_array_diff_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_uassoc);
  return f_array_diff_uassoc(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_udiff_assoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff_assoc);
  return f_array_udiff_assoc(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_udiff_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff_uassoc);
  return f_array_udiff_uassoc(_argc, array1, array2, data_compare_func, key_compare_func, _argv);
}

inline Variant x_array_diff_key(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_key);
  return f_array_diff_key(_argc, array1, array2, _argv);
}

inline Variant x_array_diff_ukey(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_ukey);
  return f_array_diff_ukey(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_intersect(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect);
  return f_array_intersect(_argc, array1, array2, _argv);
}

inline Variant x_array_uintersect(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect);
  return f_array_uintersect(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_intersect_assoc(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_assoc);
  return f_array_intersect_assoc(_argc, array1, array2, _argv);
}

inline Variant x_array_intersect_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_uassoc);
  return f_array_intersect_uassoc(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_uintersect_assoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect_assoc);
  return f_array_uintersect_assoc(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_uintersect_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect_uassoc);
  return f_array_uintersect_uassoc(_argc, array1, array2, data_compare_func, key_compare_func, _argv);
}

inline Variant x_array_intersect_key(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_key);
  return f_array_intersect_key(_argc, array1, array2, _argv);
}

inline Variant x_array_intersect_ukey(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_ukey);
  return f_array_intersect_ukey(_argc, array1, array2, key_compare_func, _argv);
}

inline bool x_sort(Variant array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(sort);
  return f_sort(ref(array), sort_flags, use_collator);
}

inline bool x_rsort(Variant array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(rsort);
  return f_rsort(ref(array), sort_flags, use_collator);
}

inline bool x_asort(Variant array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(asort);
  return f_asort(ref(array), sort_flags, use_collator);
}

inline bool x_arsort(Variant array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(arsort);
  return f_arsort(ref(array), sort_flags, use_collator);
}

inline bool x_ksort(Variant array, int sort_flags = 0) {
  FUNCTION_INJECTION_BUILTIN(ksort);
  return f_ksort(ref(array), sort_flags);
}

inline bool x_krsort(Variant array, int sort_flags = 0) {
  FUNCTION_INJECTION_BUILTIN(krsort);
  return f_krsort(ref(array), sort_flags);
}

inline bool x_usort(Variant array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(usort);
  return f_usort(ref(array), cmp_function);
}

inline bool x_uasort(Variant array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(uasort);
  return f_uasort(ref(array), cmp_function);
}

inline bool x_uksort(Variant array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(uksort);
  return f_uksort(ref(array), cmp_function);
}

inline Variant x_natsort(Variant array) {
  FUNCTION_INJECTION_BUILTIN(natsort);
  return f_natsort(ref(array));
}

inline Variant x_natcasesort(Variant array) {
  FUNCTION_INJECTION_BUILTIN(natcasesort);
  return f_natcasesort(ref(array));
}

inline String x_i18n_loc_get_default() {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_get_default);
  return f_i18n_loc_get_default();
}

inline bool x_i18n_loc_set_default(CStrRef locale) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_default);
  return f_i18n_loc_set_default(locale);
}

inline bool x_i18n_loc_set_attribute(int64 attr, int64 val) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_attribute);
  return f_i18n_loc_set_attribute(attr, val);
}

inline bool x_i18n_loc_set_strength(int64 strength) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_strength);
  return f_i18n_loc_set_strength(strength);
}

inline Variant x_i18n_loc_get_error_code() {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_get_error_code);
  return f_i18n_loc_get_error_code();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_ARRAY_H__