##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c	\
			src/hash.c	\
			src/hashtable.c	\
			src/ht_handling.c	\
			src/node.c	\

OBJ	=	$(SRC:.c=.o)

LIBNAME	=	libhashtable.a

NAME	=	a.out

INCLUDE_DIR = include

# Related to the 'libmy' library
MY_LIB_DIRNAME = my_lib
MY_LIB_BASENAME = my
MY_LIBNAME = ${MY_LIB_DIRNAME}/lib${MY_LIB_BASENAME}.a

all:	$(NAME)	$(LIBNAME)

$(NAME):	$(OBJ) ${MY_LIBNAME}
	gcc -g -o $(NAME) $(OBJ) -I${INCLUDE_DIR} -L${MY_LIB_DIRNAME}	\
	-l${MY_LIB_BASENAME}

# Hashtable library
$(LIBNAME):	$(OBJ)
	ar rcs $(LIBNAME) $(OBJ)

# 'libmy.a' library building to link against it
${MY_LIBNAME}:
	make -C ${MY_LIB_DIRNAME}

gdb:
	gcc -g $(SRC) -o $(NAME) -I${INCLUDE_DIR} -L${MY_LIB_DIRNAME}	\
		-l${MY_LIB_BASENAME}

clean :
	rm -f $(OBJ) *core vgcore*

fclean : clean
	rm -f $(NAME) $(LIBNAME)
	make -C $(MY_LIB_DIRNAME) clean

re : fclean all
