/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_str_isnum
*/

#include <unistd.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (str[i] < '0' && str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}
