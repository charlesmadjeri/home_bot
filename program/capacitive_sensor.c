/*
** EPITECH PROJECT, 2023
** projets_perso
** File description:
** capacitive_sensor
*/

#include "home_bot.h"

int read_humidity(void)
{
    int sensorValue = 0;
    int humidityPercentage = 0;

    sensorValue = analogRead(SENSOR);
    humidityPercentage = (int) (sensorValue * 100.0 / 1024.0);
    return humidityPercentage;
}
