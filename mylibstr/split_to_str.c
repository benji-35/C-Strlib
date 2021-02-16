/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** split_to_str
*/

#include <stdlib.h>

int lenght(char *str);
char *concat_str(char *str1, char *str2);
char *copy_str(char *str);

char *split_to_str(char **split, char *separator)
{
    char *str = NULL;
    char *tampon = NULL;
    for (int i = 0; split[i] != NULL; i++) {
        tampon = concat_str(str, split[i]);
        free(str);
        if (split[i + 1] == NULL) {
            str = tampon;
        } else {
            str = concat_str(tampon, separator);
            free(tampon);
        }
    }
    return (str);
}