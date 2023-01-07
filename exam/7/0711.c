#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <float.h>

int main()
{
    double num, min, max, sum;
    int count = 0;
    bool bnum;

    while(scanf("%lf", &num) == 1)
    {
        if (count == 0) {
            min = max = sum = num;
            printf("First Check min = %lf, max = %lf, sum = %lf, count = %d\n", min, max, sum, count);
        }
        else
        {
            bnum = (num < min) ? min = num : 0;
            bnum = (num > max) ? max = num : 0;
            sum += num;

            printf("Next Check min = %lf, max = %lf, sum = %lf, count = %d\n", min, max, sum, count);
        }
        count++;
    }

    printf("Result min = %.5lf, max = %.5lf, ave = %.5lf\n", min, max, sum/count);

    // TBC exam

    // float max = -FLT_MAX;
    // float min = FLT_MAX;
    // float sum = 0.0f;
    // float input;
    // int n = 0;

    // while (scanf("%f", &input) == 1)
    // {
    //     if (input < 0.0f || input > 100.0f) continue;

    //     max = (input > max) ? input : max;
    //     min = (input < min) ? input : min;
    //     sum += input;

    //     n++;
    // }

    // if (n > 0)
    //     printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
    // else
    //     printf("No input\n");

    return 0;
}