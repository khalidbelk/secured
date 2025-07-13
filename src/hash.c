/*
** EPITECH PROJECT, 2025
** hash.c
** File description:
** hash
*/

#include "../include/my.h"

/* DJB2 Hash method */
/* Note: Normally we'd use 'unsigned long' for the return type
         but here we cast to 'int' to match the subject's required signature.
         Keeping the unused 'len' param for the same reason, even though DJB2
         doesn't need it.
*/
int hash(char *key, int len)
{
    unsigned long hash_value = 5381;
    int c;

    while (*key != '\0') {
        c = *key;
        hash_value = hash_value * 33 + c;
        key++;
    }
    return (int) (hash_value % INT_MAX);
}
