/*
Write a program that:
takes an integer
prints whether it’s positive, negative, or zero
*/ 

#include <stdio.h>

int main() {
  
  int x;
  printf("Enter an integer: ");
  scanf("%d", &x);

  if (x == 0) {
    printf("Entered integer is 0\n");
  } else if (x > 0) {
    printf("Entered integer is positive\n");
  } else {
    printf("Entered integer is negative\n");
  }

  return 0;
}
