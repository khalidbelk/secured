/*
** EPITECH PROJECT, 2025
** my_strcmp.c
** File description:
** my_strcmp
*/

#include "../include/my.h"

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
