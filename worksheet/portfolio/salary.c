
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Sanad Dodokh
 * ID: 201953032
 */

int main(void)
{
   float salary = 36250.0;
   float ni_rate = 8.0;
   float tax_rate = 15.0;

   // Calculations
   float ni_contribution = salary * (ni_rate / 100.0);

   float salary_after_ni = salary - ni_contribution;

   float taxable_amount = salary_after_ni - 12500.0f;
   if (taxable_amount < 0.0f)
   {
      taxable_amount = 0.0f;
   }

   float tax_contribution = taxable_amount * (tax_rate / 100.0f);

   float take_home_salary = salary_after_ni - tax_contribution;

   // Use only these print statements with appropriate formatting and variable names
   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni_contribution);
   printf("Tax contribution £%.2f\n", tax_contribution);
   printf("Take home salary £%.2f\n", take_home_salary);

   return 0;
}