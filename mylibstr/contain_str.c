/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** contain_str
*/

int lenght(char *str);

int str_contains(char *str1, char *contain)
{
    int s1 = lenght(str1);
    int curr = 0;

    if (lenght(contain) > s1 || lenght(contain) == 0)
        return (0);
    for (int i = 0; i < s1; i++) {
        if (curr > 0 && str1[i] != contain[curr])
            curr = 0;
        if (str1[i] == contain[curr])
            curr++;
        if (curr == lenght(contain))
            return (1);
    }
    return (0);
}

int str_contain_pos(char *str1, char *contain)
{
    int s1 = lenght(str1);
    int curr = 0;

    if (lenght(contain) > s1 || lenght(contain) == 0)
        return (-1);
    for (int i = 0; i < s1; i++) {
        if (curr > 0 && str1[i] != contain[curr])
            curr = 0;
        if (str1[i] == contain[curr])
            curr++;
        if (curr == lenght(contain))
            return (i - lenght(contain) + 1);
    }
    if (curr == lenght(contain))
        return (s1 - lenght(contain) + 1);
    return (-1);
}