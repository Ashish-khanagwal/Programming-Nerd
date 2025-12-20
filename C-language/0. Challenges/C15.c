/*
Write a funnction:
takes two integers
returns that largest one
*/ 

#include <stdio.h>

int largest_of_two(int a, int b) {
  int largest = 0;
  if (a > b) {
    largest = a;
  } else {
    largest = b;
  }
  return largest;
}

int main() {

  int a = 0;
  int b = 0;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("The largest number among %d and %d is %d", a, b, largest_of_two(a, b));

  return 0;
}
