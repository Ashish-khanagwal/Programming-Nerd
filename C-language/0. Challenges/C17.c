/*
Write a function that:

takes an integer
prints whether it’s even or odd
returns nothing
*/ 

#include <stdio.h>

void even_odd(int a) {
  if (a % 2 == 0) {
    printf("%d is even\n", a);
  } else {
    printf("%d is odd\n", a);
  }
}

int main() {

  int a = 0;
  printf("Enter an number: ");
  scanf("%d", &a);

  even_odd(a);

  return 0;
}
