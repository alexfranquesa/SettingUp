/*
** EPITECH PROJECT, 2023
** main
** File description:
** setting_up
*/

#include "../include/my.h"
#include "../include/my_struct.h"

int main(int argc, char **argv)
{
    if (argc != 2 && argc != 3)
        return (84);
    else if (generate_map(argv[1]) == 84)
        return (84);
}
