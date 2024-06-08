/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_str_isupper
*/

#include <unistd.h>

int my_str_isupper(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] > 64 && str[count] < 91) {
        } else {
            return (0);
        }
        count++;
    }
    return (1);
}
