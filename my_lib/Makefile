##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC		= 	my_puts.c	\
			my_putchar.c	\
			my_putnbr.c	\
			my_strcmp.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ./../

clean:
		rm -f $(OBJ)
		rm -f libmy.a
		rm -f ../libmy.a
