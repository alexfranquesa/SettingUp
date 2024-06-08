/*
** EPITECH PROJECT, 2023
** cpoolday04
** File description:
** my_getnbr
*/

#include <unistd.h>

int checker(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int check2(char c, int v)
{
    if (c == '+' && v != 0)
        return (0);
    if (c == '-' && v != 0)
        return (0);
    if (c != '+' && c != '-')
        return (0);
    return (1);
}

int my_getnbr(char const *str)
{
    int v = 0;
    int i = 0;
    int s = 1;

    while (str[i] != '\0') {
        if (str[i] == '-')
            s *= (-1);
        if (str[i] == '+')
            s = 1;
        if (!checker(str[i]) && !check2(str[i], v))
            return (v * s);
        if (checker(str[i]))
            v = v * 10 + (str[i] - '0');
        i++;
    }
    return (v * s);
}
