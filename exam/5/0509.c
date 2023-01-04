#include <stdio.h>

int main()
{
    int x, y, apples;
    apples = 3;
    ;
    7;
    1 + 2;
    x = 4;
    ++x;
    x = 1 + (y = 5);

    while(x++ < 10)
        y = x + y;
    
    printf("%d\n", y);

    x = 4;
    y = 1 + x++;

    while(x++ < 10)
        printf("%d\n", x);
    
    y = (4 + x++) + (6 + x++);

    return 0;
}