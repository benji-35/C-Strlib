/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** free_split
*/

#include <stdlib.h>

void free_split(char **split)
{
    int u = 0;
    for (int i = 0; split[i] != NULL; i++) {
        u = i;
        free(split[i]);
    }
    free(split[u + 1]);
    free(split);
}