/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** length_str
*/

#include <stdlib.h>
#include "mystr.h"

int length(string str)
{
    int r = 0;

    if (str == NULL)
        return (r);
    while (str[r] != 0)
        r++;
    return(r);
}

int length_split(text split)
{
    int r = 0;

    if (split == NULL)
        return (r);
    while (split[r] != NULL)
        r++;
    return (r);
}