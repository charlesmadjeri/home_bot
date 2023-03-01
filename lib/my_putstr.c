/*
** EPITECH PROJECT, 2022
** C_pool
** File description:
** my_putstr
*/

#include "../program/home_bot.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
