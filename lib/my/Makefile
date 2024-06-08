##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile list
##

SRC	=	$(wildcard *.c)

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../
		cp my.h ../../include/

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)
		rm -rf ../$(NAME)

re: fclean all
