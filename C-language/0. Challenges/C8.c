/*
Given three integers, print the largest
*/ 

#include <stdio.h>

int main() {
  int a;
  int b;
  int c;

  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("Enter third number: ");
  scanf("%d", &c);

  int max = 0;
  if (a > b && a > c) {
    max = a;
  } else if (b > a && b > c) {
    max = b;
  } else {
    max = c;
  }
  printf("Largest number among %d, %d, and %d is %d", a, b, c, max);
}
