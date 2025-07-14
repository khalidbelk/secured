/*
** EPITECH PROJECT, 2025
** my_puts.c
** File description:
** my_puts
*/

#include "../include/my.h"

/* For more flexibility than stdlib's 'puts',
    this one doesn't add a \n at the end.
    It isn't exactly 'fputs' either, because it always
    writes to stdout via my_putchar.
*/
int my_puts(const char *s)
{
    if (!s)
        return 84;
    for (int i = 0; s[i] != '\0'; i++) {
        if (my_putchar(s[i]) == -1) {
            return -1;
        }
    }
    return 0;
}
