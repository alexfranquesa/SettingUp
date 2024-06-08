/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** MY_H
*/

#ifndef MY_H
    #define MY_H

    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include "my_struct.h"

// BSQ functions
int switch_case(int current_block, int previous, int upward, int diagonal);
int find_lowest_number(int a, int b, int c);
void find_square(setting_up_t *map);
void generate_int_map(setting_up_t *map);
void map_cleaner(setting_up_t *map, int clean);
void free_c(char *array, int nbr);
void convert(setting_up_t *map);
int get_map (setting_up_t *map);
int open_file (char const *filepath, int fd, setting_up_t *map);
int generate_map (char const *filepath);
void put_x_o(setting_up_t *map, int *i);
void map_filter(setting_up_t *map);
void bsq(setting_up_t *map);

// Basic functions lib
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *my_strstr(char *str, const char *to_find);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
// Normal functions lib
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_isneg(int n);
int my_getnbr(char const *str);
char *my_revstr(char *src);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char *src);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif /* !MY_H */
