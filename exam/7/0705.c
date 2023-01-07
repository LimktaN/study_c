#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number == 1)
        printf("One");
    else if (number == 2)
        printf("Two");
    else if (number == 3)
        printf("Three");

    if (number == 1)
        printf("One");
    else
        if (number == 2)
            printf("Two");
        else
            if (number == 3)
                printf("Three");
    
    // 127단계까지 지원함

    if (number > 5)
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
    else // if (number > 5) 와 묶인 else
        printf("Less than or equal to 5\n");
                
    return 0;
}