/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strupcase
*/

#include <unistd.h>

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}
