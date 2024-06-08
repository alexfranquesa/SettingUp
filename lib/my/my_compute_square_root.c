/*
** EPITECH PROJECT, 2023
** cpoolday05
** File description:
** my_compute_square_root
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_square_root(int nb)
{
    int number = 1;

    while (number * number <= nb) {
        if (number * number == nb) {
            return number;
        }
        number++;
    }
    return 0;
}
