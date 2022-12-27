#include <stdio.h>

void say_hello(void);
/*
case 1 : 호출 전에 다 표기해도 되고,
case 2 : 프로토타이핑 및 호출 이후 함수 내용 표기해도 됨. (prototyping, function declaration)
{
    printf("Hello, World!\n");

    return; // void 함수의 경우 생략 가능
}
*/

int main()
{
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");

    say_hello();
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    
    return 0;
}

void say_hello(void) // function definition
{
    printf("Hello, World!\n");

    return; // void 함수의 경우 생략 가능
}