/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** gpio
*/

#include "home_bot.h"

void init_wiringpi(void)
{
    wiringPiSetup();

    pinMode(MOTOR_GO, OUTPUT);
    pinMode(MOTOR_BACK, OUTPUT);
    pinMode(MOTOR_PWM, OUTPUT);

    pinMode(SENSOR, INPUT);

    pinMode(KEY, INPUT);

    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);

    softPwmCreate(SENSOR, 0, 100);
    softPwmCreate(MOTOR_PWM, 0, 100);
}
