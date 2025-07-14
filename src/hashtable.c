/*
** EPITECH PROJECT, 2025
** hashtable.c
** File description:
** hashtable
*/

#include "../include/hashtable.h"

static void handle_len_error(void)
{
    my_puts("The size of the hashtable should be greater ");
    my_puts("or equal to 1.\n");
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *hashtable;

    if (len < 1) {
        handle_len_error();
        return NULL;
    }
    hashtable = malloc(sizeof(hashtable_t));
    if (!hashtable)
        return NULL;
    hashtable->size = len;
    hashtable->hash_function = hash;
    hashtable->buckets = malloc(sizeof(node_t *) * len);
    if (!hashtable->buckets) {
        free(hashtable);
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        hashtable->buckets[i] = NULL;
    }
    return hashtable;
}

static void delete_nodes(hashtable_t *ht)
{
    node_t *node;
    node_t *tmp;

    for (int i = 0; i < ht->size; i++) {
        node = ht->buckets[i];
        while (node) {
            tmp = node;
            node = node->next;
            free(tmp);
        }
    }
}

void delete_hashtable(hashtable_t *ht)
{
    delete_nodes(ht);
    free(ht->buckets);
    free(ht);
}
