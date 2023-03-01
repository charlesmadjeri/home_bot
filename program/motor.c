/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** motor
*/

#include "home_bot.h"

void go(int speed)
{
    digitalWrite(MOTOR_GO, HIGH);
    digitalWrite(MOTOR_BACK, LOW);

    softPwmWrite(MOTOR_PWM, speed);
}

void brake(void)
{
    digitalWrite(MOTOR_GO, LOW);
    digitalWrite(MOTOR_BACK, LOW);
}
