##
## EPITECH PROJECT, 2021
## mystrlib
## File description:
## Makefile
##

SRC = concat_str.c	\
	contain_str.c	\
	equal_str.c	\
	finish_with.c	\
	lenght_str.c	\
	split_str.c	\
	start_with.c	\
	str_to_lowercase.c	\
	copy_str.c	\
	int_to_str.c	\
	str_to_int.c	\
	str_get_words.c	\
	inverse_str.c	\
	insert_char_str.c	\
	free_split.c	\
	insert_char_str.c	\
	nb_char_occur.c	\
	remove_first_char.c	\
	char_is_an.c	\
	empty_str.c	\
	double_to_str.c	\
	str_to_double.c	\
	add_line_text.c	\
	remove_line_text.c

OBJ = $(SRC:.c=.o)

NAME = libmystr.a

HEADER = mystr.h

PATH_LIB = ../

PATH_HEADER = ../

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) $(PATH_LIB)
	cp $(HEADER) $(PATH_HEADER)
	rm -f $(NAME)
	rm -f $(OBJ)

fclean:
	rm -f $(PATH_HEADER)$(HEADER)
	rm -f $(PATH_LIB)$(NAME)

re:	fclean all