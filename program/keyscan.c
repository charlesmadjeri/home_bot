/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** keyscan
*/

#include "home_bot.h"

void keycan(void)
{
    while (digitalRead(KEY));
    while (!digitalRead(KEY)) {
        delay(10);
        if (digitalRead(KEY) == LOW) {
            delay(100);
            while (!digitalRead(KEY));
        }
    }
}
