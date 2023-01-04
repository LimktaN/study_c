#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    // Relational Operators
    // <
    // <=
    // ==
    // >=
    // >
    // !=      is not equal to

    int n = 0;
    while (n++ < 5)
        printf("%d", n);

    printf("\n");


    char c = 'A';
    while(c != 'Z')
        printf("%c ", c++);

    
    const double PI = 3.1415926535;
    double guess = 0.0;

    printf("Input PI : ");
    scanf("%lf", &guess);
    // while (guess != PI)
    while(fabs(guess - PI) > 0.001)
    {
        printf("Fool! Try again.\n");
        printf("Input PI : ");
        scanf("%lf", &guess);
    }

    printf("Good!");
}