/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

int main (int ac, char **av)
{
    my_hunter_t *hunter = malloc (sizeof(my_hunter_t));
    if (ac == 1)
        menu(hunter);
    if (ac == 2)
        instructions(ac, av);
    free(hunter);
    return 0;
}
