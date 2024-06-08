/*
** EPITECH PROJECT, 2023
** open_generate
** File description:
** setting_up
*/

#include "../include/my.h"
#include "../include/my_struct.h"

void convert(setting_up_t *map)
{
    int i = 0;

    for (int s_i = 0; s_i < map->file_size; s_i++) {
        if (map->file[s_i] == '.') {
            map->map[i] = 1;
            i++;
        }
        if (map->file[s_i] == 'o') {
            map->map[i] = 0;
            i++;
        }
    }
}

int get_map(setting_up_t *map)
{
    char *first_line = malloc(map->file_size + 1);
    int m_line = 0;

    for (; map->file[m_line] != '\n'; m_line++)
        first_line[m_line] = map->file[m_line];
    first_line[m_line] = '\0';
    map->rows = my_getnbr(first_line);
    if (map->rows <= 0)
        return (0);
    for (int i = m_line + 1; map->file[i] != '\n'; i++)
        map->cols++;
    for (int i = 0; i != m_line + 1; i++)
        map->file++;
    map->size = map->cols * map->rows;
    map->map = malloc(sizeof(int) * map->size);
    map->file_size -= m_line;
    find_square(map);
    free_c(map->file, m_line);
    return (0);
}

int open_file(char const *filepath, int fd, setting_up_t *map)
{
    struct stat sb;
    int rd;

    if (fd == -1)
        return (84);
    stat(filepath, &sb);
    map->file_size = sb.st_size;
    map->file = malloc(sb.st_size + 1);
    rd = read(fd, map->file, map->file_size);
    close(fd);
    if (rd == -1)
        return (84);
    if (rd == 0)
        return (84);
    if (rd < map->file_size)
        return (84);
    return fd;
}

int generate_map(char const *filepath)
{
    int fr;
    int fd;
    setting_up_t *map = malloc(sizeof(setting_up_t));

    fd = open(filepath, O_RDONLY);
    fr = open_file(filepath, fd, map);
    if (fr == 84)
        return 84;
    map->file[map->file_size] = '\0';
    if (get_map(map) == 84)
        return (84);
}
