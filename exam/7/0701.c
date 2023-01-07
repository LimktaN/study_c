#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int number;

    printf("Input a positive integer : ");
    scanf("%d", &number);

    if(0 == number%2)
    {
        printf("Even\n");
    } else // if(1 == number%2) // == 'number % 2 != 0'
    {
        printf("Odd\n");
    }

    return 0;
}