/*
Compute factorial of a number using for.
*/ 

#include <stdio.h>
#include <math.h>

int main() {
  
  int n;
  int fact = 1;
  printf("Enter the number you want factorial of: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) { 
    fact = fact * i;
  }
  printf("The factorial of number %d is %d\n", n, fact);

  return 0;
}
