#include <stdio.h>

int main()
{
    int num = 0, sum = 0;

    printf("Enter an integer (q to quit) : ");

    while(scanf("%d", &num) == 1)
    {
        sum += num;
        
        printf("Enter next integer (q to quit) : ");
    }

    printf("입력한 수들의 총합은 %d입니다.\n", sum);

    return 0;
}