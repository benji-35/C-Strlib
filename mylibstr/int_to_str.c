/*
** EPITECH PROJECT, 2021
** B-CPE-110-REN-1-1-antman-benjamin.delvert
** File description:
** int_to_str
*/

#include <stdlib.h>

static int size_nb(int nb)
{
    int r = 0;

    if (nb == 0)
        return (1);
    while (nb > 0) {
        r++;
        nb = nb / 10;
    }
    return (r);
}

char *int_to_str(int nb)
{
    int size = size_nb(nb);
    float nb_f = (float)nb;
    char *result = malloc(sizeof(char) * (size + 1));
    for (int i = size - 1; i >= 0; i--) {
        result[i] = (nb % 10) + 48;
        nb = nb / 10;
    }
    result[size] = 0;
    return (result);
}