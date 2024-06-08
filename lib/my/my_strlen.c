/*
** EPITECH PROJECT, 2023
** cpoolday04
** File description:
** my_strlen
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}
