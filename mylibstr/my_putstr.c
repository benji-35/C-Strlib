/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** my_putstr
*/

#include "mystr.h"

void my_putstr(string str)
{
    if (str == NULL) {
        my_putstr("NULL");
        return;
    }
    write(1, str, length(str));
}

void my_putstr_err(string str)
{
    if (str == NULL) {
        my_putstr_err("NULL");
        return;
    }
    write(2, str, length(str));
}

ssize_t my_putstr_fd(string str, int fd)
{
    if (str == NULL) {
        my_putstr_fd("NULL", fd);
        return (0);
    }
    return (write(fd, str, length(str)));
}

void my_puttext(text txt, int fd)
{
    if (txt == NULL) {
        my_putstr_fd("NULL", fd);
        return;
    }
    for (int i = 0; i < length_text(txt); i++) {
        my_putstr_fd(txt[i], fd);
        my_putstr_fd("\n", fd);
    }
}