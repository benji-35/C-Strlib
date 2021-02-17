/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** inverse_str
*/

#include <stdlib.h>
int lenght(char *str);

void reverse_str(char **str)
{
    if (str == NULL)
        return;
    int size = lenght(*str);
    char tampon = 0;
    for (int i = 0; i < size / 2; i++) {
        tampon = (*str)[i];
        (*str)[i] = (*str)[(size - 1) - i];
        (*str)[(size - 1) - i] = tampon;
    }
}