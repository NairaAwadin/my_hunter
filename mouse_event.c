/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-naira.awadin
** File description:
** mouse_event
*/

#include "my.h"

int mouse_event(my_hunter_t *hunter, sfVector2f pos_lapin,
                sfRenderWindow* window)
{
    sfVector2f pos_lapin2 = {-300, 400};
    while (sfRenderWindow_pollEvent(window, &hunter->event)) {
        hunter->click = sfSprite_getGlobalBounds(hunter->lapin);
        hunter->click2 = sfSprite_getGlobalBounds(hunter->lapin2);
        if (hunter->event.type == sfEvtMouseButtonPressed &&
            sfFloatRect_contains(&hunter->click, hunter->event.mouseButton.x,
            hunter->event.mouseButton.y)) {
            pos_lapin.x = -200;
            sfSprite_setPosition(hunter->lapin, pos_lapin);
        }
        if (hunter->event.type == sfEvtMouseButtonPressed &&
            sfFloatRect_contains(&hunter->click2, hunter->event.mouseButton.x,
            hunter->event.mouseButton.y)) {
            pos_lapin2.x = -400;
            sfSprite_setPosition(hunter->lapin2, pos_lapin2);
        }
        if (hunter->event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}
