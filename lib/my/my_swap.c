/*
** EPITECH PROJECT, 2023
** cpoolday04
** File description:
** my_swap
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
