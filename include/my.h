/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** Lib header file
*/

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#ifndef MY_H
    #define MY_H

/* Implemented using the original function signatures */
int my_putchar(int c);
int my_puts(const char *s);
int my_strcmp(const char *s1, const char *s2);

/* Custom, not from stdlib */
void my_putnbr(int nbr);

#endif
