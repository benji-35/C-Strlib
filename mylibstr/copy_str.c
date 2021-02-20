/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** copy_str
*/

#include <stdlib.h>

int lenght(char *str);

char *copy_str(char *str)
{
    int size = lenght(str);
    char *result = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++)
        result[i] = str[i];
    result[size] = 0;
    return (result);
}

char *copy_str_fp(char *str, int pos)
{
    int size = lenght(str);
    if (size <= pos)
        return (NULL);
    if (pos < 0)
        pos = 0;
    char *cpy = malloc(sizeof(char) * ((size - pos) + 1));
    for (int i = pos; i < size; i++)
        cpy[i - pos] = str[i];
    cpy[size - pos] = 0;
    return (cpy);
}

char *copy_str_tp(char *str, int pos)
{
    if (pos <= 0)
        return (NULL);
    int size = lenght(str);
    if (pos >= size)
        pos = size - 1;
    char *cpy = malloc(sizeof(char) * (pos + 1));
    for (int i = 0; i < pos; i++)
        cpy[i] = str[i];
    cpy[pos] = 0;
    return (cpy);
}