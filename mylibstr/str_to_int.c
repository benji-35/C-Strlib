/*
** EPITECH PROJECT, 2021
** B-CPE-110-REN-1-1-antman-benjamin.delvert
** File description:
** str_to_int
*/

#include <stdlib.h>
#include "mystr.h"

static int my_is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int str_to_int(string str)
{
    if (str == NULL)
        return (0);
    int res = 0;
    int start = 0;
    if (str[0] == '-')
        start = 1;
    for (int i = start; my_is_number(str[i]); i++)
        res = (res * 10) + (str[i] - 48);
    if (start)
        res = res * -1;
    return (res);
}