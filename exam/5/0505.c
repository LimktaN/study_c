#include <stdio.h>

int main()
{
    printf("Integer division\n");
    printf("%d\n", 14 / 7); // 2
    printf("%d\n", 7 / 2); // 3.5
    printf("%d\n", 7 / 3); // 2.333
    printf("%d\n", 7 / 4); // 1.75
    printf("%d\n", 8 / 4); // 2

    printf("Truncating toward zero (C99)\n");
    printf("%d\n", -7 / 2); // -3.5
    printf("%d\n", -7 / 3); // -2.333
    printf("%d\n", -7 / 4); // -1.75
    printf("%d\n", -8 / 4); // -2

    printf("\nFloating divisions\n");
    printf("%f\n", 9.0 / 4.0); // 2.25
    printf("%f\n", 9.0 / 4); // 2.25

    return 0;
}