/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strcmp
*/

#include <unistd.h>

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    while (s1[count] != '\0') {
        if (s1[count] < s2[count])
            return (1);
        if (s1[count] > s2[count])
            return (-1);
        count++;
    }
    if (my_strlen(s1) < my_strlen(s2))
        return (1);
    if (my_strlen(s1) > my_strlen(s2))
        return (-1);
    else {
        return (0);
    }
}
