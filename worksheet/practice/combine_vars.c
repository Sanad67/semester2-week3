#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main(void)
{

    double d = 1.0 / 3.0;
    float f = 2.3;
    int k = -7;

    // you can verify sums by comparing to a calculator
    // d/k as a double to 16 d.p.
    printf("d/k (double)      = %.16f\n", d / (double)k);
    // f-d as a double to 16 d.p.
    printf("f-d (double)      = %.16f\n", (double)f - d);
    // f-d as a float to 16 d.p. (force rounding to float)
    printf("f-d (float)       = %.16f\n", (double)((float)((double)f - d)));
    // k+d as a double to 16 d.p.
    printf("k+d (double)      = %.16f\n", (double)k + d);

    return 0;
}