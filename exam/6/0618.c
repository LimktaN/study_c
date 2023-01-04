#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int num1, int num2);

int main()
{
    int num1, num2, count, result;

    printf("Input num1, num2 : ");
    while(scanf("%i %i", &num1, &num2) == 2)
    {
        // for (result = 1, count = 0; count < num2; count++)
        //     result *= num1;

        result = compute_pow(num1, num2);
            
        printf("Result = %d\n", result);
    }
    
    return 0;
}

int compute_pow(int num1, int num2)
{
    int result, count;

    for (result = 1, count = 0; count < num2; count++)
            result *= num1;

    return result;
}