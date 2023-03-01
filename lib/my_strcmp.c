/*
** EPITECH PROJECT, 2022
** C_pool
** File description:
** my_strcmp
*/

#include "../program/home_bot.h"

bool my_strcmp(char const *s1, char const *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return false;
    for (int i = 0; i < my_strlen(s1) && i < my_strlen(s2); i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
