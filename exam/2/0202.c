#include <stdio.h> // 전처리기(Preprocessor instruction)

int main(void) // main 함수 정의 시작
{ // 영역(scope)의 시작
    int a; // 변수 선언(variable declaration)
    int b;
    int c;

    a = 1; // 변수에 값 대입(assignment)
    b = 2;
    c = a + b; // 변수에 연산(operation) 결과 대입

    printf("Result is %i", c); // 함수 호출(call or invoke)

    return 0; // 결과 값(value)을 반환(return)
} // 영역(scope)의 끝

// 문장(Statement)