/*
** EPITECH PROJECT, 2025
** hashtable.h
** File description:
** Hash table header file
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H

typedef struct node_s {
    char *key;
    char *value;
    struct node_s *next;
} node_t;

typedef struct hashtable_s {
    int size;
    int (*hash_function)(char *, int);
    node_t **buckets; // Array of buckets, each a linked list of nodes
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

#endif /* HASHTABLE_H */
