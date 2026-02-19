#include <stdio.h>

int main(void)
{
   double salary, ni_rate, tax_rate;

   double ni = salary * (ni_rate / 100.0);
   double salary_after_ni = salary - ni;

   double taxable_amount = salary_after_ni - 12500.0;
   if (taxable_amount < 0)
      taxable_amount = 0;

   double tax = taxable_amount * (tax_rate / 100.0);
   double take_home = salary_after_ni - tax;

   printf("Salary £%.2f\n", salary);
   printf("NI contribution £%.2f\n", ni);
   printf("Tax contribution £%.2f\n", tax);
   printf("Take home salary £%.2f\n", take_home);

   return 0;
}
