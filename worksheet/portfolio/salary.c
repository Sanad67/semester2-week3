
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
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni);
   printf("Tax contribution £%.2f\n", tax);
   printf("Take home salary £%.2f\n", take_home);

   return 0;
}