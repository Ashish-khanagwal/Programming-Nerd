#include <stdio.h>
#include <math.h>

int main() {
  
  double principal = 0.0;
  double rate = 0.0;
  int year = 0;
  int timesCompound = 0;
  double total = 0.0;

  printf("Compoune interest calculaor");
  printf("Enter the principal: ");
  scanf("%lf", &principal);

  printf("Enter the interest rate (r): ");
  scanf("%lf", &rate);
  rate = rate / 100;

  printf("Enter the number of years (t): ");
  scanf("%d", &year);

  printf("Enter the number of times compounded per year: ");
  scanf("%d", &timesCompound);

  total = principal * pow(1 + rate / timesCompound, timesCompound * year);
  printf("Total: %.2lf", total);

  return 0;
}
