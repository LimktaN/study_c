#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
    printf("수를 입력해주세요 : ");

    while(scanf("%d", &num) == 1)
    {
        sum += num;
        printf("수를 입력해주세요 : ");
    }

    printf("입력한 수들의 총합은 %d입니다.\n", sum);

    return 0;
}