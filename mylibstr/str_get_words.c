/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** str_get_world
*/

#include <stdlib.h>

int is_alphanumeric(char c);
int lenght(char *str);
int nb_o_split(char **str);
int lenght_split(char **split);
int str_equality(char *str1, char *str2);
char *copy_str(char *str);
void free_split(char **split);

static int nb_split_w(char *str)
{
    int size = lenght(str);
    int result = 0;

    if (is_alphanumeric(str[size - 1]) == 0)
        result--;
    for (int i = 0; str[i] != 0; i++) {
        if (is_alphanumeric(str[i]) == 0)
            result++;
    }
    return (result);
}

static int size_before_splitterw(char *str)
{
    int i = 0;
    while (str[i] != 0) {
        if (is_alphanumeric(str[i]) == 0)
            break;
        i++;
    }
    return (i);
}

static void complete_str_splitw(char *str, int size, char *result)
{
    for (int i = 0; i < size; i++)
        result[i] = str[i];
    result[size] = 0;
}

static void rm_o_str(char ***txt)
{
    int size = lenght_split(*txt);
    int nb_o = nb_o_split(*txt);
    int curr = 0;
    char **res = malloc(sizeof(char *) * ((size - nb_o) + 1));

    for (int i = 0; (*txt)[i] != NULL; i++) {
        if (str_equality((*txt)[i], "\0")) {
            curr++;
        } else {
            res[i - curr] = copy_str((*txt)[i]);
        }
    }
    res[size - nb_o] = NULL;
    free_split(*txt);
    *txt = res;
}

char **get_words(char *str)
{
    int size = lenght(str);
    int nbsplit = nb_split_w(str);
    char **result = malloc(sizeof(char *) * (nbsplit + 2));
    int curr = 0;

    for (int i = 0; i < size; i++) {
        int to_mal = size_before_splitterw(str + i);
        result[curr] = malloc(sizeof(char) * (to_mal + 1));
        complete_str_splitw(str + i, to_mal, result[curr]);
        curr ++;
        i += to_mal;
    }
    result[nbsplit + 1] = NULL;
    rm_o_str(&result);
    return (result);
}