/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** replace_str_char
*/

#include <stdlib.h>

void replace_char_str(char *str, char target, char replace)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == target)
            str[i] = replace;
    }
}

void replace_char_text(char **text, char target, char replace)
{
    for (int i = 0; text[i] != NULL; i++)
        replace_char_str(text[i], target, replace);
}