#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    /* sizeof 함수로 변수의 크기 확인 가능
    unsigned int i = 0;

    printf("%u\n", sizeof(unsigned int));
    printf("%u\n", sizeof(i));
    */

    /* 최대값 확인
    unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u = UINT_MAX;

    printf("%u\n", i);
    printf("%u\n", u);

    unsigned int u_max = UINT_MAX;
    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;

    printf("max of uint = %u\n", u_max);
    printf("min of uint = %u\n", u_min);
    printf("max of int = %u\n", i_max);
    printf("min of int = %u\n", i_min);
    */
    
    // 오버플로우 확인
    unsigned int u_max = UINT_MAX;

    char buffer[33];
    _itoa(u_max, buffer, 2); // 2진수로 출력

    printf("decimal : %u\n", u_max);
    printf("binary : %s\n", buffer);
    
    return 0;
}