#include <stdio.h>
#include <string.h> // strlen and more

int main()
{
    char str1[100] = "Hello";
    char str2[] = "Hello"; // 용량 안넣을 경우 대입한 값에 맞게 자동으로 생성됨
    char str3[100] = "\0";
    char str4[100] = "\n";

    printf("%zu %zu\n", sizeof(str1), strlen(str1));
    printf("%zu %zu\n", sizeof(str2), strlen(str2));
    printf("%zu %zu\n", sizeof(str3), strlen(str3));
    printf("%zu %zu\n", sizeof(str4), strlen(str4));

    char *str5 = (char*)malloc(sizeof(char) * 100);
    str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o'; str5[5] = '\0';

    printf("%zu %zu", sizeof(str5), strlen(str5));

    return 0;
}