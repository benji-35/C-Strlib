/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** remove_first_char
*/

#include <stdlib.h>
#include "mystr.h"

void str_rm_occhar(string *str, char c)
{
    int size = lenght(*str);
    string result;
    int nb_c = str_char_occur(*str, c);
    int curr = 0;
    if (nb_c == 0)
        return;
    result = malloc(sizeof(char) * (size - nb_c + 1));
    for (int i = 0; i < size; i++) {
        if ((*str)[i] != c) {
            result[i - curr] = (*str)[i];
        } else {
            curr++;
        }
    }
    result[size - nb_c] = 0;
    free(*str);
    *str = result;
}

void str_rm_fochar(string *str, char c)
{
    int size = lenght(*str);
    string result;
    int nb_c = str_char_occur(*str, c);
    int curr = 0;
    if (nb_c == 0)
        return;
    string res = malloc(sizeof(char) * (size));
    for (int i = 0; i < size; i++) {
        if (curr == 0 && (*str)[i] == c) {
            curr ++;
        } else {
            res[i - curr] = (*str)[i];
        }
    }
    res[size - 1] = 0;
    free(*str);
    *str = res;
}

void str_rm_fchar(string *str)
{
    if (str == NULL || *str == NULL)
        return;
    int size = lenght(*str);
    string result = malloc(sizeof(char) * size);
    for (int i = 1; i < size; i++)
        result[i - 1] = (*str)[i];
    result[size - 1] = 0;
    free(*str);
    *str = result;
}