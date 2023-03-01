/*
** EPITECH PROJECT, 2023
** Epitech
** File description:
** main
*/

#include "home_bot.h"

int main(int ac, char **av, char **env)
{
    my_putstr("Don't forget to run init.sh to reset GPIO's pins\n");
    my_putstr("Press the KEY to start !\n");

    init_wiringpi();

    while (1) {
        my_putstr("H = ");
        my_putnbr(digitalRead(SENSOR));
        my_putchar('\n');
    }
    return 0;
}
