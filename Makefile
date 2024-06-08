##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile create binary for antman
##

SRC	=		$(wildcard ./src/*.c) \
			$(wildcard ./lib/my/*.c)

OBJ	=		$(SRC:.c=.o)

NAME	=	setting_up

CFLAGS	=	-I./include/ -g3

all:		$(NAME)

$(NAME):	lib $(OBJ)
			gcc -o $(NAME) $(CFLAGS) $(OBJ)

lib:
			make -C ./lib/my/ -lmy

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
