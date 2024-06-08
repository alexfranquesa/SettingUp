/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strlowcase
*/

#include <unistd.h>

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
