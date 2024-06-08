/*
** EPITECH PROJECT, 2023
** cpoolday03
** File description:
** my_isneg
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}
