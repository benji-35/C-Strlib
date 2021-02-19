/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** remove_line_text
*/

#include <stdlib.h>
int lenght_split(char **split);
char *copy_str(char *str);
char *empty_str(void);
void free_split(char **split);
int str_contains(char *str1, char *contain);

void remove_line_text(char ***text, int pos)
{
    if (*text == NULL)
        return;
    int size = lenght_split(*text);
    int curr = 0;
    if (pos < 0)
        pos = 0;
    if (pos >= size)
        pos = size - 1;
    char **new_text = malloc(sizeof(char *) * (size));
    for (int i = 0; i < size; i++) {
        if (i == pos) {
            curr++;
        } else {
            new_text[i - curr] = copy_str((*text)[i]);
        }
    }
    new_text[size - 1] = NULL;
    free_split(*text);
    *text = new_text;
}

void remove_line_text_string(char ***text, char *str)
{
    for (int i = 0; (*text)[i] != NULL; i++) {
        if (str_contains((*text)[i], str)) {
            remove_line_text(text, i);
            remove_line_text_string(text, str);
            break;
        }
    }
}