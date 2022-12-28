#include <stdio.h>

int main()
{
    int won = 0;
    float dollar = 0;

    printf("달러로 환산하고 싶은 금액을 입력해주세요.\n");
    scanf("%i", &won);

    dollar = won * 0.00078;

    printf("%i원을 달러로 환산하면 %f달러입니다.\n", won, dollar);
    
    return 0;
}