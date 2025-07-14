/*
** EPITECH PROJECT, 2025
** my_putchar.c
** File description:
** my_putchar
*/

#include "../include/my.h"

int my_putchar(int c)
{
    char ch = (char) c;

    if (write(1, &ch, 1) == -1) {
        return -1;
    }
    return c;
}
