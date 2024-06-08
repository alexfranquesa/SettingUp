/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strstr
*/

#include <unistd.h>
#include <stdio.h>

char *my_strstr(char *str, const char *to_find)
{
    char *p1 = str;
    const char *p2 = to_find;

    if (*to_find == '\0') {
        return str;
    }
    while (*str != '\0') {
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            return str;
        }
        str++;
    }
    return NULL;
}
