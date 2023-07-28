##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_hunter.c 	\
		loading_sprites.c	\
		mouse_event.c	\
		sprites_animations.c	\
		instructions.c	\
		menu.c	\
		main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CSFML   =	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFML) -Wall -Wextra -Werror

clean:
	rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re:	fclean all
