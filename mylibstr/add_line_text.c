/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** add_line_text
*/

#include <stdlib.h>
int lenght_split(char **split);
char *copy_str(char *str);
char *empty_str(void);
void free_split(char **split);

void add_line_text(char ***text, int pos)
{
    if (text == NULL)
        return;
    int size = lenght_split(*text);
    char **new_text = malloc(sizeof(char *) * (size + 2));

    if (pos > size)
        pos = size;
    if (pos < 0)
        pos = 0;
    for (int i = 0; i < pos; i++)
        new_text[i] = copy_str((*text)[i]);
    new_text[pos] = empty_str();
    for (int i = pos; i < size; i++)
        new_text[i + 1] = copy_str((*text)[i]);
    new_text[size + 1] = NULL;
    free_split(*text);
    *text = new_text;
}

void add_str_text(char ***text, int pos, char *str)
{
    add_line_text(text, pos);
    (*text)[pos] = str;
}