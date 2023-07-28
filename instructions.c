/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-naira.awadin
** File description:
** instructions
*/

#include "my.h"

int instructions(int ac, char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        i++;
        if (av[i][0] == '-' && av[i][1] == 'h') {
            my_putstr("Coucou toi !\n");
            my_putstr("Bienvenue dans la forêt enchantée, ");
            my_putstr("pour t'en sortir, tu dois chasser tous les lapins.\n");
            my_putstr("Pour chasser les lapins, tu dois leur cliquer dessu ");
            my_putstr("avant qu'ils s'enfuissent.\n");
            my_putstr("À toi de jouer ! (:\n");
        }
    }
}
