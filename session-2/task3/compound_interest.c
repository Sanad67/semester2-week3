
/*
 * Compute the final result of applying compound interest
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{

    float deposit = 120.0f; // initial deposit
    float rate = 0.05f;     // interest rate
    int term = 5;           // number of years

    float final_amount = deposit * pow(1 + rate, term);
    float gain = final_amount - deposit;
    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */
    printf("Final amount: ", final_amount);
    printf("Gain: ", gain);

    return 0;
}
