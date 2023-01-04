#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 5
#define FIRST_CHAR 'A'
#define LAST_CHAR 'J'

int main()
{
    printf("first exam\n\n");

    char c = 'A';
    int count;

    // 줄바꿈 처리 for 문
    // a ~ k 입력  while 문

    for (count = 0; count <= 5; c = 'A', count++){
        while(c <= 'K')
        {
            printf("%c ", c++);
        }
        printf("\n");
    }


    // TBC exam 1

    // int r, c;

    // for (r = 0; r < NUM_ROWS; ++r)
    // {
    //     for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)
    //     {
    //         printf("%c ", c);
    //     }
    //     printf("\n");
    // }

    ////
    printf("\n\nsecond exam\n\n");

    int r;
    // char c;

    for (r = FIRST_CHAR; r <= LAST_CHAR; r++)
    {
        for (c = FIRST_CHAR; c <= r; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }



    // TBC exam 2

    // int r, c;

    // for (r = 0; r < NUM_ROWS; ++r)
    // {
    //     for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c)
    //     {
    //         printf("%c ", c);
    //     }
    //     printf("\n");
    // }

    ////
    printf("\n\nthird exam\n\n");

    // int r;
    // char c;

    for (r = FIRST_CHAR; r <= LAST_CHAR; r++)
    {
        for (c = r; c <= LAST_CHAR; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }

    // TBC exam 3

    // int r;
    // int c;

    // for(r = 0; r < NUM_ROWS; ++r)
    // {
    //     for (c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS; ++c)
    //     {
    //         printf("%c ", c);
    //     }
    //     printf("\n");
    // }

    return 0;
}