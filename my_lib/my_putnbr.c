/*
** EPITECH PROJECT, 2025
** my_putnbr.c
** File description:
** my_putnbr
*/

#include "../include/my.h"

void my_putnbr(int nbr)
{
    if (nbr == INT_MIN) {
        my_putchar('-');
        my_putnbr(- (nbr / 10));
        my_putchar('0' + -(nbr % 10));
        return;
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr >= 10)
        my_putnbr(nbr / 10);
    my_putchar('0' + (nbr % 10));
}
