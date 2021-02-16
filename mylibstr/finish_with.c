/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** finish_with
*/

int lenght(char *str);

int finish_with(char *str1, char *str2)
{
    int s1 = lenght(str1);
    int s2 = lenght(str2);

    if (s2 > s1)
        return (0);
    for (int i = 0; i < s2; i++) {
        if (str1[s1 - 1 - i] != str2[s2 - 1 - i])
            return (0);
    }
    return (1);
}