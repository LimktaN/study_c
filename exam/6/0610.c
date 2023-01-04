// https://en.cppreference.com/w/c/language/operator_precedence

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // +=, -=, *=, /=, %=

    int i = 1024;

    i = i + 10;
    i += 10;

    i %= 4;

    i = i * (1 + 2);
    i *= 1 + 2;
    i *= (1 + 2);

    for (int i = 0; i < 10; i += 2)
        ;

    return 0;
}