#include <stdio.h>

int main()
{
    int num = 0, sum = 0;

    while(sum < 10000)
    {
        printf("수를 입력해주세요 : ");
        scanf("%d", &num);
        sum += num;
    }

    printf("입력한 수들의 총합은 %d입니다.\n", sum);

    return 0;
}