/*
** EPITECH PROJECT, 2025
** ht_handling.c
** File description:
** ht_handling
*/

#include "../include/my.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int index = ht->hash_function(key, ht->size) % ht->size;
    node_t *node = ht->buckets[index];

    while (node) {
        if (strcmp(key, node->key) == 0) {
            return node->value;
        }
        node = node->next;
    }
    return NULL;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_value = ht->hash_function(key, ht->size);
    int index = hash_value % ht->size;
    node_t *node = ht->buckets[index];
    node_t *new_node;

    while (node) {
        if (strcmp(node->key, key) == 0) {
            node->value = value;
            return 0;
        }
        node = node->next;
    }
    new_node = malloc(sizeof(node_t));
    if (!new_node)
        return 84;
    new_node->key = key;
    new_node->value = value;
    new_node->next = ht->buckets[index];
    ht->buckets[index] = new_node;
    return 0;
}

static void remove_node(hashtable_t *ht, int index,
    node_t *prev, node_t *node)
{
    if (prev) {
        prev->next = node->next;
    } else {
        ht->buckets[index] = node->next;
    }
    free(node);
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hash_value = ht->hash_function(key, ht->size);
    int index = hash_value % ht->size;
    node_t *node = ht->buckets[index];
    node_t *prev = NULL;

    while (node) {
        if (strcmp(key, node->key) == 0) {
            remove_node(ht, index, prev, node);
            return 0;
        }
        prev = node;
        node = node->next;
    }
    return 1;
}

void ht_dump(hashtable_t *ht)
{
    node_t *node;
    int hash_value;

    for (int index = 0; index < ht->size; index++) {
        printf("[%i]: \n", index);
        node = ht->buckets[index];
        while (node) {
            hash_value = ht->hash_function(node->key, ht->size);
            printf("> %d - %s\n", hash_value, node->value);
            node = node->next;
        }
    }
}
