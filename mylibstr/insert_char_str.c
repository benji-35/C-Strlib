/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** insert_char_str
*/

#include <stdlib.h>

int lenght(char *str);

void insert_char_str(char **str, int position, char c)
{
    int size = lenght(*str);
    if (position > size)
        return;
    char *new_str = malloc(sizeof(char) * (size + 2));
    for (int i = 0; i < position; i++)
        new_str[i] = (*str)[i];
    for (int i = position; i < size; i++)
        new_str[i + 1] = (*str)[i];
    new_str[position] = c;
    new_str[size + 1] = 0;
    free(*str);
    *str = new_str;
}