/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** split_str_str
*/

#include <stdlib.h>
#include "./mystr.h"

static int nb_ssplit(string str, string splitter)
{
    int size = length(str);
    int size_s = length(splitter);
    int result = 0;

    if (str_equality(str + size - 1 - size_s, splitter))
        result--;
    for (int i = 0; str[i] != 0; i++) {
        if (strat_with(str + i, splitter))
            result++;
    }
    return (result);
}

static int ssize_before_splitter(string str, string splitter, int curr_s)
{
    int i = 0;
    int size_s = length(splitter);

    while (str[i] != 0) {
        if (strat_with(str + i, splitter))
            break;
        i++;
    }
    return (i - size_s);
}

static void complete_sstr_split(string str, int size, string result, int i)
{
    for (int i = 0; i < size; i++)
        result[i] = str[i];
    result[size] = 0;
}

text split_sstr(string str, string splitter)
{
    int curr = 0;
    int size = length(str);
    int size_s = length(splitter);
    int nb_split = nb_ssplit(str, splitter);
    text split = malloc(sizeof(string) * (nb_split + 2));
    
    for (int i = 0; i < size; i++) {
        split[curr] = concat_str(NULL, "oui");
        curr++;
        i+=size_s;
    }
    split[nb_split + 1] = NULL;
    return (split);
}