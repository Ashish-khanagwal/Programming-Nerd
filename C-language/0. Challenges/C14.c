/*
Write a function:
takes an integer
returns its square
*/ 

#include <stdio.h>
#include <math.h>

int square_of_num(int a) {
  return pow(a, 2);
}

int main() {
  
  int x = 0;
  printf("Enter the integer: ");
  scanf("%d", &x);

  printf("Square of number %d is: %d\n", x, square_of_num(x));
  return 0;
}
