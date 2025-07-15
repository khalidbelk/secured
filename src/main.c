/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** main
*/

#include "../include/hashtable.h"

int main(int argc, char **argv)
{
    int size = 10;
    hashtable_t *hashtable = new_hashtable(&hash, size);

    if (!hashtable)
        return 84;
    ht_insert(hashtable, "Vision", "./Documents/Tournament/Modules/Vision");
    ht_insert(hashtable, "Kratos",
        "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(hashtable, "<3", "+33 6 31 45 61 23 71");
    ht_insert(hashtable, "hello", "./Documents/Tournament/Modules/hello");
    ht_insert(hashtable, "Key1", "+33 6 32 45 61 23 72");
    ht_insert(hashtable, "Key2", "+33 6 33 45 61 23 73");
    ht_dump(hashtable);
    ht_delete(hashtable, "hello");
    printf("\nLooking for \"%s\": \"%s\"\n", "hello",
        ht_search(hashtable, "hello"));
    printf("Looking for \"%s\": \"%s\"\n", "Vision",
        ht_search(hashtable, "Vision"));
    delete_hashtable(hashtable);
    return 0;
}
