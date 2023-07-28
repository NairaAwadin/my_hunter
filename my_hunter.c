/*
** EPITECH PROJECT, 2022
** my_hunter.c
** File description:
** my_hunter.c
*/

#include "my.h"

int open_window(my_hunter_t *hunter, sfRenderWindow* window)
{
    sfVector2f pos_lapin = {-100, 400};
    sfVector2f trans_lapin = {30, 0};

    loading_sprites(hunter, pos_lapin);
    loading_sd_sprites(hunter);
    hunter->clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        sfSprite_setTextureRect(hunter->lapin, hunter->rect);
        sfSprite_setTextureRect(hunter->lapin2, hunter->rect2);
        sfRenderWindow_drawSprite(window, hunter->sprite, NULL);
        sfRenderWindow_drawSprite(window, hunter->lapin, NULL);
        sfRenderWindow_drawSprite(window, hunter->lapin2, NULL);
        sfRenderWindow_display(window);
        mouse_event(hunter, pos_lapin, window);
        anim_lapin(hunter, pos_lapin, trans_lapin);
    }
    return (0);
}
