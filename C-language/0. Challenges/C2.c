// CHALLENGE -> Ask the user for two numbers and print their sum.
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int sum = 0;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);
  sum = a + b;
  printf("The sum of both the numbers is: %d", sum);

  return 0;
}
