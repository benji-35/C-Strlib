/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** equal_str
*/

#include "mystr.h"

int str_equality(string str1, string str2)
{
    int s1 = lenght(str1);

    if (s1 != lenght(str2))
        return (0);
    for (int i = 0; i < s1; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}