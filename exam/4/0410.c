#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>

int mian()
{
    // int i;
    // float f;
    // char str[30];

    // scanf("%d %f %s, &i, &f, str");
    // printf("%d %f %s\n", i, f, str);


    // char c;

    // scanf("%c", &c);
    // printf("%i\n", c);


    // unsigned i;

    // scanf("%i", &i);
    // printf("%i\n", i);


    // unsigned i2;

    // scanf("%u", &i2);
    // printf("%u\n", i2);


    // double d = 0.0;

    // scanf("%lf", &d);
    // printf("%f\n", d);


    // char str[30];

    // scanf("%5s", str);
    // printf("%s\n", str);


    // char i;

    // scanf("%hhd", &i);
    // printf("%i\n", i);


    // int i;

    // scanf("%i", &i);
    // printf("%i\n", i);


    // intmax_t i;

    // scanf("%ji", &i);
    // printf("%ji", i);

    // int a, b;

    // scanf("%d ,%d", &a, &b);
    // scanf("%d, %d", &a, &b);
    // scanf("%d , %d", &a, &b);
    // scanf("%d-%d", &a, &b);
    // scanf("%dA%d", &a, &b);
    // printf("%d %d\n", a, b);

    // int a, b;
    // char c;

    // scanf("%d%c%d", &a, &c, &b);
    // printf("%d|%c|%d", a, c, b);

    // int a, b;
    // int i = scanf("%d%d", a, b);

    // printf("%d", i);

    // int i = 123;
    // int width = 5;

    // printf("Input width : ");
    // scanf("%d", width);
    // printf("%*d\n", width, i);

    int i;

    scanf("%*d%*d%d", &i);
    printf("Your third input = %d\n", i);

    return 0;    
}