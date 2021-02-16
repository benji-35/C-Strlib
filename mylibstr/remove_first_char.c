/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** remove_first_char
*/

#include <stdlib.h>

int str_char_occur(char *str, char c);
int lenght(char *str);

void str_rm_occhar(char **str, char c)
{
    int size = lenght(*str);
    int nb_c = str_char_occur(*str, c);
    int curr = 0;
    char *result;

    if (nb_c == 0)
        return;
    result = malloc(sizeof(char) * ((size - nb_c) + 1));
    for (int i = 0; i < size; i++) {
        if ((*str)[i] != c) {
            result[i - curr] = (*str)[i];
        } else {
            curr++;
        }
    }
    free(*str);
    *str = result;
}

void str_rm_fchar(char **str, char c)
{
    int size = lenght(*str);
    char *result;
    int nb_c = str_char_occur(*str, c);
    int curr = 0;

    if (nb_c == 0)
        return;
    result = malloc(sizeof(char) * size);
    for (int i = 0; i < size; i++) {
        if ((*str[i] != c) || ((*str[i]) == c && curr == 1)) {
            result[i - curr] = (*str)[i];
        } else if ((*str[i]) == c && curr == 0) {
            curr++;
        }
    }
    free(*str);
    *str = result;
}