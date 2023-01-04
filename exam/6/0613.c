#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int rpw = 1234;
    int pw;

    // printf("Enter secret code : ");
    // scanf("%d", &pw);

    // while(pw != rpw)
    // {
    //     printf("Enter secret code : ");
    //     scanf("%d", &pw);
    // }

    do
    {
        printf("Enter secret code : ");
        scanf("%d", &pw);
    } while (pw != rpw);    

    printf("Good!\n");

    return 0;
}