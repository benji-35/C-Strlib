/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** float_to_car
*/

#include <stdlib.h>

int lenght(char *str);
char *empty_str(void);
char *copy_str(char *str);
void insert_char_str(char **str, int position, char c);

static int nb_o(char *str, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] != '0')
            break;
        res++;
    }
    return (res);
}

static void delete_o(char **str)
{
    int size = lenght(*str);
    int nb = nb_o(*str, size);
    if (nb == 0)
        return;
    char *new_str = malloc(sizeof(char) * (size - nb));
    for (int i = nb; i < size; i++)
        new_str[i - nb] = (*str)[i];
    free(*str);
    new_str[size - nb - 1] = 0;
    *str = new_str;
}

static void add_double_coma(double d, char **str, int precision)
{
    for (int i = 0; i < precision; i++)
        d = d * 10.0;
    int b = (int)d % 10;
    int a = (int)(d / 10.0) % 10;
    if (b >= a && b != 0) {
        d = d /10.0;
        d++;
        d = d * 10.0;
    }
    for (int i = 0; i < precision; i++) {
        insert_char_str(str, 0, ((int)d % 10) + 48);
        d = d / 10.0;
    }
    insert_char_str(str, 0, '.');
}

static void neg_double(int *neg, double *nb)
{
    if (*nb < 0.0) {
        *neg = 1;
        *nb = *nb * -1;
    }
}

char *double_to_str(double f, int precision)
{
    int neg = 0;
    precision++;
    if (f == 0.0)
        return (copy_str("0.0"));
    char *str = empty_str();
    neg_double(&neg, &f);
    add_double_coma(f, &str, precision);
    while (f > 0.0) {
        insert_char_str(&str, 0, ((int)f % 10) + 48);
        f = f / 10.0;
    }
    if (neg)
        insert_char_str(&str, 0, '-');
    delete_o(&str);
    if (str[lenght(str) - 1] == '.')
        str[lenght(str) - 1] = 0;
    return (str);
}