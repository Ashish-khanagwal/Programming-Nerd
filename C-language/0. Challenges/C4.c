// CHALLENGE -> Write a program to check if a number is even or odd.
#include <stdio.h>

int main() {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("Number %d is even.", a);
  } else {
    printf("Number %d is odd.", a);
  }

  return 0;
}
