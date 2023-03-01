/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** my_swap
*/

#include "../program/home_bot.h"

bool my_swap(int *value1, int *value2)
{
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    return true;
}
