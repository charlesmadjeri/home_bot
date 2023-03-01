/*
** EPITECH PROJECT, 2022
** C_pool
** File description:
** my_putchar
*/

#include "../program/home_bot.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
