// 문자는 아스키코드 참고
// https://en.cppreference.com/w/c/language/ascii

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{    
    char c = 'A';
    char d = 65; // d = 'A'

    /* 문자, 숫자 입력 차이 확인
    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);
    */

    /* 숫자를 더 했을 때 다음 문자 출력 확인 
    printf("%c\n", c + 1);
    */
    
    /*
    char a = '\a';
    printf("%c", a);

    printf("\07");
    printf("\x7");
    */

    float salary;

    printf("$______\n");
    printf("$______\b\b\b\b\b\b");
    scanf("%f\n", &salary);

    printf("AB\tCDEF\n");
    printf("ABC\tDEF\n");

    printf("\\ \'HA+\' \"Hello\" \?\n");
    
    return 0;
}