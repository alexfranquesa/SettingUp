/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strncpy
*/

#include <string.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (i < n) {
        dest[i] = '\0';
        i++;
    }
}
