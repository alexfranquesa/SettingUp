/*
** EPITECH PROJECT, 2023
** cpoolday03
** File description:
** my_put_nbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    int n;

    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0){
        if (nb >= 10){
            n = (nb % 10);
            nb = (nb -n) / 10;
            my_put_nbr(nb);
            my_putchar(48 + n);
        } else{
            my_putchar(48 + nb % 10);
        }
    }
    return (0);
}
