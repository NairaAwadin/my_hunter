/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-naira.awadin
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        my_putchar(src[i]);
        i++;
    }
    return (0);
}
