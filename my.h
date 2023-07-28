/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <SFML/Audio.h>
    #include <time.h>
    #include <unistd.h>

typedef struct my_hunter_s {

    sfTexture* texture;
    sfSprite* sprite;

    sfTexture* text_lap;
    sfSprite* lapin;

    sfTexture* text_lap2;
    sfSprite* lapin2;

    sfTexture* text_button;
    sfSprite* button;

    sfTexture* text_forest;
    sfSprite* forest;

    sfEvent event;

    sfIntRect rect;
    sfIntRect rect2;

    sfMusic* music;
    sfClock* clock;
    sfTime time;

    sfFloatRect click;
    sfFloatRect click2;
    sfFloatRect click_button;
}my_hunter_t;

void my_putchar(char c);
int my_putstr(char const *src);
int  open_window(my_hunter_t *hunter, sfRenderWindow* window);
int loading_sprites(my_hunter_t *hunter, sfVector2f pos_lapin);
int loading_sd_sprites(my_hunter_t *hunter);
int mouse_event (my_hunter_t *hunter, sfVector2f pos_lapin,
sfRenderWindow *window);
int anim_lapin(my_hunter_t *hunter, sfVector2f pos_lapin,
sfVector2f trans_lapin);
int instructions(int ac, char **av);
int menu(my_hunter_t *hunter);
int rabbit_anim(my_hunter_t *hunter);
int loading_menu_sprites(my_hunter_t *hunter, sfVector2f pos_button);
int menu_mouse_event(my_hunter_t *hunter, sfRenderWindow* window);

#endif
