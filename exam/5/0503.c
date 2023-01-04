#include <stdio.h>

int main()
{
    printf("%d\n", 1 + 2);

    int income, salary, bonus;

    income = salary = bonus = 100;

    printf("%d, %d, %d\n", income, salary, bonus);


    salary = 100;
    bonus = 30;

    income = salary + bonus;

    printf("%d, %d, %d\n", income, salary, bonus);

    int takehome, tax;
    tax = 20;
    takehome = income - tax;

    printf("%d, %d, %d, %d, %d\n", income, salary, bonus, takehome, tax);

    int a, b;
    a = -7;
    b = -a;
    b = +a; // 여기서 + 는 아무것도 안함

    printf("%d, %d\n", a, b);

    1.0f + 2; // ?

    return 0;
}