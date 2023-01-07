#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// #define BASE1 12000000.0
// #define BASE2 46000000.0
// #define BASE3 88000000.0
// #define BASE4 150000000.0
// #define BASE5 300000000.0
// #define BASE6 500000000.0

// #define RATE1 (6.0 / 100.0)
// #define RATE2 (15.0 / 100.0)
// #define RATE3 (24.0 / 100.0)
// #define RATE4 (35.0 / 100.0)
// #define RATE5 (38.0 / 100.0)
// #define RATE6 (40.0 / 100.0)
// #define RATE7 (42.0 / 100.0)

// #define BASIC_DEDUCTION 1500000.0

int main()
{
    float a, b;
    printf("과세표준 : ");
    scanf("%f", &a);

    if(a < 12000000)
    {
        b = 0;
    } else if (a < 46000000)
    {
        b = a * 0.15;
    } else if (a < 88000000)
    {
        b = a * 0.24;
    } else if (a < 150000000)
    {
        b = a * 0.35;
    } else if (a < 300000000)
    {
        b = a * 0.38;
    } else if (a < 500000000)
    {
        b = a * 0.4;
    } else
    {
        b = a * 0.42;
    }

    printf("누진공제 : %f", b);


    // // TBC exam
    // double income = 0.0;
    // double tax = 0.0;

    // scanf("%lf", &income);

    // income -= BASIC_DEDUCTION;

    // if (income <= BASE1)
    // {
    //     tax = income * RATE1;
    // }
    // else if (income <= BASE2)
    // {
    //     tax = BASE1 * RATE1 + (income - BASE1) * RATE2;
    // }
    // else if ...

    // printf("Tax is = %f\n", tax);
    // printf("Your income after tax deduction = %f\n", income - tax);

    return 0;
}