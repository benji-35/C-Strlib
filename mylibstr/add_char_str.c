/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** add_char_str
*/

#include <stdlib.h>

int lenght(char *str);

void add_char_str(char **str, char c)
{
    int size = lenght(*str);
    char *new_str = malloc(sizeof(char) * (size + 2));

    for (int i = 0; i < size; i++)
        new_str[i] = (*str)[i];
    new_str[size] = c;
    new_str[size + 1] = 0;
    free(*str);
    *str = new_str;
}

void add_char_strp(char **str, char c, int pos)
{
    int size = lenght(*str);
    char *new_str;

    if (pos > size)
        pos = size;
    if (pos < 0)
        pos = 0;
    new_str = malloc(sizeof(char) * (size + 2));
    for (int i = 0; i < pos; i++)
        new_str[i] = (*str)[i];
    for (int i = pos; i < size; i++)
        new_str[i + 1] = (*str)[i];
    new_str[pos] = c;
    new_str[size + 1] = 0;
    free(*str);
    *str = new_str;
}

void remove_char_str(char **str, int pos)
{
    int size = lenght(*str);
    if (pos < 0 || pos >= size)
        return;
    char *new_str = malloc(sizeof(char) * (size));
    for (int i = 0; i < pos; i++)
        new_str[i] = (*str)[i];
    for (int i = pos + 1; i < size; i++)
        new_str[i - 1] = (*str)[i];
    new_str[size - 1] = 0;
    free(*str);
    *str = new_str;
}