/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** led
*/

#include "home_bot.h"

void colorLed(int v_iRed, int v_iGreen, int v_iBlue)
{
    v_iRed == 1 ? digitalWrite(LED_R, HIGH) : digitalWrite(LED_R, LOW);
    v_iGreen == 1 ? digitalWrite(LED_G, HIGH) : digitalWrite(LED_G, LOW);
    v_iBlue == 1 ? digitalWrite(LED_B, HIGH) : digitalWrite(LED_B, LOW);
}
