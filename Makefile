##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## ---
##

SRC		=	src/main.c	\
			src/hash.c	\
			src/hashtable.c	\
			src/ht_handling.c	\

OBJ	=	$(SRC:.c=.o)

LIBNAME	=	libhashtable.a

NAME	=	a.out

all:	$(NAME)	$(LIBNAME)

$(NAME):	$(OBJ)
	gcc -g -o $(NAME) $(OBJ) -Iinclude -lpthread

$(LIBNAME):	$(OBJ)
	ar rcs $(LIBNAME) $(OBJ)

gdb:
	gcc -g $(SRC) -o $(NAME) -Iinclude -lpthread

clean :
	rm -f $(OBJ) *core vgcore*

fclean : clean
	rm -f $(NAME) $(LIBNAME)

re : fclean all
