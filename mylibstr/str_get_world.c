/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** str_get_world
*/

#include <stdlib.h>
int lenght(char *str);
char **split_str(char *str, char *separator);

char **get_world(char *str)
{
    char **splitted = split_str(str, " ");
}