/*
홍정모의 따라하며 배우는 C언어
3.4 간단한 입출력 프로그램 만들기
*/

// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int won;
	float dollar;

	printf("달러로 환산하고 싶은 금액을 입력하세요.\n");

	scanf("%i", &won);

	dollar = won * 0.00076;

	printf("%i원을 달러로 환산하면 %f달러입니다.\n", won, dollar);

	return 0;
}