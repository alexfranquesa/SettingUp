/*
** EPITECH PROJECT, 2023
** cpoolday06
** File description:
** my_revstr
*/

#include <unistd.h>

char *my_revstr(char *src)
{
    int length = my_strlen(src);
    int ini = 0;
    int fin = length - 1;
    char aux = ' ';

    while (fin > ini) {
        aux = src[ini];
        src[ini] = src[fin];
        src[fin] = aux;
        ini++;
        fin--;
    }
    return (src);
}
