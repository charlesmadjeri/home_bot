/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** header
*/

#ifndef HOME_BOT_H_
    #define HOME_BOT_H_
    #pragma once

    #include <stdio.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <errno.h>
    #include <signal.h>
    #include <wiringPi.h>
    #include <softPwm.h>
    #include <sys/time.h>

    #define MOTOR_GO 24
    #define MOTOR_BACK 25
    #define MOTOR_PWM 23
    #define MOTOR_SPEED 100
    #define SENSOR 1
    #define KEY 10
    #define LED_R 3
    #define LED_G 2
    #define LED_B 5

// Lib/*.c

    void my_putstr(char const *str);
    int my_putchar(char c);
    bool my_getnbr(const char *str, int *nbr);
    void my_putnbr(long long nb);
    int my_strlen(char const *str);
    bool my_swap(int *value1, int *value2);
    char **my_str_to_word_array(char *str);
    char *my_strcpy(char *dest, char const *src);
    bool my_strcmp(char const *s1, char const *s2);

// Program/*.c

    void keycan(void);
    void go(int speed);
    void brake(void);
    void init_wiringpi(void);
    void bubble(unsigned long *a, int n);
    int read_humidity(void);

#endif /* !HOME_BOT_H_ */
