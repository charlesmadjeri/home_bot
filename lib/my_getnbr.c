/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** my_getnbr
*/

#include "../program/home_bot.h"

bool build_nbr(const char *str, int *valeur)
{
    char c;

    for (long val = 0; *str != '\0'; str++) {
        c = *str;
        if (c < '0' || c > '9')
            return false;
        val = (*valeur * 10) + (*str - '0');
        if (val > INT_MAX)
            return false;
        *valeur = (int) val;
    }
    return true;
}

bool my_getnbr(const char *str, int *nbr)
{
    int valeur = 0;

    *nbr = 1;
    switch (*str++) {
    case '\0':
        return false;
    case '-':
        *nbr = -1;
        break;
    case '+':
        break;
    default:
        --str;
    }
    if (!build_nbr(str, &valeur))
        return false;
    *nbr *= valeur;
    return true;
}
