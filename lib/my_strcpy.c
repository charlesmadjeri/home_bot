/*
** EPITECH PROJECT, 2022
** C_pool
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}
