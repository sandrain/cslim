#include "test.h"

dict_add (dict_t *this, char *key, data_t *value)
{
        int32_t ret;

        if (!this || !value) {
                do { _gf_msg ("dict",

 "./dict.c"
# 438 "./dict.c"
                , __FUNCTION__,

 440
# 438 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "!this || !value for key=%s", key); } while (0)

                                                                    ;
                return -1;
        }

        pthread_mutex_lock (&this->lock);

        ret = dict_set_lk (this, key, value, 0);

        pthread_mutex_unlock (&this->lock);

        return ret;
}

dict_add_dynstr_with_alloc (dict_t *this, char *key, char *str)
{
        data_t *data = ((void *)0);
        int ret = 0;
        char *alloc_str = ((void *)0);

        alloc_str = gf_strdup (str);
        if (!alloc_str)
                goto out;

        data = data_from_dynstr (alloc_str);
        if (!data) {
                __gf_free (alloc_str);
                ret = -22;
                goto out;
        }

        ret = dict_add (this, key, data);
        if (ret < 0)
                data_destroy (data);

out:
        return ret;
}

dict_allocate_and_serialize (dict_t *this, char **buf, u_int *length)
{
        int ret = -22;
        ssize_t len = 0;

        if (!this || !buf) {
                do { _gf_msg ("dict", "./dict.c", __FUNCTION__, 2762, GF_LOG_DEBUG, 0, 0, 0, "dict OR buf is NULL"); } while (0);
                goto out;
        }

        pthread_mutex_lock (&this->lock);
        {
                len = dict_serialized_length_lk (this);
                if (len < 0) {
                        ret = len;
                        goto unlock;
                }

                *buf = __gf_calloc (1, len, gf_common_mt_char, "gf_common_mt_char");
                if (*buf == ((void *)0)) {
                        ret = -12;
                        goto unlock;
                }

                ret = dict_serialize_lk (this, *buf);
                if (ret < 0) {
                        __gf_free (*buf);
                        *buf = ((void *)0);
                        goto unlock;
                }

                if (length != ((void *)0)) {
                        *length = len;
                }
        }
unlock:
        pthread_mutex_unlock (&this->lock);
out:
        return ret;
}

dict_copy (dict_t *dict,
           dict_t *new)
{
        if (!dict) {
                do { _gf_msg ("dict",
 "./dict.c"
# 1322 "./dict.c"
                , __FUNCTION__,
 1323
# 1322 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return ((void *)0);
        }

        if (!new)
                new = get_new_dict_full (dict->hash_size);

        dict_foreach (dict, dict_copy_one, new);

        return new;
}

dict_copy_with_ref (dict_t *dict,
                    dict_t *new)
{
        dict_t *local_new = ((void *)0);

        do { if (!dict) { (*__errno_location ()) = 22; do { _gf_msg ("dict", "./dict.c", __FUNCTION__, 1356, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "dict"); } while (0); goto fail; } } while (0);

        if (new == ((void *)0)) {
                local_new = dict_new ();
                do { if (!local_new) { (*__errno_location ()) = 22; do { _gf_msg ("dict", "./dict.c", __FUNCTION__, 1360, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "local_new"); } while (0); goto fail; } } while (0);
                new = local_new;
        }

        dict_foreach (dict, dict_copy_one, new);
fail:
        return new;
}

dict_del (dict_t *this, char *key)
{
        int hashval = 0;

        if (!this || !key) {
                do { _gf_msg ("dict",
 "./dict.c"
# 484 "./dict.c"
                , __FUNCTION__,
 485
# 484 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "!this || key=%s", key); } while (0)
                                                                             ;
                return;
        }

        pthread_mutex_lock (&this->lock);




        if (this->hash_size != 1)
                hashval = SuperFastHash (key, strlen (key)) % this->hash_size;

        data_pair_t *pair = this->members[hashval];
        data_pair_t *prev = ((void *)0);

        while (pair) {
                if (strcmp (pair->key, key) == 0) {
                        if (prev)
                                prev->hash_next = pair->hash_next;
                        else
                                this->members[hashval] = pair->hash_next;

                        data_unref (pair->value);

                        if (pair->prev)
                                pair->prev->next = pair->next;
                        else
                                this->members_list = pair->next;

                        if (pair->next)
                                pair->next->prev = pair->prev;

                        __gf_free (pair->key);
                        if (pair == &this->free_pair) {
                                this->free_pair_in_use = _gf_false;
                        }
                        else {
                                mem_put (pair);
                        }
                        this->count--;
                        break;
                }

                prev = pair;
                pair = pair->hash_next;
        }

        pthread_mutex_unlock (&this->lock);

        return;
}

dict_destroy (dict_t *this)
{
        if (!this) {
                do { _gf_msg ("dict",
 "./dict.c"
# 541 "./dict.c"
                , __FUNCTION__,
 542
# 541 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return;
        }

        data_pair_t *pair = this->members_list;
        data_pair_t *prev = this->members_list;

        pthread_mutex_destroy (&this->lock);

        while (prev) {
                pair = pair->next;
                data_unref (prev->value);
                __gf_free (prev->key);
                if (prev != &this->free_pair) {
                        mem_put (prev);
                }
                prev = pair;
        }

        if (this->members != &this->members_internal) {
                mem_put (this->members);
        }

        __gf_free (this->extra_free);
        free (this->extra_stdfree);

        if (!this->is_static)
                mem_put (this);

        return;
}

dict_dump_to_log (dict_t *dict)
{
        int ret = -1;
        char dump[64*1024] = {0,};
        char *format = "(%s:%s)";

        if (!dict) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2926 "./dict.c"
                , __FUNCTION__,
 2927
# 2926 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return;
        }

        ret = dict_dump_to_str (dict, dump, sizeof(dump), format);
        if (ret) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2933 "./dict.c"
                , __FUNCTION__,
 2934
# 2933 "./dict.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 8), "Failed to log dictionary"); } while (0)
                                                   ;
                return;
        }
        do { _gf_msg ("dict",
 "./dict.c"
# 2937 "./dict.c"
        , __FUNCTION__,
 2938
# 2937 "./dict.c"
        , GF_LOG_INFO, 0, 1, (100000 + 1000 + 142), "dict=%p (%s)", dict, dump); } while (0)
                                                     ;

        return;
}

dict_dump_to_statedump (dict_t *dict, char *dict_name, char *domain)
{
        int ret = -1;
        char dump[64*1024] = {0,};
        char key[4096] = {0,};
        char *format = "\n\t%s:%s";

        if (!dict) {
                do { _gf_msg (domain,
 "./dict.c"
# 2952 "./dict.c"
                , __FUNCTION__,
 2953
# 2952 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return;
        }

        ret = dict_dump_to_str (dict, dump, sizeof(dump), format);
        if (ret) {
                do { _gf_msg (domain,
 "./dict.c"
# 2959 "./dict.c"
                , __FUNCTION__,
 2960
# 2959 "./dict.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 8), "Failed to log dictionary %s", dict_name); } while (0)
                                                                 ;
                return;
        }
        { _gf_proc_dump_build_key(key, domain, dict_name); };
        gf_proc_dump_write (key, "%s", dump);

        return;
}

dict_dump_to_str (dict_t *dict, char *dump, int dumpsize, char *format)
{
        int ret = 0;
        int dumplen = 0;
        data_pair_t *trav = ((void *)0);

        for (trav = dict->members_list; trav; trav = trav->next) {
                ret = snprintf (&dump[dumplen], dumpsize - dumplen,
                                format, trav->key, trav->value->data);
                if ((ret == -1) || !ret)
                        return ret;

                dumplen += ret;
        }
        return 0;
}

dict_for_key_value (const char *name, const char *value, size_t size)
{
 dict_t *xattr = ((void *)0);
 int ret = 0;

 xattr = dict_new ();
 if (!xattr)
  return ((void *)0);

 ret = dict_set_static_bin (xattr, (char *)name, (void *)value, size);
 if (ret) {
  dict_destroy (xattr);
  xattr = ((void *)0);
 }

 return xattr;
}

dict_get (dict_t *this, char *key)
{
        data_pair_t *pair;

        if (!this || !key) {
                do { _gf_msg ("dict",

 "./dict.c"
# 460 "./dict.c"
                , __FUNCTION__,

 462
# 460 "./dict.c"
                , GF_LOG_INFO, 22, 1, (100000 + 1000 + 172), "!this || key=%s", (key) ? key : "()"); } while (0)

                                                                        ;
                return ((void *)0);
        }

        pthread_mutex_lock (&this->lock);

        pair = dict_lookup_common (this, key);

        pthread_mutex_unlock (&this->lock);

        if (pair)
                return pair->value;

        return ((void *)0);
}

dict_get_bin (dict_t *this, char *key, void **bin)
{
        data_t * data = ((void *)0);
        int ret = -22;

        if (!this || !key || !bin) {
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret < 0) {
                goto err;
        }

        if (!data || !data->data) {
                goto err;
        }
        *bin = data->data;

err:
        if (data)
                data_unref (data);

        return ret;
}

dict_get_double (dict_t *this, char *key, double *val)
{
        data_t *data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_double_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_int16 (dict_t *this, char *key, int16_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_int16_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_int32 (dict_t *this, char *key, int32_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_int32_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_int64 (dict_t *this, char *key, int64_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_int64_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_int8 (dict_t *this, char *key, int8_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_int8_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_ptr (dict_t *this, char *key, void **ptr)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !ptr) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_ptr_common (data, ptr);
        if (ret != 0) {
                goto err;
        }

err:
        if (data)
                data_unref (data);

        return ret;
}

dict_get_ptr_and_len (dict_t *this, char *key, void **ptr, int *len)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !ptr) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

 *len = data->len;

        ret = data_to_ptr_common (data, ptr);
        if (ret != 0) {
                goto err;
        }

err:
        if (data)
                data_unref (data);

        return ret;
}

dict_get_str (dict_t *this, char *key, char **str)
{
        data_t * data = ((void *)0);
        int ret = -22;

        if (!this || !key || !str) {
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret < 0) {
                goto err;
        }

        if (!data || !data->data) {
                goto err;
        }
        *str = data->data;

err:
        if (data)
                data_unref (data);

        return ret;
}

dict_get_str_boolean (dict_t *this, char *key, int default_val)
{
        data_t *data = ((void *)0);
        gf_boolean_t boo = _gf_false;
        int ret = 0;

        ret = dict_get_with_ref (this, key, &data);
        if (ret < 0) {
                if (ret == -2)
                        ret = default_val;
                else
                        ret = -1;
                goto err;
        }

        do { if (!(data)) { do { _gf_msg ("", "./dict.c", __FUNCTION__, 2352, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "data"); } while (0); } } while (0);

        if (!data->data) {
                ret = -1;
                goto err;
        }

        ret = gf_string2boolean (data->data, &boo);
        if (ret == -1)
                goto err;

        ret = boo;

err:
        if (data)
                data_unref (data);

        return ret;
}

dict_get_uint16 (dict_t *this, char *key, uint16_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_uint16_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_uint32 (dict_t *this, char *key, uint32_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_uint32_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_get_uint64 (dict_t *this, char *key, uint64_t *val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        if (!this || !key || !val) {
                ret = -22;
                goto err;
        }

        ret = dict_get_with_ref (this, key, &data);
        if (ret != 0) {
                goto err;
        }

        ret = data_to_uint64_ptr (data, val);

err:
        if (data)
                data_unref (data);
        return ret;
}

dict_lookup (dict_t *this, char *key, data_t **data)
{
        if (!this || !key || !data) {
                do { _gf_msg ("dict",

 "./dict.c"
# 299 "./dict.c"
                , __FUNCTION__,

 301
# 299 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "!this || !key || " "!data"); } while (0)

                                          ;
                return -1;
        }

        data_pair_t *tmp = ((void *)0);
        pthread_mutex_lock (&this->lock);
        {
                tmp = dict_lookup_common (this, key);
        }
        pthread_mutex_unlock (&this->lock);

        if (!tmp)
                return -1;

        *data = tmp->value;
        return 0;
}

dict_match_everything (dict_t *d, char *k, data_t *v, void *data)
{
        return _gf_true;
}

dict_new (void)
{
        dict_t *dict = ((void *)0);

        dict = get_new_dict_full(1);

        if (dict)
                dict_ref (dict);

        return dict;
}

dict_null_foreach_fn (dict_t *d, char *k,
                      data_t *v, void *tmp)
{
        return 0;
}

dict_ref (dict_t *this)
{
        if (!this) {
                do { _gf_msg ("dict",
 "./dict.c"
# 600 "./dict.c"
                , __FUNCTION__,
 601
# 600 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return ((void *)0);
        }

        pthread_mutex_lock (&this->lock);

        this->refcount++;

        pthread_mutex_unlock (&this->lock);

        return this;
}

dict_remove_foreach_fn (dict_t *d, char *k,
                        data_t *v, void *_tmp)
{
        if (!d || !k) {
                do { _gf_msg ("glusterfs",

 "./dict.c"
# 1168 "./dict.c"
                , __FUNCTION__,

 1170
# 1168 "./dict.c"
                , GF_LOG_WARNING, 22, 0, (100000 + 1000 + 2), "%s is NULL", d?"key":"dictionary"); } while (0)

                                             ;
                return -1;
        }

        dict_del (d, k);
        return 0;
}

dict_reset (dict_t *dict)
{
        int32_t ret = -1;
        if (!dict) {
                do { _gf_msg ("dict",
 "./dict.c"
# 1340 "./dict.c"
                , __FUNCTION__,
 1341
# 1340 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                goto out;
        }
        dict_foreach (dict, dict_remove_foreach_fn, ((void *)0));
        ret = 0;
out:
        return ret;
}

dict_serialize (dict_t *this, char *buf)
{
        int ret = -1;

        if (!this || !buf) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2593 "./dict.c"
                , __FUNCTION__,
 2594
# 2593 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is null!"); } while (0)
                                                                      ;
                goto out;
        }

        pthread_mutex_lock (&this->lock);
        {
                ret = dict_serialize_lk (this, buf);
        }
        pthread_mutex_unlock (&this->lock);
out:
        return ret;
}

dict_serialize_value_with_delim (dict_t *this, char *buf, int32_t *serz_len,
                                 char delimiter)
{
        int ret = -1;

        if (!this || !buf) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2885 "./dict.c"
                , __FUNCTION__,
 2886
# 2885 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is null!"); } while (0)
                                                                      ;
                goto out;
        }

        pthread_mutex_lock (&this->lock);
        {
                ret = dict_serialize_value_with_delim_lk (this, buf, serz_len,
                                                          delimiter);
        }
        pthread_mutex_unlock (&this->lock);
out:
        return ret;
}

dict_serialized_length (dict_t *this)
{
        int ret = -22;

        if (!this) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2561 "./dict.c"
                , __FUNCTION__,
 2562
# 2561 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is null!"); } while (0)
                                                                      ;
                goto out;
        }

        pthread_mutex_lock (&this->lock);
        {
                ret = dict_serialized_length_lk (this);
        }
        pthread_mutex_unlock (&this->lock);

out:
        return ret;
}

dict_set (dict_t *this,
          char *key,
          data_t *value)
{
        int32_t ret;

        if (!this || !value) {
                do { _gf_msg ("dict",

 "./dict.c"
# 416 "./dict.c"
                , __FUNCTION__,

 418
# 416 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "!this || !value for " "key=%s", key); } while (0)

                                                ;
                return -1;
        }

        pthread_mutex_lock (&this->lock);

        ret = dict_set_lk (this, key, value, 1);

        pthread_mutex_unlock (&this->lock);

        return ret;
}

dict_set_bin (dict_t *this, char *key, void *ptr, size_t size)
{
        return dict_set_bin_common (this, key, ptr, size, _gf_false);
}

dict_set_double (dict_t *this, char *key, double val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_double (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_dynptr (dict_t *this, char *key, void *ptr, size_t len)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_dynptr (ptr, len);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_dynstr (dict_t *this, char *key, char *str)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_dynstr (str);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_dynstr_with_alloc (dict_t *this, char *key, const char *str)
{
        char *alloc_str = ((void *)0);
        int ret = -1;

        alloc_str = gf_strdup (str);
        if (!alloc_str)
                return -1;

        ret = dict_set_dynstr (this, key, alloc_str);
        if (ret == -22)
                __gf_free (alloc_str);

        return ret;
}

dict_set_int16 (dict_t *this, char *key, int16_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_int16 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_int32 (dict_t *this, char *key, int32_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_int32 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_int64 (dict_t *this, char *key, int64_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_int64 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_int8 (dict_t *this, char *key, int8_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_int8 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_ptr (dict_t *this, char *key, void *ptr)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_ptr_common (ptr, _gf_false);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_static_bin (dict_t *this, char *key, void *ptr, size_t size)
{
        return dict_set_bin_common (this, key, ptr, size, _gf_true);
}

dict_set_static_ptr (dict_t *this, char *key, void *ptr)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_ptr_common (ptr, _gf_true);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_str (dict_t *this, char *key, char *str)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = str_to_data (str);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_uint16 (dict_t *this, char *key, uint16_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_uint16 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_uint32 (dict_t *this, char *key, uint32_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_uint32 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_set_uint64 (dict_t *this, char *key, uint64_t val)
{
        data_t * data = ((void *)0);
        int ret = 0;

        data = data_from_uint64 (val);
        if (!data) {
                ret = -22;
                goto err;
        }

        ret = dict_set (this, key, data);
        if (ret < 0)
                data_destroy (data);

err:
        return ret;
}

dict_unref (dict_t *this)
{
        int32_t ref;

        if (!this) {
                do { _gf_msg ("dict",
 "./dict.c"
# 580 "./dict.c"
                , __FUNCTION__,
 581
# 580 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "dict is NULL"); } while (0)
                                                                     ;
                return;
        }

        pthread_mutex_lock (&this->lock);

        this->refcount--;
        ref = this->refcount;

        pthread_mutex_unlock (&this->lock);

        if (!ref)
                dict_destroy (this);
}

dict_unserialize (char *orig_buf, int32_t size, dict_t **fill)
{
        char *buf = ((void *)0);
        int ret = -1;
        int32_t count = 0;
        int i = 0;

        data_t * value = ((void *)0);
        char * key = ((void *)0);
        int32_t keylen = 0;
        int32_t vallen = 0;
        int32_t hostord = 0;

        buf = orig_buf;

        if (!buf) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2636 "./dict.c"
                , __FUNCTION__,
 2637
# 2636 "./dict.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "buf is null!"); } while (0)
                                                                     ;
                goto out;
        }

        if (size == 0) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2642 "./dict.c"
                , __FUNCTION__,
 2643
# 2642 "./dict.c"
                , GF_LOG_ERROR, 22, 1, (100000 + 1000 + 172), "size is 0!"); } while (0)
                                                                   ;
                goto out;
        }

        if (!fill) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2648 "./dict.c"
                , __FUNCTION__,
 2649
# 2648 "./dict.c"
                , GF_LOG_ERROR, 22, 1, (100000 + 1000 + 172), "fill is null!"); } while (0)
                                                                      ;
                goto out;
        }

        if (!*fill) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2654 "./dict.c"
                , __FUNCTION__,
 2655
# 2654 "./dict.c"
                , GF_LOG_ERROR, 22, 1, (100000 + 1000 + 172), "*fill is null!"); } while (0)
                                                                       ;
                goto out;
        }

        if ((buf + 4) > (orig_buf + size)) {
                do { _gf_msg ("dict",



 "./dict.c"
# 2660 "./dict.c"
                , __FUNCTION__,



 2664
# 2660 "./dict.c"
                , GF_LOG_ERROR, 0, 1, (100000 + 1000 + 140), "undersized buffer " "passed. available (%lu) < required (%lu)", (long)(orig_buf + size), (long)(buf + 4)); } while (0)



                                                             ;
                goto out;
        }

        memcpy (&hostord, buf, sizeof(hostord));
        count = hton32 (hostord);
        buf += 4;

        if (count < 0) {
                do { _gf_msg ("dict",
 "./dict.c"
# 2673 "./dict.c"
                , __FUNCTION__,
 2674
# 2673 "./dict.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 3), "count (%d) <= 0", count); } while (0)
                                                 ;
                goto out;
        }


        (*fill)->count = 0;

        for (i = 0; i < count; i++) {
                if ((buf + 4) > (orig_buf + size)) {
                        do { _gf_msg ("dict",




 "./dict.c"
# 2683 "./dict.c"
                        , __FUNCTION__,




 2688
# 2683 "./dict.c"
                        , GF_LOG_ERROR, 0, 1, (100000 + 1000 + 140), "undersized " "buffer passed. available (%lu) < " "required (%lu)", (long)(orig_buf + size), (long)(buf + 4)); } while (0)




                                                                              ;
                        goto out;
                }
                memcpy (&hostord, buf, sizeof(hostord));
                keylen = hton32 (hostord);
                buf += 4;

                if ((buf + 4) > (orig_buf + size)) {
                        do { _gf_msg ("dict",




 "./dict.c"
# 2696 "./dict.c"
                        , __FUNCTION__,




 2701
# 2696 "./dict.c"
                        , GF_LOG_ERROR, 0, 1, (100000 + 1000 + 140), "undersized " "buffer passed. available (%lu) < " "required (%lu)", (long)(orig_buf + size), (long)(buf + 4)); } while (0)




                                                                              ;
                        goto out;
                }
                memcpy (&hostord, buf, sizeof(hostord));
                vallen = hton32 (hostord);
                buf += 4;

                if ((buf + keylen) > (orig_buf + size)) {
                        do { _gf_msg ("dict",




 "./dict.c"
# 2709 "./dict.c"
                        , __FUNCTION__,




 2714
# 2709 "./dict.c"
                        , GF_LOG_ERROR, 0, 1, (100000 + 1000 + 140), "undersized buffer passed. " "available (%lu) < required (%lu)", (long)(orig_buf + size), (long)(buf + keylen)); } while (0)




                                                               ;
                        goto out;
                }
                key = buf;
                buf += keylen + 1;

                if ((buf + vallen) > (orig_buf + size)) {
                        do { _gf_msg ("dict",




 "./dict.c"
# 2721 "./dict.c"
                        , __FUNCTION__,




 2726
# 2721 "./dict.c"
                        , GF_LOG_ERROR, 0, 1, (100000 + 1000 + 140), "undersized buffer passed. " "available (%lu) < required (%lu)", (long)(orig_buf + size), (long)(buf + vallen)); } while (0)




                                                               ;
                        goto out;
                }
                value = get_new_data ();
                value->len = vallen;
                value->data = memdup (buf, vallen);
                value->is_static = 0;
                buf += vallen;

                dict_add (*fill, key, value);
        }

        ret = 0;
out:
        return ret;
}

