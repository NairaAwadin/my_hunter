/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-naira.awadin
** File description:
** loading_sprites
*/

#include "my.h"

int loading_sprites(my_hunter_t *hunter, sfVector2f pos_lapin)
{
    hunter->music = sfMusic_createFromFile("wondrous-waters-119518.ogg");
    sfMusic_play(hunter->music);

    hunter->texture = sfTexture_createFromFile("forest1.png", NULL);
    hunter->sprite = sfSprite_create();
    sfSprite_setTexture(hunter->sprite, hunter->texture, sfTrue);

    hunter->text_lap = sfTexture_createFromFile("lapins.png", NULL);
    hunter->lapin = sfSprite_create();
    sfSprite_setTexture(hunter->lapin, hunter->text_lap, sfTrue);

    sfSprite_setPosition(hunter->lapin, pos_lapin);

    hunter->rect.top = 0;
    hunter->rect.left = 0;
    hunter->rect.width = 137;
    hunter->rect.height = 100;
}

int loading_sd_sprites(my_hunter_t *hunter)
{
    sfVector2f pos_lapin2 = {-300, 400};
    hunter->text_lap2 = sfTexture_createFromFile("lapins.png", NULL);
    hunter->lapin2 = sfSprite_create();
    sfSprite_setTexture(hunter->lapin2, hunter->text_lap2, sfTrue);

    sfSprite_setPosition(hunter->lapin2, pos_lapin2);

    hunter->rect2.top = 0;
    hunter->rect2.left = 0;
    hunter->rect2.width = 137;
    hunter->rect2.height = 100;
}
