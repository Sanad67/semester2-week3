
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Sanad Dodokh
 * ID:201953032
 */

int main(void)
{

   // define and initialise variables for the problem data
   float salary = 3000;
   float ni;
   float tax;
   float take_home;
   // calculate the deductions and final take-home salary
   ni = salary * 0.12;
   tax = salary * 0.20;
   take_home = salary - ni - tax;
   // Use only these print statement with appropriate formatting and variable names
   printf("Salary £...", salary);
   printf("NI contribution £...", ni);
   printf("Tax contribution £...", tax);
   printf("Take home salary £...", take_home);

   return 0;
}