/*
Count digis of a number using while.
*/ 

#include <stdio.h>
#include <math.h>

int main() {
  
  int count = 0;
  int n = 0;

  printf("Enter a number: ");
  scanf("%d", &n);
  
  if (n == 0) {
    count = 1;
  } else {
      while (n != 0) {
        count++;
        n = n / 10;
      }
  }
  
  printf("Number of digits is %d\n", count);

  return 0;
}
