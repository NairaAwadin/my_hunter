/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** menu.c
*/

#include "my.h"

int loading_menu_sprites(my_hunter_t *hunter, sfVector2f pos_button)
{
    hunter->text_forest = sfTexture_createFromFile("forest1.png", NULL);
    hunter->forest = sfSprite_create();

    hunter->texture = sfTexture_createFromFile("forest1.png", NULL);
    hunter->sprite = sfSprite_create();

    hunter->text_button = sfTexture_createFromFile(
        "start_button-removebg-preview.png", NULL);
    hunter->button = sfSprite_create();

    sfSprite_setTexture(hunter->forest, hunter->text_forest, sfTrue);
    sfSprite_setTexture(hunter->sprite, hunter->texture, sfTrue);
    sfSprite_setTexture(hunter->button, hunter->text_button, sfTrue);
    sfSprite_setPosition(hunter->button, pos_button);

}

int menu_mouse_event(my_hunter_t *hunter, sfRenderWindow* window)
{
    while (sfRenderWindow_pollEvent(window, &hunter->event)) {
        hunter->click_button = sfSprite_getGlobalBounds(hunter->button);
        if (hunter->event.type == sfEvtMouseButtonPressed &&
            sfFloatRect_contains(&hunter->click_button,
            hunter->event.mouseButton.x, hunter->event.mouseButton.y)) {
            open_window(hunter, window);
        }
        if (hunter->event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

int menu(my_hunter_t *hunter)
{
    sfRenderWindow* window;
    sfVideoMode video_mode = {800, 600};
    sfVector2f pos_button = {80, 250};

    window = sfRenderWindow_create(video_mode, "my_hunter",
    sfResize | sfClose, NULL);

    loading_menu_sprites(hunter, pos_button);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        sfRenderWindow_drawSprite(window, hunter->sprite, NULL);
        sfRenderWindow_drawSprite(window, hunter->button, NULL);

        menu_mouse_event(hunter, window);
    }
}
