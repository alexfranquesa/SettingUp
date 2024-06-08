/*
** EPITECH PROJECT, 2023
** ncjf
** File description:
** dhdhd
*/

#include "../include/my.h"
#include "../include/my_struct.h"

void put_x_o(setting_up_t *map, int *i)
{
    if (map->map[*i] != 0 && map->map[*i] != -4)
            map->map[*i] = '.';
    else if (map->map[*i] != 0 && map->map[*i] == -4)
            map->map[*i] = 'x';
    if (map->map[*i] == 0)
            map->map[*i] = 'o';
}

void map_filter(setting_up_t *map)
{
    int control = 0;

    bsq(map);
    for (int i = 0; i < map->size; i++) {
        if (map->map[i] == map->setting_up && control == 0) {
            map_cleaner(map, i);
            control = 1;
        }
    }
}

void bsq(setting_up_t *map)
{
    for (int i = 0; i < map->size; i++)
        if (map->map[i] > map->setting_up)
            map->setting_up = map->map[i];
}
