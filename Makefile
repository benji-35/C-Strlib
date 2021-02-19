##
## EPITECH PROJECT, 2021
## C-Strlib
## File description:
## Makefile
##

all:
	$(MAKE) -C mylibstr/
	gcc -o test tests/tests.c -lcriterion -L . -lmystr
	gcc -o test_t main.c -L . -lmystr

fclean:
	$(MAKE) fclean -C mylibstr/
	rm -f test
	rm -f test_t

re:	fclean all