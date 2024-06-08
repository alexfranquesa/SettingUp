/*
** EPITECH PROJECT, 2023
** cpoolday05
** File description:
** my_find_prime_sup
*/

#include <unistd.h>

int my_find_prime_sup(int nb)
{
    if (nb <= 1) {
        return 2;
    }
    if (my_is_prime(nb)) {
        return nb;
    }
    if (nb % 2 == 0) {
        nb++;
            } else {
        nb += 2;
    }
    while (1) {
        if (my_is_prime(nb)) {
            return nb;
        }
        nb += 2;
    }
}
