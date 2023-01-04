#include <stdio.h>

int main()
{
    // sudo 코드
    int num = 0, sum = 0; // num, sum 을 0으로 초기화한다.

    printf("Enter an integer (q to quit) : "); // 사용자에게 숫자 입력을 안내한다.

    while(scanf("%d", &num) == 1) // 사용자에게 숫자 입력을 받으며, 정수를 받지 않은 경우 종료한다.
    {
        sum += num; // 입력받은 숫자(num)을 sum에 더한다.
        
        printf("Enter next integer (q to quit) : "); // 사용자에게 숫자 입력을 안내한다.
    }

    printf("입력한 수들의 총합은 %d입니다.\n", sum); // 위 과정에서 입력받은 수를 출력한다.

    return 0; // 끝.
}