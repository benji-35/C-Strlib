/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** free_split
*/

#include <stdlib.h>
#include "mystr.h"

void free_split(text split)
{
    int u = 0;

    if (split == NULL)
        return;
    for (int i = 0; split[i] != NULL; i++) {
        u = i;
        free(split[i]);
    }
    free(split[u + 1]);
    free(split);
}