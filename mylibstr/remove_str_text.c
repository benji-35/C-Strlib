/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** remove_str_text
*/

#include <stdlib.h>

int lenght(char *str);
int str_contains(char *str1, char *contain);
int str_contain_pos(char *str1, char *contain);
void remove_char_str(char **str, int pos);

static void remove_ostr_str(char **str, char *to_rem)
{
    int size = lenght(to_rem);
    int index = str_contain_pos(*str, to_rem);

    while (index != -1) {
        for (int i = 0; i < size; i++) {
            remove_char_str(str, index);
        }
        index = str_contain_pos(*str, to_rem);
    }
}

void remove_all_ostr_text(char **text, char *str)
{
    for (int i = 0; text[i] != NULL; i++) {
        if (str_contains(text[i], str))
            remove_ostr_str(&text[i], str);
    }
}