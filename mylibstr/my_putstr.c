/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** my_putstr
*/

#include <mystr.h>

void my_putstr(string str)
{
    write(1, str, length(str));
}

void my_putstr_err(string str)
{
    write(2, str, length(str));
}

ssize_t my_putstr_fd(string str, int fd)
{
    return (write(fd, str, length(str)));
}