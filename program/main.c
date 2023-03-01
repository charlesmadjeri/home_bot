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

    unsigned long *data = malloc(sizeof(int) * 1000);

    while (1) {
        for (int i = 0; i < 1000; i++)
            data[i] = read_humidity();
        bubble(data, 1000);
        my_putnbr(data[500]);
        my_putchar('\n');
    }
    free(data);
    return 0;
}
