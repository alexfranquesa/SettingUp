/*
** EPITECH PROJECT, 2023
** cpoolday07
** File description:
** my_strncat
*/

#include <unistd.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int count_d = 0;
    int count_s = 0;

    while (dest[count_d] != '\0') {
        count_d++;
    }
    while ((src[count_s] != '\0') && (count_s < nb)) {
        dest[count_d] = src[count_s];
        count_d++;
        count_s++;
    }
    dest[count_d] = '\0';
    return dest;
}
