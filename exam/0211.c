#include <stdio.h>

int main()
{
    // 문법 오류는 컴파일을 못하기 때문에 찾기 쉬움.
    // 문맥 오류는 컴파일은 되나, 출력이 잘못되기 때문에 찾기 힘듬.

    int n1, n2, n3, n4;

    n1 = 2;
    n2 = n1 * n1;
    n3 = n2 * n1;
    n4 = n2 * n1; // 문맥 오류

    return 0;
}