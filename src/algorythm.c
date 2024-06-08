/*
** EPITECH PROJECT, 2023
** algorythm
** File description:
** setting_up
*/

#include "../include/my.h"
#include "../include/my_struct.h"

int switch_case(int current_block, int previous, int upward, int diagonal)
{
    int new_block = 1;
    int num_block = current_block;

    if (current_block > 0) {
        new_block += find_lowest_number(previous, upward, diagonal);
        num_block = new_block;
    }
    return num_block;
}

int find_lowest_number(int a, int b, int c)
{
    int result;

    if (a < b) {
        result = (c < a) ? c : a;
    } else {
        result = (c < b) ? c : b;
    }
    return result;
}

void find_square(setting_up_t *map)
{
    int map_index = 0;
    int file_index = 0;

    generate_int_map(map);
    map_filter(map);
    while (file_index < map->file_size) {
        if (map->file[file_index] != '\0' && map->file[file_index] != '\n') {
            map->file[file_index] = map->map[map_index];
            map_index++;
        }
        file_index++;
    }
    my_putstr(map->file);
}

void generate_int_map(setting_up_t *map)
{
    int current_line = 0;
    int current_col = 0;
    int map_index = 0;
    int file_index = 0;

    convert(map);
    for (file_index; file_index < map->file_size; file_index++) {
        if (map->file[file_index] == '\n') {
            current_col = 0;
            current_line++;
        }
        if (current_line != 0 && current_col != 0 && map_index < map->size) {
            map->map[map_index] = switch_case(map->map[map_index],
            map->map[map_index - 1],
            map->map[map_index - map->cols],
            map->map[map_index - map->cols - 1]);
        }
        map_index++;
        current_col++;
    }
}
