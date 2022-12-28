#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    /* 
    // round-off errors (ex1)
    float a, b;
    
    a = 1.,0E20f + 1.0f;
    b = a - 1.0E20f;
    
    printf("%f\n", b);
     */

    /* 
    // round-off errors (ex2)
    float a = 0.0f;
    a = a + 0.01f; // x100

    printf("%f\n", a);
     */
    
    /* 
    // overflow
    float max = 3.402823466e+38F;

    printf("%f\n", max);

    max = max * 100.0f;

    printf("%f\n", max);
    */

    /* 
    // underflow
    float f = 1.401298464e-45F;

    printf("%e\n", f);

    f = f / 2.0f; // subnormal

    printf("%e\n", f);
    */
    
    /*
    float f = asinf(1.0f);

    printf("%f\n", f);

    f = asinf(2.0f);
    
    printf("%f\n", f);
    */
    return 0;
}