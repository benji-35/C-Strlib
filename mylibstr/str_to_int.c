/*
** EPITECH PROJECT, 2021
** B-CPE-110-REN-1-1-antman-benjamin.delvert
** File description:
** str_to_int
*/

int lenght(unsigned char *str);

int str_to_int(unsigned char *str)
{
    int size = lenght(str);
    int result = 0;

    for (int i = 0; i < size; i++) {
        if (str[i] < 48 || str[i] > 57)
            return (result);
        result = (result * 10) + str[i] - 48;
    }
    return (result);
}