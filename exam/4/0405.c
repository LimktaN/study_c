#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f // 기호적 상수
#define AI_NAME "Friday"

int main()
{
    // const를 활용해 선언했다면 값 변경 불가함
    // const float pi = 3.141592f;
    // pi = 1.0f;

    float radius, area, circum;

    printf("I'm %s\n", AI_NAME);
    printf("Please, input radius\n");

    scanf("%f", &radius);

    // area = 3.141592f * radius * radius; // area = pi*r*r
    area = PI * radius * radius;
    // circum = 2.0 * 3.141592f * radius; // circum = 2.0 * pi * r
    circum = 2.0 * PI * radius; // circum = 2.0 * pi * r

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    return 0;
}