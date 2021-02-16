/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** nb_char_occur
*/

#include <stdlib.h>

int str_char_occur(char *str, char c)
{
    int r = 0;

    if (str == NULL)
        return (r);
    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            r++;
    }
    return (r);
}