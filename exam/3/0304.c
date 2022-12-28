#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
int main()
{
    int i = 0, j = 0, sum = 0;

    printf("Input two integers\n");

    scanf("%d%d", &i, &j);

    sum = i + j;

    // printf("%d + %d = %d\n", i, j, i+j);
    printf("%d + %d = %d\n", i, j, sum);
    
    return 0;
}
*/

int main()
{
    float won = 0;
    float dollar = 0;

    printf("Input Won\n");
    scanf("%f", &won);

    dollar = won * 0.00079f;

    printf("Dollar = %f\n", dollar);

    return 0;
}

// https://alvinalexander.com/programming/printf-format-cheat-sheet