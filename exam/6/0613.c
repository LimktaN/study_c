#include <stdio.h>

int main()
{
    int pass = 0;

    /*
    while(pass != 1234){
        printf("암호를 다시 입력해주세요 : ");
        scanf("%d", &pass);
    }
    */

    do
    {
        printf("암호를 다시 입력해주세요 : ");
        scanf("%d", &pass);
    } while (pass != 1234);

    printf("유효한 암호입니다.\n");

    return 0;
}