#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // int tv, fv;
    // tv = (1 < 2); // 1
    // fv = (1 > 2); // 0

    // printf("True is %d\n", tv);
    // printf("False is %d\n", fv);

    int i = -5;
    while (i) // i 가 true 일때 실행, true는 1 이상
    {
        printf("%d is true\n", i++);
    }
    printf("%d is false\n", i);

    return 0;
}