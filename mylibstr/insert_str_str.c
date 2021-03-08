/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** insert_str_str
*/

#include <stdlib.h>
#include "mystr.h"

void insert_str_s(string *str, string to_insert, int pos)
{
    int size_str = lenght(*str);
    int size_insert = lenght(to_insert);

    if (str == NULL && to_insert == NULL)
        return;
    if (pos < 0)
        pos = 0;
    if (pos > size_str)
        pos = size_str;
    string res = malloc(sizeof(char) * (size_insert + size_str + 1));
    for (int i = 0; i < pos; i++)
        res[i] = (*str)[i];
    for (int i = pos; i < size_str; i++)
        res[i + size_insert] = (*str)[i];
    for (int i = 0; i < size_insert; i++)
        res[i + pos] = to_insert[i];
    res[size_insert + size_str] = 0;
    free(*str);
    *str = res;
}