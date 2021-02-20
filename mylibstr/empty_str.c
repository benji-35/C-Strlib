/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** empty_str
*/

#include <stdlib.h>

char *empty_str(void)
{
    char *str = malloc(sizeof(char) * 1);
    str[0] = 0;
    return (str);
}

char *empty_str_size(int size)
{
    if (size < 0)
        return (NULL);
    char *str = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++)
        str[i] = ' ';
    str[size] = 0;
    return (str);
}