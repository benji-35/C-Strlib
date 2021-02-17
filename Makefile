##
## EPITECH PROJECT, 2021
## C-Strlib
## File description:
## Makefile
##

all:
	$(MAKE) -C mylibstr/
	gcc -o test tests/tests.c -lcriterion -L . -lmystr

fclean:
	$(MAKE) fclean -C mylibstr/
	rm -f test

re:	fclean all