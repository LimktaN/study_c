#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5
#define COUNT 10

int main()
{
    // int i1 = 0;
    // int i2 = 1;
    // int i3 = 2;
    // //...

    // printf("%d\n", i1);
    // printf("%d\n", i2);
    // printf("%d\n", i3);
    // //...

    // int my_arr[SIZE];

    // for (int i = 0; i < SIZE; ++i)
    // {
    //     my_arr[i] = i;
    //     printf("%d\n", my_arr[i]);
    // }

    int num[COUNT], r, sum;

    printf("Enter %d numbers : ", COUNT);

    for (r = 0, sum = 0; r <= COUNT; r++)
    {
        scanf("%d", &num[r]);
        sum += num[r];
    }

    printf("Sum = %d\n", sum);

    // TBC exam

    // int numbers[SIZE];
    // int sum = 0;
    // int i;
    
    // printf("Enter %d number : ", SIZE);

    // for (i = 0; i < SIZE; ++i)
    // {
    //     scanf("%d", &numbers[i]);
    // }

    // for (i = 0; i < SIZE; ++i)
    // {
    //     sum += numbers[i];
    // }

    // printf("Sum = %d", sum);

    return 0;
}