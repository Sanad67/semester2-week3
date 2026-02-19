
#include <stdio.h>

/*
 * Exaple using pointers and dereferencing
 */

int main(void)
{

    float f = 2.3;
    int k = -2;

    float *pf = &f; // assign the pointer so that it can access the value of f
    float *pk = &k; // assign the pointer so taht is can access the value of k

    float sum; // compute the sum of the primitive values with appropriate casting

    sum = f + (float)k;
    printf("%f\n", sum);

    // compute the sum via the pointers, using appropriate casting
    sum = *pf + (float)(*pk);
    printf("%f\n", sum);
    return 0;
}