#include <stdio.h> // printf 함수를 위해 전처리기 필요.

int main()
{
    // print formatted
    printf("\"The truth is ...\nI am Ironman.\"\n");
    // 줄바꿈 escape sequence : \n
    // \"

    int x, y, z;
    x = 1;
    y = 4;

    z = x + y;

    printf("The answer is %i\n", z);
    // 변수의 값을 호출하고 싶을때 "%(자료형)", (변수 or 계산식)으로 호출

    printf("%i + %i = %i\n", x, y, z);
    // 여러 변수 호출 시에는 쉼표로 구분하여 순서대로 호출

    printf("\a\n");
    // 경고음 출력

    return 0;
}