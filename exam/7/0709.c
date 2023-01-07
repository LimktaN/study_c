#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp;
    temp = true ? 1024 : 7;
    printf("%d\n", temp);

    temp = false ? 1024 : 7;
    printf("%d\n", temp);


    int a = 1, b = 2;
    int max = (a > b) ? a : b;

    int number;
    scanf("%d", &number);

    bool is_even = (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    // if (number % 2 == 0)
    // {
    //     is_even = true;
    // } else {
    //     is_even = false;
    // }

    // is_even = (number % 2 == 0) ? true : false;

    // if (is_even)
    // {
    //     printf("Even\n");
    // } else {
    //     printf("Odd\n");
    // }

    return 0;
}