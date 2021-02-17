/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** str_to_double
*/

#include <stdlib.h>

int lenght(char *str);
char **split_str(char *str, char spliter);
int str_to_int(char *str);
int lenght_split(char **split);
void free_split(char **split);

double str_to_double(char *str)
{
    if (str == NULL)
        return (0);
    char **split = split_str(str, '.');
    int a = str_to_int(split[0]);
    int b = 0;
    double b_b = 0.0;
    double res = (double)a;
    if (lenght_split(split) == 2)
        b = str_to_int(split[1]);
    if (b != 0) {
        b_b = (double)b;
        for (int i = 0; i < lenght(split[1]); i++)
            b_b = b_b / 10.0;
    }
    free_split(split);
    if (res > 0)
        res += b_b;
    else
        res -= b_b;
    return (res);
}