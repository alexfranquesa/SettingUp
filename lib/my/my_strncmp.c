/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_strncmp
*/

#include <unistd.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    while (s1[a] == s2[a] && s1[a] && s2[a] && a < n) {
        a++;
    }
    if ((s1[a] == '\0' && s2[a] == '\0') || a == n) {
        return (0);
    } else if (s1[a] > s2[a]) {
        return (1);
    } else {
        return (-1);
    }
}
