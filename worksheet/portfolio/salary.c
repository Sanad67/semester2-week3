#include <stdio.h>

int main(void)
{
   float salary = 36250.0;
   float ni_rate = 8.0;
   float tax_rate = 15.0;

   float ni;
   float tax;
   float take_home;

   // NI deduction
   ni = salary * (ni_rate / 100.0);

   float salary_after_ni = salary - ni;

   // Tax only on portion above £12500
   float taxable_amount = salary_after_ni - 12500.0;

   if (taxable_amount < 0)
   {
      taxable_amount = 0;
   }

   tax = taxable_amount * (tax_rate / 100.0);

   // Final take-home
   take_home = salary_after_ni - tax;

   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni);
   printf("Tax contribution £%.2f\n", tax);
   printf("Take home salary £%.2f\n", take_home);

   return 0;
}
