/*
** EPITECH PROJECT, 2023
** free
** File description:
** setting_up
*/

#include "../include/my.h"
#include "../include/my_struct.h"

void map_cleaner(setting_up_t *map, int clean)
{
    for (int line = 0; line < map->cols * map->setting_up; line += map->cols) {
        for (int i = 0; i < map->setting_up; i++) {
            map->map[clean - i - line] = -4;
        }
    }
    for (int i = 0; i < map->size; i++) {
        put_x_o(map , &i);
    }
}

void free_c(char *arr, int nbr)
{
    for (int i = 0; i != nbr + 1; i++) {
        arr--;
    }
    free(arr);
}
