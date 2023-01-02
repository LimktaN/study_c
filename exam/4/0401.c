#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    // char fruit_name; // 한 글자만 받음
    char fruit_name[40]; // 40자 받음

    printf("What is your favorate fruit?\n");

    // scanf("%s", &fruit_name); // 2자 이상의 문자인 경우 & 필요없음.
    scanf("%s", fruit_name);

    // printf("You like %c\n", fruit_name); // 한 글자인 경우 char
    printf("You like %s\n", fruit_name); // 여러 글자인 경우 string

    return 0;
}