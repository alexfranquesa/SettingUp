/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_str_isprintable
*/

#include <unistd.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}
