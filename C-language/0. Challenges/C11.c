/*
Create a simple calculator:

input operator (+, -, *, /)
input two numbers
use switch to compute result
*/ 

#include <stdio.h>

int main() {

  char op = '\0';
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  float n1 = 0.0f;
  float n2 = 0.0f;
  
  printf("Enter first number: ");
  scanf("%f", &n1);

  printf("Enter second number: ");
  scanf("%f", &n2);

  float n = 0.0f;

  switch (op) {
    case '+':
      n = n1 + n2;
      printf("n1 %c n2 = %.2f\n", op, n);
      break;
    case '-':
      n = n1 - n2;
      printf("n1 %c n2 = %.2f\n", op, n);
      break;
    case '*':
      n = n1 * n2;
      printf("n1 %c n2 = %.2f\n", op, n);
      break;
    case '/':
      n = n1 / n2;
      printf("n1 %c n2 = %.2f\n", op, n);
      break;
    default:
      printf("Invalid operator\n");
  }

  return 0;
}
