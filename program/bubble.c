/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** bubble
*/

#include "home_bot.h"

void bubble(unsigned long *a, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
