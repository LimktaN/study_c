#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned num;
    bool isPrime = true;
    int i;

    scanf("%u", &num);

    while (num < 2)
    {
        printf("2 이상의 수를 입력해주세요.\n");
        scanf("%u", &num);
    }

    for (i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
        }
    }

    if(isPrime)
    {
        printf("%u is a prime number.\n", num);
    }
    else
    {
        printf("%u is not a prime number.\n", num);
    }

    
    // TBC exam
    unsigned num, div;
    bool isPrime;

    scanf("%u", &num);

    for (div = 2; (div*div) <= num; ++div)
    {
        if(num % div == 0)
        {
            isPrime = false;
            if (num == div * div)
                printf("%u is divisible by %u\n", num, div);
            else
                printf("%u is divisible by %u and %u\n", num, div, num/div);
        }
    }

    if(isPrime)
    {
        printf("%u is a prime number.\n", num);
    }
    else
    {
        printf("%u is not a prime number.\n", num);
    }

    return 0;
}