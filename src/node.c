/*
** EPITECH PROJECT, 2025
** node.c
** File description:
** Utility functions related to hashtable nodes
*/

#include "../include/hashtable.h"

void remove_node(hashtable_t *ht, int index,
    node_t *prev, node_t *node)
{
    if (prev) {
        prev->next = node->next;
    } else {
        ht->buckets[index] = node->next;
    }
    free(node);
}

void print_node(int hash_value, node_t *node)
{
    my_puts("> ");
    my_putnbr(hash_value);
    my_puts(" - ");
    my_puts(node->value);
    my_putchar('\n');
}
