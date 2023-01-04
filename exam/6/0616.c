#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_DAYS 365

int main()
{
    // char my_chars[] = "Hello, World!";

    // int daily_temperature[NUM_DAYS];
    // double stock_prices_history[NUM_DAYS];

    // printf("%zd\n", sizeof(stock_prices_history));
    // printf("%zd\n", sizeof(double) * NUM_DAYS);
    // printf("%zd\n", sizeof(stock_prices_history[0]));

    int my_number[5];

    my_number[0] = 1;
    my_number[1] = 3;
    my_number[2] = 4;
    my_number[3] = 2;
    my_number[4] = 1024;

    // scanf("%d", &my_number[0]);
    scanf("%d", my_number); // not &

    printf("%d\n", my_number[0]);
    printf("%d\n", my_number[1]);
    printf("%d\n", my_number[2]);
    printf("%d\n", my_number[3]);
    printf("%d\n", my_number[4]);

    // // runtime error
    // my_number[5] = 123; // out of bound

    // // compile error
    // my_numbers = 7;

    // printf("%d\n", my_number[5]);

    return 0;
}