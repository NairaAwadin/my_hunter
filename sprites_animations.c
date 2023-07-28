/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-naira.awadin
** File description:
** sprites_animations
*/

#include "my.h"

int anim_lapin(my_hunter_t *hunter, sfVector2f pos_lapin,
sfVector2f trans_lapin)
{
    sfVector2f pos_lapin2 = {-300, 400};
    float seconds;
    hunter->time = sfClock_getElapsedTime(hunter->clock);
    seconds = hunter->time.microseconds / 1000000.0;
    if (seconds > 0.3) {
        sfVector2f rabbit = sfSprite_getPosition(hunter->lapin);
        sfVector2f rabbit2 = sfSprite_getPosition(hunter->lapin2);
        if (rabbit.x > 800 && rabbit2.x > 800) {
        sfSprite_setPosition(hunter->lapin, pos_lapin);
        sfSprite_setPosition(hunter->lapin2, pos_lapin2);
        }
    sfSprite_move(hunter->lapin, trans_lapin);
    sfSprite_move(hunter->lapin2, trans_lapin);
    rabbit_anim(hunter);
}
}

int rabbit_anim(my_hunter_t *hunter)
{
    if (hunter->rect.left > 137 && hunter->rect2.left > 137) {
            hunter->rect.left = 0;
            hunter->rect2.left = 0;
    } else {
            hunter->rect.left += 137;
            hunter->rect2.left += 137;
            sfClock_restart(hunter->clock);
            }
}
